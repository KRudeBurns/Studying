""" 
Write a program that implements Newton's method. The program
should prompt the user for the value to find the square root of (x) and
the number of times to improve the guess. Starting with a guess value
of x/2, your program should loop the specified number of times applying
Newton's method and report the final value of guess. You should also
subtract your estimate from the value of math. sqrt (x) to show how close
it is. 
"""

import math

def main():
    x = int(input("Enter the number we need to find root of: "))
    times = int(input("How many attempts do I have to improve my guess? "))
    guess = x/2
    n_method = 0
    for i in range(times):
        n_method = (guess + (x / guess)) / 2
        guess  = n_method
        
        print(guess)
    print("----------------------------------")
    print("square root of x = ", math.sqrt(x))
    print("My best guess = ", n_method)
    print("difference is ", abs(n_method-math.sqrt(x)))

main()

