//PE10.cpp
//#Program by Valerie Lambert

/* Project Euler Problem 10- - - -
 * The sum of all primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all primes below two million.
 * - - - - - - - - - - - - - - - -
 *
 *   I started with the sum at 2 so that i could start checking
 *   primes at 3 and then increase i by two so that I could just
 *   skip the evens. Recycled the isPrime() from problem 10.
 *   Think I might eventually just make this into one huge program
 *   which runs through all the problems and times them, or something.
 */

#include <iostream>

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long sum = 2;
    for (int i = 3; i < 2000000; i+=2)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
