#PE1.py
#Program by Valerie Lambert - 7/31/13
#Solution strategy from projecteuler.net
#TODO: add function which takes a list of multiples and finds sum
#      add timers

"""
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3,5,6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""

def sumOfMultiple(mult, max_num):
    mult_sum = 0
    n = mult
    while n < max_num:
        mult_sum += n
        n += mult
    return mult_sum

def main():
    print(sumOfMultiple(3, 1000) + sumOfMultiple(5, 1000) - \
            sumOfMultiple(15, 1000))
    
main()
