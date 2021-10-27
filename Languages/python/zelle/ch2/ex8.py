""" 
8. As an alternative to APR, the interest accrued on an account is often described in terms of a nominal rate and the number of compounding periods. 

For example, if the interest rate is 3% and the interest is compounded
quarterly, the account actually earns 3/4% interest every 3 months.

Modify the futval.py program to use this method of entering the
interest rate. The program should prompt the user for the yearly rate
(rate) and the number of times that the interest is compounded each year
(periods). To compute the value in ten years, the program will loop 10 *
periods times and accrue rate/period interest on each iteration. 
"""


# futval.py
# a program to compute the value of an investment
# carried 10 years into the future

def main():
    print("This program calculates the future value")
    print("of a 10-year investment")

    principal = float(input("Enter the intial principal: "))
    apr = float(input("Enter the annual interest rate: "))
    period = int(input("How many times is the interest compounded in a year? "))

    for i in range(10 * period):
        principal = principal * (1 + apr/period)

    print("The value in 10 years is: ", principal)

main()