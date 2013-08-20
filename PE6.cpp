//PE6.cpp
//Program by Valerie Lambert

/*  Project Euler Problem 6- - - -
 *  The sum of the squares of the first ten natural numbers is,
 *
 *      1**2 + 2**2 + ... + 10**2 = 385
 *
 *  The square of the sum of the first ten natural numbers is,
 *
 *      (1 + 2 + ... + 10)**2 = 55**2 = 3025
 *
 *  Hence the difference between the sum of the squares of the first
 *  ten natural numbers and the square of the sum is 3025 - 385 = 2640.
 *  Find the difference between the sum of the squares of the first one
 *  hundred natural numbers an the square of the sum.
 *  - - - - - - - - - - - - - - -
 *
 *  A quick brute force method. Is log(n) where n is NUM_OF_NATURAL.
 */

#include<iostream>
int NUM_OF_NATURAL = 100;

int main()
{
    int sum_of_squares = 0;
    int square_of_sums = 0;
    for (int i = 1; i <= NUM_OF_NATURAL; i++)
    {
        sum_of_squares += i*i;
        square_of_sums += i;
    }
    square_of_sums *= square_of_sums;
    std::cout << square_of_sums-sum_of_squares << std::endl;
    return 0;
}
