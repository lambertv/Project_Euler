//PE1.java
//Program by Valerie Lambert - 8/6/13
//Solution strategy from projecteuler.net

/*  Project Euler Problem 1- - - -
 *  If we list all the natural numbers below 10 that are multiples of 3 or 5,
 *  we get 3, 5, 6, and 9. The sum of these multiples is 23.
 *
 *  Find the sum of all the multiples of 3 or 5 below 1000.
 *  - - - - - - - - - - - - - - - -
 *
 *  A java version of my PE1.py.
 */

public class PE1 {

    public int max_num = 999;

    int multipleSum(int mult) {
        int num_terms = max_num/mult;
        return mult*((num_terms*(num_terms+1))/2);
    }

    public static void main(String[] args) {
        PE1 p = new PE1();
        System.out.println(p.multipleSum(3) + p.multipleSum(5) - 
                           p.multipleSum(15));
    }
}
