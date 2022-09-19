import java.util.Scanner;

public class JiechenSum {
    public JiechenSum() {
    }

    public static int Jsum(int n) {
        int sum = 0;
        int tmp = 1;

        for(int i = 1; i <= n; ++i) {
            tmp *= i;
            sum += tmp;
        }

        return sum;
    }

    public static void PrimeNumber() {
        int maxn = 101;
        int pnum = 0;
        int[] prime = new int[maxn];
        boolean[] p = new boolean[maxn];

        int i;
        for(i = 2; i < maxn; ++i) {
            if (!p[i]) {
                prime[pnum++] = i;

                for(int j = i + i; j < maxn; j += i) {
                    p[j] = true;
                }
            }
        }

        System.out.printf("this is output of ex2:\n");

        for(i = 0; i < pnum; ++i) {
            System.out.printf("%d ", prime[i]);
        }

        System.out.printf("\n");
    }

    public static void Sting() {
        String[] text = new String[]{"bye-bye", "爱国", "诚信", "友善"};
        Scanner reader = new Scanner(System.in);
        System.out.println("this is output of ex3:");

        int n;
        do {
            n = reader.nextInt();
            System.out.printf("%s\n", text[n]);
        } while(n != 0);

    }

    public static void maxNumber() {
        int max = 0;

        int n;
        for(n = 100; max < 6666; max = n * (n + 1) / 2) {
            ++n;
        }

        System.out.println(n);
    }

    public static void greatNumber() {
        System.out.println("this is output of ex5:\n");

        for(int i = 2; i < 6; ++i) {
            double n = Math.pow(2.0, (double)(i - 1)) * (Math.pow(2.0, (double)i) - 1.0);
            System.out.println(n);
        }

    }

    public static void shuzuOutput() {
        int[] num = new int[]{1, 3, 2, 4, 7, 6};

        int i;
        for(i = 0; i < num.length; ++i) {
            System.out.printf("%d ", num[i]);
        }

        System.out.printf("\n");

        int j;
        int tmp;
        for(i = 0; i < num.length; ++i) {
            for(j = i + 1; j < num.length; ++j) {
                if (num[i] > num[j]) {
                    tmp = num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                }
            }
        }

        int[] var5 = num;
        j = num.length;

        for(tmp = 0; tmp < j; ++tmp) {
            int s = var5[tmp];
            System.out.printf("%d ", s);
        }

        System.out.printf("\n");
    }

    public static void main(String[] args) {
        System.out.printf("this is output of ex1: %d\n", Jsum(10));
        PrimeNumber();
        Sting();
        maxNumber();
        greatNumber();
        shuzuOutput();
    }
}
