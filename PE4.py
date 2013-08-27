#PE4.py
#Program by Valerie Lambert
#reverse function adapted from projecteuler.net

"""
Project Euler Problem 4- - - -
A palindromic number reads the same both ways. The largest plaindrome
made from the product of two 2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit
numbers.
- - - - - - - - - - - - - - - -

Python version.
"""

def isPalindrome(num):
    reverse = 0
    temp = num
    while temp > 0:
        reverse = 10*reverse + temp%10
        temp = temp/10
    return (reverse == num)

def main():
    largest_palindrome = 0
    a = 990
    b = 999
    while a >= 100:
        while b >= a:
            if a*b < largest_palindrome:
                break
            if isPalindrome(a*b):
                largest_palindrome = a*b
            b -= 1
        b = 999
        a -= 11
    print(largest_palindrome)

main()
