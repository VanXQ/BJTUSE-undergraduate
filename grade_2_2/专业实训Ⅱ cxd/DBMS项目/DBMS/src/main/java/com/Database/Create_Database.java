package com.Database;

import org.apache.commons.lang3.SerializationUtils;
import proto.DBMS.proto.DBMS;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

//实现数据库的创建功能。对应SQL语句：CREATE DATABASE <database name>。
// 数据库分为用户数据库与系统数据库两种类型，系统数据库为系统创建时由系统创建的数据库
//Ruanko，此数据库不可以被删除。

public class Create_Database {

    public void Create(String db_name) {
        try {


            db_name = java.net.URLDecoder.decode(db_name, StandardCharsets.UTF_8);
            Date date = new Date();
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat();
            simpleDateFormat.applyPattern("yyyy-MM-dd hh:mm:ss a");
            String time = simpleDateFormat.format(date);
            DBMS.Database.DB db = DBMS.Database.DB.newBuilder()
                    .setName(db_name)
                    .setType("user")
                    .setFilePath("DBMS\\src\\main\\resources\\DBMS_ROOT\\database_name")
                    .setDateCreated(time)
                    .build();

            File file;
            file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\database.db");
            List<DBMS.Database.DB> databases;
            if (file.exists()) {
                FileInputStream input = new FileInputStream(file);
                byte[] buf = new byte[20480];
                input.read(buf);
                input.close();
                DBMS.Database database = SerializationUtils.deserialize(buf);
                databases = new ArrayList<>(database.getDbList());
            } else {
                databases = new ArrayList<>();
            }
            databases.add(db);
            DBMS.Database database_1 = DBMS.Database.newBuilder().addAllDb(databases).build();
            FileOutputStream fileOutputStream =
                    new FileOutputStream("DBMS\\src\\main\\resources\\DBMS_ROOT\\database.db");
            byte[] value = SerializationUtils.serialize(database_1);
            for (byte item : value) {
                fileOutputStream.write(item);
            }
            fileOutputStream.close();

            //数据库文件夹，表记录文件和日志部分
            file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\data\\" + db_name);
            file.mkdir();
            file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\data\\" + db_name + "\\" + db_name + ".tb");
            file.createNewFile();
            file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\data\\" + db_name + "\\" + db_name + ".log" );
            file.createNewFile();

            DBMS.TB_message tb_message= DBMS.TB_message.newBuilder().build();
            value=SerializationUtils.serialize(tb_message);
            fileOutputStream=new FileOutputStream("DBMS\\src\\main\\resources\\DBMS_ROOT\\data\\"+db_name+"\\"+db_name+".tb");
            for (byte b : value) {
                fileOutputStream.write(b);
            }
            fileOutputStream.close();
        }catch (Exception e){
            e.printStackTrace();
    }

    }

    public int Check_Database(String Database_Name){
        if (Database_Name.length()>=20){
            return 0;
        }else {
            File file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\database.db");
            if (file.exists()) try {
                FileInputStream input=new FileInputStream(file);
                byte[] buf=new byte[10240];
                input.read(buf);
                input.close();
                DBMS.Database database=SerializationUtils.deserialize(buf);
                List<DBMS.Database.DB> databases=new ArrayList<>(database.getDbList());
                for (DBMS.Database.DB database_1:databases){
                    if (database_1.getName().equals(Database_Name))
                        return 1;
                }
            }catch (Exception e){
                e.printStackTrace();
            }
        }return 2;
    }
}
