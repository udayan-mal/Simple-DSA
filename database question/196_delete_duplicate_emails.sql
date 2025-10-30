-- 196. Delete Duplicate Emails
--
-- Description:
-- Table: Person
-- +-------------+---------+
-- | Column Name | Type    |
-- +-------------+---------+
-- | id          | int     |
-- | email       | varchar |
-- +-------------+---------+
-- id is the primary key (column with unique values) for this table.
-- Each row of this table contains an email. The emails will not contain uppercase letters.
--
-- Write a solution to delete all duplicate emails, keeping only one unique email with the smallest id.
-- Note: You are supposed to write a DELETE statement and not a SELECT one.


DELETE p1
FROM
    Person p1,
    Person p2
WHERE
    p1.email = p2.email AND p1.id > p2.id;