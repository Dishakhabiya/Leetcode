# Write your MySQL query statement below
With ranked as (
    select d.name as Department, 
    e.name as Employee,
    e.salary as Salary,
    DENSE_RANK() OVER (PARTITION BY d.id order by e.salary  DESC) as rnk from Employee  as e
    join Department as d on e.departmentId=d.id 
)

select Department,Employee,Salary from ranked where rnk=1;