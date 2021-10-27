""" 
6. Modify the futval. py program (Section 2. 7) so that the number of years
for the investment is also a user input. Make sure to change the final
message to reflect the correct number of years. 

 """

# futval.py
# a program to compute the value of an investment



def main():
    print("This program calculates the future value")
    print("of a multi-year investment")

    principal = float(input("Enter the intial principal: "))
    apr = float(input("Enter the annual interest rate: "))
    years = int(input("Enter the number of investment years: "))

    for i in range(years):
        principal = round(principal * (1 + apr), 2) #rounds to 2 decimal places

    print("The value in ", years , " years is: ", principal)

main()