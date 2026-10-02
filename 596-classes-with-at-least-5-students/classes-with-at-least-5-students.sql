# Write your MySQL query statement below
select class from (select class,count(*) as cnt from Courses group By class having  cnt>=5) as classcount;