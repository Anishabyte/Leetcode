# Write your MySQL query statement below
select 
w1.id 
From weather w1,weather w2
Where datediff(w1.recorddate,w2.recorddate)=1 and w1.temperature>w2.temperature