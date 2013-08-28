#PE5.py
#Program by Valerie Lambert

"""
Project Euler Problem 5- - - -
2520 is the smallest number that can be divided by each of the numbers
from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of
the numbers from 1 to 20?
- - - - - - - - - - - - - - - -

Python version of program. Unfortunately the pure brute force method
takes a long time in python, tohugh I'm not sure why because python isn't
dealing with lists or strings... Will have to come up with a more elegant
solution.
"""

MAX_DIV = 20

def isEvenlyDivisible(num):
    for i in range(MAX_DIV):
        if num%(i+1) != 0:
            return False
    return True

def main():
    num = 2
    while not isEvenlyDivisible(num):
        num += 2
    print(num)

main()
