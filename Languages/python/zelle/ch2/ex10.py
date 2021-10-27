# convert.py
# 10. Write a program that converts distances measured in kilometers to miles.
# One kilometer is approximately 0.62 miles. 

def main():
    kilometer = float(input("What is the kilometer distance? "))
    miles = kilometer * 0.62
    print("The distance is ", miles, " miles.")

main()