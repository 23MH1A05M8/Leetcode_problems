# Write your MySQL query statement below
select Emp.name as Employee from Employee m
inner join Employee emp
on 
m.id=emp.managerId
where m.salary<emp.salary;