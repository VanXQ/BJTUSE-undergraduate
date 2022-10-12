import com.Database.Create_Database;
import org.apache.commons.lang3.SerializationUtils;
import proto.DBMS.proto.DBMS;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class test_database {


    public static void main(String[] args) throws IOException {
        Create_Database create_database=new Create_Database();
        create_database.Create("test_1");

        File file = new File("DBMS\\src\\main\\resources\\DBMS_ROOT\\database.db");
        FileInputStream input = new FileInputStream(file);
        byte[] buffer = new byte[10240];
        input.read(buffer);
        input.close();
        DBMS.Database database = SerializationUtils.deserialize(buffer);
        System.out.println(database.getDb(0).getDateCreated());
    }
}
