### Java数据库实验报告

#### 2021100733陈旭天

- 项目源码


```Java

import java.sql.*;
import java.util.Date;
import java.util.Scanner;

public class Test {
    static String JDBC_URL = "jdbc:mysql://localhost:3306/test";
    static String JDBC_USER = "root";
    static String JDBC_PASSWORD = "";
    Test(){

// 获取连接:
        try (Connection conn = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD)){
            System.out.println("Connected");
            try(PreparedStatement ps = conn.prepareStatement("INSERT INTO homework (City, Population, GDP,LastModified) VALUES (?,?,?,?)",Statement.RETURN_GENERATED_KEYS)){
                ps.setObject(1,"Wuhan");
                ps.setObject(2,10000000);
                ps.setObject(3,802.4);
                Date date = new Date();
                ps.setObject(4,date);
                int n = ps.executeUpdate();
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }


    static void DBDisp() throws SQLException {
        try (Connection conn = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD)){
            try (Statement stmt = conn.createStatement()) {
                try (ResultSet rs = stmt.executeQuery("SELECT City, Population, GDP,LastModified FROM homework")) {
                    while(rs.next()){
                        System.out.print(rs.getString(1));
                        System.out.print(rs.getInt(2));
                        System.out.print(rs.getFloat(3));
                        System.out.print(rs.getDate(4));
                        System.out.print("\n");
                    }
                }
        }
    }
    }

    static void DBDelete() throws SQLException {
        try (Connection conn = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD)) {


            try (PreparedStatement ps = conn.prepareStatement("DELETE FROM homework WHERE Population = ?")) {

                String sql = "DELETE FROM homework WHERE Population = 10000000";
                int n = ps.executeUpdate(sql); // 删除的行数
            }
        }
    }

    static void DBRenew() throws SQLException {
        try (Connection conn = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD)) {
            try (PreparedStatement ps = conn.prepareStatement("UPDATE homework SET LastModified=?")) {
                Date date = new Date();
                ps.setObject(1, date); // 注意：索引从1开始
                int n = ps.executeUpdate(); // 返回更新的行数
            }
        }
    }

    public static void main(String args[]){
        Test test = new Test();
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Scanner in = new Scanner(System.in);
            int idx = 0;
            do{
                idx = in.nextInt();
                switch (idx) {
                    case 1 -> DBDisp();
                    case 2 -> DBDelete();
                    case 3 -> DBRenew();
                }
            }while(idx!=-1);
        } catch (ClassNotFoundException | SQLException e) {
            throw new RuntimeException(e);
        }
    }
}

```

- 实验输出


![](/Java/Java数据库/java数据库.png)
![](/Java/Java数据库/构造方法加数据.png)
![](/Java/Java数据库/屏幕截图%202022-12-05%20203855.png)