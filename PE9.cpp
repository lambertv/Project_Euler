//PE9.cpp
//program by Valerie Lambert

/*  Project Euler Problem 9- - - -
 *  A Pythagorean triplet is a set of three natural numbers,
 *  a < b < c, for which,
 *
 *      a**2 + b**2 = c**2
 *
 *  For example, 3**2 + 4**2 = 9 + 16 = 25 = 5**2.
 *  There exists exactly one Pythagorean triplet for which
 *  a + b + c = 1000.
 *  Find the product abc.
 *  - - - - - - - - - - - - - - - -
 *
 *  Another quick hack to make sure I program something today.
 */

#include<iostream>

int main()
{
    int c = 3;
    int b = 2;
    int a = 1;
    while (!(a*a + b*b == c*c && a+b+c == 1000))
    {
        a++;
        if (a >= b)
        {
            a = 1;
            b++;
            if (b >= c)
            {
                b = a+1;
                c++;
            }
        }
    }
    std::cout << a*b*c << std::endl;
    return 0;
}
