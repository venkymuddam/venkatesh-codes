CREATE USER emp_db IDENTIFIED BY abel;

GRANT CONNECT,RESOURCE TO emp_db;

ALTER USER emp_db QUOTA UNLIMITED ON USER;

DROP TABLE COUNTRIES;
DROP TABLE DEPARTMENTS;
DROP TABLE CITIES;
DROP TABLE EMPLOYEES;


CREATE USER airline IDENTIFIED BY abel;

GRANT CONNECT,RESOURCE TO airline;

ALTER USER airline QUOTA UNLIMITED ON USERS;

DROP TABLE COUNTRIES;
DROP TABLE DEPARTMENTS;
DROP TABLE CITIES;
DROP TABLE EMPLOYEES;
