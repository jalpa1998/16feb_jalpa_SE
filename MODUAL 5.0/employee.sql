create database officedb;

use officedb;

create table employee(
  EMPLOYEE_ID INTEGER PRIMARY KEY,
  FIRST_NAME varchar(50),
  LAST_NAME varchar(10),
  SALARY INTEGER,
  JOINING_DATE date,
  DEPARTMENT varchar(50)
  );
  
create table Incentives(
EMPLOYEE_REF_ID INTEGER,
INCENTIVE_DATE date,
INCENTIVE_AMOUNT INTEGER
);

INSERT INTO Employee (EMPLOYEE_ID,FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES
(1,'john','abraham',1000000,'2013-01-01','BANKING'),
(2,'michael','clarke',800000,'2013-01-01','INSURANCE'),
(3,'roy','thomas',700000,'2013-02-01','BANKING'),
(4,'tom','jose',600000,'2013-02-01','INSURANCE'),
(5,'jerry','pinto',650000,'2013-02-01','INSURANE'),
(6,'phlile','mathew',7500000,'2013-02-01','SERVICES'),
(7,'testname','123',650000,'2013-01-13','SERVICES'),
(8,'testname','lname%',600000,'2013-02-13','INSURANCE');

INSERT INTO Incentives (EMPLOYEE_REF_ID,INCENTIVE_DATE,	INCENTIVE_AMOUNT)VALUES
(1,'2013-02-01',5000),
(2,'2013-02-01',4000),
(3,'2013-02-01',3000),
(1,'2013-01-01',4500),
(2,'2013-01-01',3500);

select * from employee where FIRST_NAME="TOM"; 

select FIRST_NAME,JOINING_DATE date,SALARY from employee;

select * from employee where FIRST_NAME like 'J%';

select DEPARTMENT , MAX(SALARY) FROM employee;

select FIRST_NAME,INCENTIVE_AMOUNT from employee a inner join incentives B on A.EMPLOYEE_ID = B.EMPLOYEE_REF_ID and INCENTIVE_AMOUNT > 3000;

select *from employee;

create table stbackup( EMPLOYEE_ID INTEGER PRIMARY KEY,FIRST_NAME varchar(50),LAST_NAME varchar(10),SALARY INTEGER,JOINING_DATE date,DEPARTMENT varchar(50));

DELIMITER // 
CREATE TRIGGER newbackup
AFTER INSERT  
ON employee
FOR EACH ROW  
BEGIN  
insert into stbackup(firstname,lastname,salary,joining_date,department)values
(NEW.name,NEW.lastname,NEW.salary,NEW.joining_date,NEW.department,"RECORD IN VIEW TABLE");
END //
DELIMITER ;  