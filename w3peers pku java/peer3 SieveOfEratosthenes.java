import java.util.Arrays;
import java.util.stream.IntStream;

public class SieveOfEratosthenes {
    public static void main(String[] args) {
       boolean[] sieve = new boolean[10001];
       Arrays.fill(sieve, true);
       for (int i=2;i<=Math.sqrt((double)sieve.length-1);i++) {
           if (sieve[i]==false) continue;
           for (int j=2;j<=(sieve.length-1)/i;j++) sieve[i*j] = false;
       }
       for (boolean b : sieve) {
            //��ǿ��for��������������ɶҲ�ɲ��������Ҿ������Ե���һ��
       }
       int n = 0;
       for (int i=2;i<sieve.length;i++) {
           if (!sieve[i]) continue;
           System.out.print(i+"\t");
           if (++n==10) {
               System.out.println();
               n=0;
           }
       }
    }
}