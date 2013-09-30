//PE4.java
//Program by Valerie Lambert

/* Project Euler Problem 4- - - -
 * A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 x 99.
 * Find the largest palindrome made from the product of two 3-digit
 * numbers
 * - - - - - - - - - - - - - - - -
 *
 *  Java solution
 */

public class PE4 {

    boolean isPalindrome(int n) {
        int reverse = 0;
        int temp = n;
        while (temp > 0) {
            reverse = 10*reverse + temp%10;
            temp /= 10;
        }
        return (reverse==n);
    }

    int getLargestPalindrome() {
        int largest_palindrome = 0;
        int a = 990;
        int b = 999;
        while (a >= 100) {
            while (b >= a) {
                if (a*b < largest_palindrome) {
                    break;
                }
                if (isPalindrome(a*b)) {
                    largest_palindrome = a*b;
                }
                b--;
            }
            b = 999;
            a -= 11;
        }
        return largest_palindrome;
    }

    public static void main(String[] args) {
        PE4 blop = new PE4();
        System.out.println(blop.getLargestPalindrome());
    }
}
