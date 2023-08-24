CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare M int ;
set M=N-1;
  RETURN (
     
    SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT M, 1   
      
  );
END