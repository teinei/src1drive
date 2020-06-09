import java.util.Scanner;

public class eg2 {
    static int[] prime = new int[100001]; // 记录每一个素
    static boolean[] is_prime = new boolean[100001]; //prime or not

    public static int sieve(int n) {
        int p = 0; //how many primes
        /* 0, 1 and 2 are primes */
        is_prime[0] = is_prime[1] = false;//
        for (int i = 2; i < n; ++i) {
            is_prime[i] = true;
        }
        //
        for (int i = 2; i <= n; ++i) {
            if (is_prime[i] == true) { //if value is not 0
                prime[p++] = i; //increment
                for (int j = i << 1; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }
        return p;
    }
    // p记录了素数的个数，
    //is_prime数组记录了测试范围每个数字是不是素数，
    //prime数组记录每个素数
    public static void main(String[] args) {
        //Scanner cin = new Scanner(System.in);
        //int n = cin.nextInt();
        int n = 10000;
        //cin.close();
        int t = sieve(n);
        System.out.println(t + "个素数\n分别为：");
        for (int i = 0; i < t; ++i) {
            System.out.print(prime[i] + " ");
            if (i % 10 == 0) {
                System.out.println();
            }
        }
    }
}