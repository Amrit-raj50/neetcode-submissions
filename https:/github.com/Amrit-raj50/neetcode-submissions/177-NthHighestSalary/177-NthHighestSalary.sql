-- Last updated: 04/08/2026, 23:16:13
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
     select distinct salary
     from Employee
     order by salary desc
     limit 1
     offset N
  );
END