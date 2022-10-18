/*==============================================================*/
/* DBMS name:      ORACLE Version 11g                           */
/* Created on:     2022/4/29 10:42:20                           */
/*==============================================================*/


alter table "book"
   drop constraint FK_BOOK_PUBLISH_PRESS;

alter table "borrow"
   drop constraint FK_BORROW_BORROWDAT_BORROWER;

alter table "borrow"
   drop constraint FK_BORROW_RETURNDAT_BOOK;

drop index "publish_FK";

drop table "book" cascade constraints;

drop index "returndate_FK";

drop index "borrowdate_FK";

drop table "borrow" cascade constraints;

drop table "borrower" cascade constraints;

drop table "press" cascade constraints;

/*==============================================================*/
/* Table: "book"                                                */
/*==============================================================*/
create table "book"
(
   "bookno"             VARCHAR2(20)         not null,
   "pressname"          VARCHAR2(30),
   "bookname"           VARCHAR2(60),
   constraint PK_BOOK primary key ("bookno")
);

/*==============================================================*/
/* Index: "publish_FK"                                          */
/*==============================================================*/
create index "publish_FK" on "book" (
   "pressname" ASC
);

/*==============================================================*/
/* Table: "borrow"                                              */
/*==============================================================*/
create table  "borrow"
(
   "licenceno"          VARCHAR2(10)         not null,
   "bookno"             VARCHAR2(20)         not null,
   "borrowdate"         DATE,
   "returndate"         DATE,
   constraint PK_BORROW primary key ("licenceno", "bookno")
);

/*==============================================================*/
/* Index: "borrowdate_FK"                                       */
/*==============================================================*/
create index "borrowdate_FK" on "borrow" (
   "licenceno" ASC
);

/*==============================================================*/
/* Index: "returndate_FK"                                       */
/*==============================================================*/
create index "returndate_FK" on "borrow" (
   "bookno" ASC
);

/*==============================================================*/
/* Table: "borrower"                                            */
/*==============================================================*/
create table "borrower"
(
   "licenceno"          VARCHAR2(10)         not null,
   "borname"            VARCHAR2(30),
   constraint PK_BORROWER primary key ("licenceno")
);

/*==============================================================*/
/* Table: "press"                                               */
/*==============================================================*/
create table "press"
(
   "pressname"          VARCHAR2(30)         not null,
   "pressaddr"          VARCHAR2(150),
   constraint PK_PRESS primary key ("pressname")
);

alter table "book"
   add constraint FK_BOOK_PUBLISH_PRESS foreign key ("pressname")
      references "press" ("pressname");

alter table "borrow"
   add constraint FK_BORROW_BORROWDAT_BORROWER foreign key ("licenceno")
      references "borrower" ("licenceno");

alter table "borrow"
   add constraint FK_BORROW_RETURNDAT_BOOK foreign key ("bookno")
      references "book" ("bookno");
