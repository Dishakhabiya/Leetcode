# Write your MySQL query statement below
with ranked as (
    select d.name as Department,e.name as Employee,e.salary as Salary,
     DENSE_RANK() OVER (partition by d.id order by salary desc) as rnk
     from employee as e join department as d on e.departmentId=d.id
)

select Department,Employee,Salary from ranked where rnk<=3 