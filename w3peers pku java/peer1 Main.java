public class Main {
    public static void main(String[] argv) {
        // If i is prime, nums[i] == i.
        // If i not prime, nums[i] == -1.
        int[] nums = new int[10001];

        // Initialize all the numbers between 2-10000 as prime.
        for (int i = 2; i < nums.length; i++) {
            nums[i] = i;
        }

        // Neither 0 or 1 is prime.
        nums[0] = -1;
        nums[1] = -1;

        // Rule out multiples of bases.
        for (int base = 2; base < nums.length; base++) {
            for (int num = 2 * base; num < nums.length; num += base) {
                nums[num] = -1;
            }
        }

        // Print prime numbers.
        System.out.println("Prime numbers between 2 and 10000:");
        for (int num : nums) {
            if (num != -1) {
                System.out.print(num + " ");
            }
        }
        System.out.println();
    }
}