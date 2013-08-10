//PE4.cpp
//Program by Valerie Lambert
//reverse function adapted from projecteuler.net

/*  Project Euler Problem 4- - - -
 *  A palindromic number reads the same both ways. The largest palindrome
 *  made from the product of two 2-digit numbers is 9009 = 91 x 99.
 *  Find the largest palindrome made from the product of two 3-digit
 *  numbers.
 *  - - - - - - - - - - - - - - - -
 *
 *  The insight that palindromes will be divisible by 11 in this case
 *  is from projecteuler.net, also the reverse function which stumped
 *  me for awhile until I saw how simple it was.
 */

#include <iostream>

bool isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp>0)
    {
        reverse = 10*reverse + temp%10;
        temp = temp/10;
    }
    return (reverse==n);
}

int getLargestPalindrome()
{
    int largest_palindrome = 0;
    int a = 990;
    int b = 999;
    while (a >= 100)
    {
        while (b >= a)
        {
            if (a*b < largest_palindrome)
            {
                break;
            }

            if (isPalindrome(a*b))
            {
                largest_palindrome = a*b;
            }

            b--;
        }
        
        b = 999;
        a -= 11;
    }

    return largest_palindrome;
}

int main()
{
    std::cout << getLargestPalindrome() << std::endl;
}
