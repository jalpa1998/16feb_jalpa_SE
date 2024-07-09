create database schooldb;

use schooldb;

create table student(FirstName varchar(20),
	LastName varchar(20),
    Address varchar(50),
    City varchar(20),
    age int
);

insert into student(firstname,lastname,address,city,age)value
('micky','mouse','123fentasy way','anaheim',73),
('bat','man','321 cavern ave','gotham',54),
('wonder','woman','986 truth way','parafise',39),
('donald','duck','555 quack street','mallard',65),
('bugs','bunny','567 carrot street','rascal',58),
('wailey','coyote','999 acme way','canyon',61),
('cat','woman','234 pourrfect street','hairball',32),
('tweety','bird','543','ititltaw',28);

select * from student;