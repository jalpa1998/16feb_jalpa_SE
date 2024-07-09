create database examdb;

use examdb;

CREATE TABLE student(
ID int,
Name varchar(20),
branch varchar(20),
primary key (ID)
);

CREATE TABLE exam(
  id int,
  s_code varchar(20),
  mark int,
  p_code varchar(20)
  );

insert into student(id,name,branch)value
(1,'jay','computer scicnce'),
(2,'suhani','electronic and com'),
(3,'kriti','electronic ane com');

insert into exam(id,s_code,mark,p_code)value
(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');

select * from student;

select * from exam;


