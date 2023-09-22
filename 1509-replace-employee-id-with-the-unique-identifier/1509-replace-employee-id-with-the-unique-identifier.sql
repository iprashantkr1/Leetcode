# Write your MySQL query statement below
SELECT eu.unique_id as unique_id , e.name as name
FROM Employees e
LEFT JOIN EmployeeUNI eu
ON e.id=eu.id;