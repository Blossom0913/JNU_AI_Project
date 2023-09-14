# Java程序设计实验2

#### 2021100733陈旭天

实验源码：
```java

import java.util.Collections;
import java.util.Scanner;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class JiechenSum {
    public static int Jsum(int n){
    int sum = 0;
    int tmp = 1;
    for(int i = 1;i <= n;++i){
        tmp *= i;
        sum += tmp;
    }
    return sum;
    };
    public static void PrimeNumber(){
        int maxn = 101;
        int pnum = 0;
        int prime[] = new int[maxn];
        boolean p[] = new boolean[maxn];
        for(int i = 2;i < maxn;++i){
            if(p[i]==false){
                prime[pnum++] = i;
                for(int j = i + i;j < maxn;j += i){
                    p[j] = true;
                }
            }
        }
        System.out.printf("this is output of ex2:\n");
        for(int i = 0;i < pnum;++i) {
            System.out.printf("%d ",prime[i]);
        }
        System.out.printf("\n");
    }
    public static void Sting(){
        String text[] = new String[4];
        text[0] = "bye-bye";
        text[1] = "爱国";
        text[2] = "诚信";
        text[3] = "友善";
        Scanner reader = new Scanner(System.in);
        int n;
        System.out.println("this is output of ex3:");
        do {
            n = reader.nextInt();
            System.out.printf("%s\n",text[n]);
        }while (n!=0);
    }
    public static void maxNumber(){
        int max = 0;
        int n = 100;

        while(max < 6666){
            n++;
            max = n*(n+1)/2;
        }
        System.out.println(n);
    }
    public static void greatNumber(){
        System.out.println("this is output of ex5:\n");
        for(int i = 2;i < 6;++i) {
            double n = pow(2,i-1)*(pow(2,i) - 1);
            System.out.println(n);
        }

    }
    public static void shuzuOutput(){
        int num[];
        num = new int[]{1, 3, 2, 4, 7, 6};
        for(int i = 0;i < num.length;++i){
            System.out.printf("%d ",num[i]);
        }
        System.out.printf("\n");
        for(int i = 0;i < num.length;++i) {
            for(int j = i + 1;j < num.length;++j) {
                if(num[i]>num[j]){
                   int tmp;
                   tmp = num[i];
                   num[i] = num[j];
                   num[j] = tmp;
                }
            }
        }
        for (int s:num) {
            System.out.printf("%d ",s);
        }
        System.out.printf("\n");
    }
    public static void main(String args[]){
        System.out.printf("this is output of ex1: %d\n",Jsum(10));//实验1
        PrimeNumber();//实验2
        Sting();//实验3
        maxNumber();//实验4
        greatNumber();//实验5
        shuzuOutput();//实验6
    }

}

```

实验结果：
![tu](/%E5%AE%9E%E9%AA%8C2%E8%BE%93%E5%87%BA.png)
![pian](/%E5%AE%9E%E9%AA%8C2.2%E8%BE%93%E5%87%BA.png)