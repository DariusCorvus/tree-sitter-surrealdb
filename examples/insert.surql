-- INSERT statement
INSERT INTO company {
	name: 'SurrealDB',
	founded: "2021-09-10",
	founders: [person:tobie, person:jaime],
	tags: ['big data', 'database']
};


-- Insert a single record
INSERT INTO company (name, founded) VALUES ('SurrealDB', '2021-09-10');

-- Insert multiple records
INSERT INTO company (name, founded) VALUES ('Acme Inc.', '1967-05-03'), ('Apple Inc.', '1976-04-01');


INSERT INTO product (name, url) VALUES ('Salesforce', 'salesforce.com') ON DUPLICATE KEY UPDATE tags += 'crm';


INSERT INTO recordings_san_francisco (SELECT * FROM temperature WHERE city = 'San Francisco');
