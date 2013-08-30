#PE7.py
#Program by Valerie Lambert

"""
Project Euler Problem- - - -
By listing the first siz prime numbers: 2, 3, 5, 7, 11, 13, we can
see that the 6th prime is 13.
What is the 10,001st prime number?
- - - - - - - - - - - - - - -

Python version. Really just a direct translation from C++, so its a
bit slow.
"""

def isPrime(num):
    i = 2
    while i<num:
        if num%i is 0:
            return False
        i += 1
    return True

def main():
    num = 3
    primes_count = 2
    while (primes_count < 10001):
        num += 2
        if isPrime(num):
            primes_count += 1
    print(num)

main()
