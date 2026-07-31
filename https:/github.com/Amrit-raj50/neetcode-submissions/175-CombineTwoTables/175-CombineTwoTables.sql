-- Last updated: 31/07/2026, 19:42:14
# Write your MySQL query statement below
select p.firstname,p.lastname,a.city,a.state
from Person p
left join Address a
on a.personId = p.personId