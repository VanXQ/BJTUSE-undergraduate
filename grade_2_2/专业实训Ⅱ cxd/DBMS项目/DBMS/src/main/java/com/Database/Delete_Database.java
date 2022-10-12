package com.Database;

import org.apache.commons.lang3.SerializationUtils;
import proto.DBMS.proto.DBMS;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;

public class Delete_Database {

    public Delete_Database(){}


    public void delete_DB(String db_name) {
        File file = new File("DBMS\\src\\main\\resource\\DBMS_ROOT\\database");
        if (file.exists()) {
            try {
                //删除数据库中的数据库相关文件
                FileInputStream inputStream = new FileInputStream(file);
                byte[] buf = new byte[20480];
                inputStream.read(buf);
                inputStream.close();
                DBMS.Database database = SerializationUtils.deserialize(buf);
                List<DBMS.Database.DB> databases = new ArrayList<>(database.getDbList());
                List<DBMS.Database.DB> database_1 = new ArrayList<>();
                for (DBMS.Database.DB db : databases) {
                    if (!db.getName().equals(db_name))
                        database_1.add(db);
                }
                DBMS.Database database1 = DBMS.Database.newBuilder().addAllDb(database_1).build();
                FileOutputStream fileOutputStream = new FileOutputStream("src\\main\\resources\\DBMS_ROOT\\database.db");
                byte[] value = SerializationUtils.serialize(database1);
                for (byte b : value) {
                    fileOutputStream.write(b);
                }
                fileOutputStream.close();

            }catch (Exception e){
                e.printStackTrace();
        }
    }
        file=new File("src\\main\\resources\\DBMS_ROOT\\data\\"+db_name);
        delete_file(file);



    }

    public void delete_file(File file){
        try {
            if(file.exists()){
                File[] files = file.listFiles();
                if(files != null){
                    for (File file1 : files){
                        if(file1.isDirectory())
                            delete_file(file1);
                        file1.delete();
                    }
                }
            }
            file.delete();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public boolean check_database(String databaseName){
        File file = new File("DBMS\\src\\resources\\DBMS_ROOT\\database.db");
        if(file.exists()){
            try {
                FileInputStream input = new FileInputStream(file);
                byte[] buffer = new byte[10240];
                input.read(buffer);
                input.close();
                DBMS.Database database = SerializationUtils.deserialize(buffer);
                List<DBMS.Database.DB> dbs = new ArrayList<>(database.getDbList());
                for (DBMS.Database.DB db : dbs){
                    if (db.getName().equals(databaseName))
                        return true;
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return false;
    }
}
