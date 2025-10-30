-- 182. Duplicate Emails
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
-- Write a solution to report all the duplicate emails.


SELECT
    email
FROM
    Person
GROUP BY
    email
HAVING
    COUNT(email) > 1;