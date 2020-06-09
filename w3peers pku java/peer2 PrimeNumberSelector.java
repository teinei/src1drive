package primeNumberPackage;

public class PrimeNumberSelector {

	public static void main(String[] args) {
		// initialize the array
		int a[] = new int[10001];
		for( int i=0;i<a.length;i++)
		{
			a[i] = i;

		}
		
		// label not-prime number
		int l;
		for( int j=2;j<=a.length / 2;j++) {
			l = j * 2;
			if(l == 0) {
				continue;
			}
			
			while(l < a.length) {
				a[l] = 0;
				l = l + j;
			}
		}

		//output
		for( int num: a) {
			if(num == 0 || num == 1) {
				continue;
			}
			System.out.println( num);
		}
	}

}
