-- Last updated: 04/08/2026, 23:16:15
# Write your MySQL query statement below
select max(salary) as SecondHighestSalary
from Employee
where salary < (select max(salary) from Employee)
order by salary desc
limit 1