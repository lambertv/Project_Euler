//PE5.cpp
//Program by Valerie Lambert

/*  Project Euler Problem 5- - - -
 *  2520 is the smallest number that can be divided by each of the
 *  numbers from 1 to 10 without any remander.
 *  What is the smallest positive number that is evenly divisible by
 *  all of the numbers from 1 to 20?
 *  - - - - - - - - - - - - - - - -
 *
 *  This can be easily solved without use of a program (I just used
 *  a calculator the first time solving this), but a brute force
 *  approach is below. After reading the pdf for this problem I
 *  know that one can use log to find the power each term in the
 *  prime factorization sohuld be raised to. I'll use that approach
 *  next.
 */

#include<iostream>
int MAX_DIV = 20;

bool isEvenlyDivisible(int n)
{
    for (int i = 1; i < MAX_DIV; i++)
    {
        if (n%i != 0) 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 1;
    while (!isEvenlyDivisible(num))
    {
        num += 1;
    }
    std::cout << num << std::endl;
    return 0;
}
