-- CREATE statement
-- Create a new record with a random id
CREATE person SET name = 'Tobie', company = 'SurrealDB', skills = ['Rust', 'Go', 'JavaScript'];

-- Create a new record with a specific numeric id
CREATE person:100 SET name = 'Tobie', company = 'SurrealDB', skills = ['Rust', 'Go', 'JavaScript'];

-- Create a new record with a specific string id
CREATE person:tobie SET name = 'Tobie', company = 'SurrealDB', skills = ['Rust', 'Go', 'JavaScript'];


-- Create a new record with a random id
CREATE person CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript'],
};

-- Create a new record with a specific id
CREATE person:tobie CONTENT {
	name: 'Tobie',
	company: 'SurrealDB',
	skills: ['Rust', 'Go', 'JavaScript'],
};


-- Don't return any result
CREATE person SET age = 46, username = "john-smith" RETURN NONE;

-- Return the changeset diff
CREATE person SET age = 46, username = "john-smith" RETURN DIFF;

-- Return the record before changes were applied
CREATE person SET age = 46, username = "john-smith" RETURN BEFORE;

-- Return the record after changes were applied (the default)
CREATE person SET age = 46, username = "john-smith" RETURN AFTER;

-- Return a specific field only from the updated records
CREATE person SET age = 46, username = "john-smith", interests = ['skiing', 'music'] RETURN interests;
