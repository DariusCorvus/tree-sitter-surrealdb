-- UPDATE statement
-- Update all records in a table
UPDATE person SET skills += ['breathing'];

-- Update or create a record with a specific numeric id
UPDATE person:100 SET name = 'Tobie', company = 'SurrealDB', skills = ['Rust', 'Go', 'JavaScript'];

-- Update or create a record with a specific string id
UPDATE person:tobie SET name = 'Tobie', company = 'SurrealDB', skills = ['Rust', 'Go', 'JavaScript'];


-- Update a document and increment a numeric value
UPDATE webpage:home SET click_count += 1;

-- Update a document and remove a tag from an array
UPDATE person:tobie SET interests -= 'Java';


-- Update all records which match the condition
UPDATE city SET population = 9541000 WHERE name = 'London';


-- Update all records with the same content
UPDATE person CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript'],
};

-- Update a specific record with some content
UPDATE person:tobie CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript'],
};


-- Update certain fields on all records
UPDATE person MERGE {
	settings: {
		marketing: true,
	},
};

-- Update certain fields on a specific record
UPDATE person:tobie MERGE {
	settings: {
		marketing: true,
	},
};


-- Don't return any result
UPDATE person SET interests += 'reading' RETURN NONE;

-- Return the changeset diff
UPDATE person SET interests += 'reading' RETURN DIFF;

-- Return the record before changes were applied
UPDATE person SET interests += 'reading' RETURN BEFORE;

-- Return the record after changes were applied (the default)
UPDATE person SET interests += 'reading' RETURN AFTER;

-- Return a specific field only from the updated records
UPDATE person:tobie SET interests = ['skiing', 'music'] RETURN name, interests;


UPDATE person SET important = true WHERE ->knows->person->(knows WHERE influencer = true) TIMEOUT 5s;
