# Write your MySQL query statement below
select unique_id, name from Employees e1 Left join EmployeeUNI e2 on e1.id=e2.id