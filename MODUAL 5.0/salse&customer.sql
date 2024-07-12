Create database shopdb;

use shopdb;


create table salseperson(
selse_id VARCHAR(20),
sname VARCHAR(20),
city VARCHAR(20),
comm double default '0.0'
);

create table customer(
customer_id varchar(20),
cname VARCHAR(20),
city VARCHAR(20),
rating int,
sno int,
primary key(customer_id)
);

insert into salseperson ( selse_id,sname,city,comm)values
(1001,'peel','london',.12),
(1002,'serres','san jose',.13),
(1004,'motika','london',.11),
(1007,'rafkin','barcelona',.15),
(1003,'axelord','new york',.1);

insert into customer (customer_id,cname,city,rating,sno)values
(201,'hoffman','london',100,1001),
(202,'giovanne','roe',200,1003),
(203,'liu','san jose',300,1002),
(204,'grass','barcelone',100,1002),
(206,'clemens','london',300,1007),
(207,'pereira','roe',100,1004);

Select sname, city from salseperson where comm > 0.12 and city = 'london';

Select sname, city from salseperson where city in ('Barcelona','london');

Select sname, comm from salseperson where comm > 0.10 and comm < 0.12;

Select cname from customer where rating <= 100 or city = 'roe'





