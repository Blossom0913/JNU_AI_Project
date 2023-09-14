### 实验8-1源码

```Java
import java.util.Random;
import java.util.*;

class Exp8 {
    import java.util.Random;
import java.util.*;

class Exp8 {
    public static void main(String args[]){
        Random yue = new Random();
        int year = 2021;
        int mon ;
        int day ;
        Calendar[] cal = new Calendar[5];
        for(int i = 0;i < 5;++i){
            mon = yue.nextInt(11) + 1;
            if(mon==2){
            day = yue.nextInt(27) + 1;} 
            else if (mon==4||mon==6||mon==9||mon==11) {
                day = yue.nextInt(29) + 1;}
            else {
                day = yue.nextInt(30) + 1;}
            Calendar riqi = Calendar.getInstance();
            riqi.set(year,mon,day);
            cal[i] = riqi;
            System.out.println(""+year+"年"+mon+"月"+day+"日");
        }
        Arrays.sort(cal, new cmp());
        for(Calendar a:cal){
            System.out.println(a.get(Calendar.YEAR)+"年"+a.get(Calendar.MONTH) + "月" + a.get(Calendar.DAY_OF_MONTH) + "日");
        }
    }


    static class cmp implements Comparator<Calendar>{

        @Override
        public int compare(Calendar o1, Calendar o2) {
            if(o1.getTimeInMillis() < o2.getTimeInMillis())return 1;
            else return -1;
        }
    }
}


```

### 实验结果

![](/Java/常用类/屏幕截图%202022-11-01%20195227.png)


### 实验8-2源码

```java
public class A {
    //a元素为常量，b元素为変量
    static String[] a={"January", " February" , "March", "April", "May" , "June",
            "July", "August" ,"September", "October" , "November" , "December"};

    static String[] b;

    A() {
        b = new String[a.length];
        for (int i = 0; i < a.length; i++) b[i] = new String(a[i]);
    }
    static int f1(){
        for (int i = 0; i < a.length; i++){
            if (a[i] == "December") return i + 1;
        }
        return 0;

    }

    static int f2() {
        /*在b中查找"December*/
        for(int i = 0;i < b.length;++i){
            if(b[i].equals("December"))return i + 1;
        }
        return 0;

    }

    public static void main(String args[]) {
        /*此处分别调用f1,f2几十万次或几百万次，并计时*/
        A lei = new A();
        int a;
        Elapse cnt = new Elapse();
        for(int i = 0;i < 1000000;++i){
            a = lei.f1();
        }
        System.out.println("f1 consumes:"+ cnt.getElapseTime());
        Elapse cnt2 = new Elapse();
        for(int i = 0;i < 1000000;++i){
            a = lei.f2();
        }
        System.out.println("f2 consumes:"+cnt2.getElapseTime());
    }
}


```

### 实验结果

![](/Java/常用类/屏幕截图%202022-11-01%20201612.png)