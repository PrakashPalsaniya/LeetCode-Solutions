# Write your MySQL query statement below
select distinct u.name, IFNULL(sum(t.distance)over (partition by u.id),0)
AS travelled_distance
from Users u
left join Rides t
 on u.id = t.user_id
 order by travelled_distance desc , u.name asc;