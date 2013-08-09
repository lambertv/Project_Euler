//PE3.cpp
//Program by Valerie Lambert
//Solution strategy from pojecteuler.net

/*  Project Euler Problem 3- - - -
 *  The prime factors of 13195 are 5,7,13 and 29.
 *  What is the largest prime factor of the number 600851475143?
 *  - - - - - - - - - - - - - - - -
 *
 *  C++ version of Problem 3.
 */

#include <iostream>
#include <math.h>

long largestPrimeFactor(long num);

int main()
{
    long big_num = 600851475143;
    std::cout << largestPrimeFactor(big_num) << std::endl;
}

long largestPrimeFactor(long num)
{
    long n = num;
    long i = 3;
    long max_factor = sqrt(n);
    while (n%2 == 0)
        n /= 2;
    max_factor = sqrt(n);
    while (i < max_factor)
    {
        while (n%i == 0)
            n /= i;
            max_factor = sqrt(n);
        i += 2;
    }
    return n;
}

