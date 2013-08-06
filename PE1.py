#PE1.py
#Program by Valerie Lambert - 7/31/13
#Solution strategy from projecteuler.net

"""
Project Euler Problem 1- - - -
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6, and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
- - - - - - - - - - - - - - - -

I use the A+B-AB pattern in main() to seperate finding the sum into
several parts. With more terms one could use the same pattern (but
it would get longer to write out in main() fiarly quickly). I use
an equation to find the sum of a series to make this program O(1) 
with two terms of any size.
"""

def sumOfMultiple(mult):
    num_terms = max_num/mult
    return mult*((num_terms*(num_terms+1))/2)

def main():
    global max_num
    max_num = 999
    print(sumOfMultiple(3) + sumOfMultiple(5) - \
          sumOfMultiple(15))
    
main()
