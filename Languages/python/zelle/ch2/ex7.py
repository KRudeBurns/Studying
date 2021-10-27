# futval.py
# a program to compute the value of an investment
# carried 10 years into the future

""" 
7. Suppose you have an investment plan where you invest a certain fixed
amount every year. Modify futval . py to compute the total accumulation
of your investment. The inputs to the program will be the amount to invest
each year, the interest rate, and the number of years for the investment. 
"""

def main():
    print("This program calculates the future value")
    print("of a multi-year investment with recurring annual fixed investment")

    principal = float(input("Enter the intial principal: "))
    apr = float(input("Enter the annual interest rate: "))
    years = int(input("Enter the number of investment years: "))
    recurring_capital = principal

    for i in range(years):
        principal = (principal+recurring_capital) * (1 + apr)
    
    print("The value in ", years , " years is: ", principal)

main()