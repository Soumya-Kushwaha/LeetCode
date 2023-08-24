# Write your MySQL query statement below
(SELECT 
    "Low Salary" AS category,
    COUNT(DISTINCT account_id) AS accounts_count 
FROM 
    Accounts 
WHERE 
    income < 20000)
UNION 
    (SELECT "Average Salary" AS category , 
        COUNT(DISTINCT account_id) AS accounts_count 
        FROM 
            Accounts WHERE income >= 20000 
        AND
         income <= 50000) 
UNION 
    (SELECT 
        "High Salary" AS category,  
        COUNT(DISTINCT account_id) As accounts_count 
        FROM 
            Accounts 
        WHERE 
            income>50000)
ORDER BY
    accounts_count ;