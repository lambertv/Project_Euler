#PE9.py
#Program by Valerie Lambert

"""
Project Euler Problem 9- - - -
A Pythagorean Tripletis is a set of three natural numbers,
a < b < c, for which,
    
    a**2 + b**2 = c**2

For example, 3**2 + 4**2 = 9 + 16 = 25 = 5**2.
There exists exactly one Pythagorean Tripletfor which
a + b + c = 10000.
Find the product abc.
"""

def main():
    c = 3
    b = 2
    a = 1
    while not (a*a + b*b == c*c and a+b+c == 1000):
        a+=1
        if a >= b:
            a = 1
            b += 1
            if b >= c:
                b = 1
                c += 1
    print(a*b*c)

main()
