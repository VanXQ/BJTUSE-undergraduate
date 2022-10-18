create table student
(
    sno           Varchar2(8)
        primary key ,
    sname         Varchar2(8) not null,
    ssex          Varchar2(3)  check(ssex in ('男' , '女')),
    sbirthday     date,
    classno       Varchar2(6),

    "Totalcredit" Smallint   default 0,
    "CreatedBy"   Varchar(8) default '20301174',
    foreign key (classno) references class(classno)
);

create table class
(
    classno       Varchar2(6)
            primary key,
    classname     Varchar(20) not null,
    classmajor    Varchar2(20),
    classdept     Varchar2(20),
    studentnumber smallint check ( studentnumber between 20 and 40)
);

create table course
(
    cno     Varchar2(6)
            primary key,
    cname   Varchar(30) not null,
    ccredit smallint check ( ccredit between 1 and 4)
);

create table sc
(
    sno   varchar(8),
    foreign key (sno) references student(sno),
    cno   varchar(6),
    foreign key (cno) references course(cno),
    grade integer check ( grade between 0 and 100)
);

create table teacher
(
    tno         Number(6)
            primary key,
    tname       Varchar2(8) not null,
    tsex        Varchar2(2) check(tsex in ('男' , '女')),
    tbirthday   date,
    ttitle      Varchar2(20),
    "CreatedBy" Varchar2(8) default '20301174'
);

create table teaching
(
    tno      Number(6),
    foreign key (tno) references teacher(tno),
    cno      Varchar2(6),
    foreign key (cno) references course(cno),
    language Varchar2(10) check (language in ( 'Chinese' , 'Bilingual' , 'English') )
);


alter table STUDENT
    modify SNAME VARCHAR2(9);

alter table TEACHER
    modify TSEX VARCHAR2(3);

alter table TEACHER
    modify TNAME VARCHAR2(9);

insert into CLASS values ('RJ2001','软件2001','软件工程','软件开发',24);
insert into CLASS values ('RJ2002','软件2002','软件工程','软件开发',26);
insert into CLASS values ('RJ2003','软件2003','软件工程','数字媒体',25);
insert into CLASS values ('RJ2004','软件2004','软件工程','软件开发',25);
insert into CLASS values ('RJ2005','软件2005','软件工程','数字媒体',24);
insert into CLASS values ('RJ2006','软件2006','软件工程','软件开发',24);

insert into COURSE values ('800001','计算机基础',4);
insert into COURSE values ('800002','程序设计语言',4);
insert into COURSE values ('800003','数据结构',4);
insert into COURSE values ('810011','数据库系统',4);
insert into COURSE values ('810013','计算机网络',3);
insert into COURSE values ('810015','微机原理与应用',4);

insert into  STUDENT values ('20300010','李在','男',to_date('2001/10/1','yyyy/mm/dd'),'RJ2001',default,default);
insert into  STUDENT values ('20300012','葛畅','男',to_date('2002/8/8','yyyy/mm/dd'),'RJ2001',default,default);
insert into  STUDENT values ('20300015','刘晶','女',to_date('2003/5/22','yyyy/mm/dd'),'RJ2001',default,default);
insert into  STUDENT values ('20300020','杨敏','女',to_date('2001/1/8','yyyy/mm/dd'),'RJ2001',default,default);
insert into  STUDENT values ('20300030','胡贤斌','男',to_date('2002/10/8','yyyy/mm/dd'),'RJ2001',default,default);
insert into  STUDENT values ('20300048','赵鸿泽','男',to_date('2003/6/6','yyyy/mm/dd'),'RJ2002',default,default);
insert into  STUDENT values ('20300050','王威','男',to_date('2004/6/10','yyyy/mm/dd'),'RJ2002',default,default);
insert into  STUDENT values ('20300067','赵玮','女',to_date('2002/8/21','yyyy/mm/dd'),'RJ2003',default,default);
insert into  STUDENT values ('20300075','王娜娜','女',to_date('2003/9/23','yyyy/mm/dd'),'RJ2003',default,default);
insert into  STUDENT values ('20300088','秦键','男',to_date('2004/3/1','yyyy/mm/dd'),'RJ2003',default,default);
insert into  STUDENT values ('20300100','田邦仪','女',to_date('2003/2/26','yyyy/mm/dd'),'RJ2004',default,default);
insert into  STUDENT values ('20300148','赵心砚','男',to_date('2002/4/25','yyyy/mm/dd'),'RJ2005',default,default);
insert into  STUDENT values ('20300150','杨青','女',to_date('2004/11/15','yyyy/mm/dd'),'RJ2005',default,default);
insert into  STUDENT values ('20300160','杨玲玲','女',to_date('2002/12/12','yyyy/mm/dd'),'RJ2006',default,default);

insert into SC values ('20300012','800003',88);
insert into SC values ('20300015','800003',null);
insert into SC values ('20300020','800003',91);
insert into SC values ('20300030','800003',78);
insert into SC values ('20300048','800003',97);
insert into SC values ('20300100','810011',67);
insert into SC values ('20300148','810011',58);
insert into SC values ('20300150','810011',89);
insert into SC values ('20300160','810011',71);

insert into TEACHER values ('000001','李英','女',to_date('1975/11/3','yyyy/mm/dd'),'讲师',default);
insert into TEACHER values ('000002','王大山','男',to_date('1969/3/2','yyyy/mm/dd'),'副教授',default);
insert into TEACHER values ('000003','张朋','男',to_date('1970/2/13','yyyy/mm/dd'),'讲师',default);
insert into TEACHER values ('000004','陈为军','男',to_date('1985/8/14','yyyy/mm/dd'),'助教',default);
insert into TEACHER values ('000005','宋浩然','男',to_date('1976/4/23','yyyy/mm/dd'),'讲师',default);
insert into TEACHER values ('000006','许红霞','女',to_date('1966/2/12','yyyy/mm/dd'),'副教授',default);
insert into TEACHER values ('000007','徐永军','男',to_date('1962/1/24','yyyy/mm/dd'),'教授',default);
insert into TEACHER values ('000008','李桂菁','女',to_date('1960/12/15','yyyy/mm/dd'),'教授',default);
insert into TEACHER values ('000009','王一凡','女',to_date('1974/12/8','yyyy/mm/dd'),'讲师',default);
insert into TEACHER values ('000010','田峰','男',to_date('1988/1/18','yyyy/mm/dd'),'助教',default);

insert into TEACHING values ('000001','800001','English');
insert into TEACHING values ('000002','800002','Chinese');
insert into TEACHING values ('000002','800003','Bilingual');
insert into TEACHING values ('000003','810011','Chinese');
insert into TEACHING values ('000004','810013','English');
insert into TEACHING values ('000005','800001','Chinese');
insert into TEACHING values ('000006','800002','Chinese');
insert into TEACHING values ('000007','800003','English');
insert into TEACHING values ('000007','810011','English');
insert into TEACHING values ('000008','810013','Bilingual');
