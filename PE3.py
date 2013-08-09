##PE3.py
##Program by Valerie Lambert
##Solution strategy from projecteuler.net

"""
Project Euler Problem 3- - - -
The prime factors of 13195 are 5, 7, 13, and 29.
What is the largest primes factor of the number 600851475143?
- - - - - - - - - - - - - - - -

I forget exactly how I did this the first time, but I've looked over
the projecteuler pdf file to better optamize my program.
"""

from math import sqrt

def largestPrimeFactor(big_num):
    temp_num = big_num
    i = 3
    max_factor = sqrt(big_num)
    while temp_num%2 is 0:
        temp_num /= 2
    max_factor = sqrt(temp_num)
    while i < max_factor:
        while temp_num%i is 0:
            temp_num /= i
            max_factor = sqrt(temp_num)
        i += 2
    return temp_num



def main():
    big_num = 600851475143
    print(largestPrimeFactor(big_num))

main()
