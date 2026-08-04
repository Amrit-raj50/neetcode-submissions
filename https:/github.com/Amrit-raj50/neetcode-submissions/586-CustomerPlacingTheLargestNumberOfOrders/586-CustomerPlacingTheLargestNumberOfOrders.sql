-- Last updated: 04/08/2026, 23:15:27
# Write your MySQL query statement below
select customer_number
from Orders
group by customer_number
order by count(*) desc
limit 1