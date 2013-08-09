//PE3.cpp
//Program by Valerie Lambert
//Solution stratefy from projecteuler.net

/*  Project Euler Problem 3- - - -
 *  The prime factors of 13195 are 5, 7, 13, and 29.
 *  What is the largest prime factor of the number 600851475143?
 *  - - - - - - - - - - - - - - - -
 *
 *  Java version. Dealing with big numbers in java is a bit annoying.
 */

class PE3 {

    private long big_num;

    public PE3(long n) {
        big_num = n;
    }

    public long largestPrimeFactor() {
        long n = big_num;
        long i = 3;
        double max_factor = Math.sqrt(n);
        while (n%2 == 0) {
            n /= 2;
        }
        max_factor = Math.sqrt(n);
        while (i < max_factor) {
            while (n%i == 0) {
                n /= i;
                max_factor = Math.sqrt(n);
            }
            i += 2;
        }
        return n;
    }

    public static void main(String[] args) {
        PE3 p = new PE3(600851475143L);
        System.out.println(p.largestPrimeFactor());
    }

}
