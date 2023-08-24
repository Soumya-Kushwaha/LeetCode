# Write your MySQL query statement below
SELECT score, dense_rank() over(order by Score desc) as "rank" FROM Scores 