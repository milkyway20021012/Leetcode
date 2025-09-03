# Write your MySQL query statement below

select email as Email from Person having count(email) > 2;