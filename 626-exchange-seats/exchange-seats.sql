# Write your MySQL query statement below
select 
case
when id%2=1  And id=(select max(id) from Seat) then id
WHEN id%2=1 THEN id+1
ELSE  id-1
END AS id,student from 
Seat order by id