# Write your MySQL query statement below
SELECT name FROM Employee WHERE Id IN (SELECT DISTINCT managerId FROM Employee GROUP BY managerId HAVING COUNT(managerId) >= 5);