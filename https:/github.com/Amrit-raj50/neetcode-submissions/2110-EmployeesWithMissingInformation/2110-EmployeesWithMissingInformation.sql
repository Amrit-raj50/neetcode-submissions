-- Last updated: 31/07/2026, 19:39:07
# Write your MySQL query statement below
select e.employee_id
from Employees e
left join Salaries s
on e.employee_id = s.employee_id
where s.salary IS null

union

select s.employee_id
from Employees e
right join Salaries s
on e.employee_id = s.employee_id
where e.name IS null

order by employee_id