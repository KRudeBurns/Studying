""" 
4. Modify the convert. py program (Section 2.2) with a loop so that it executes 5 times before quitting. Each time through the loop, the program
should get another temperature from the user and print the converted
value. 
 """

# convert.py
# A program to convert Celsius temps to Fahrenheit

def main():
    for i in range(5):
        celsius = eval(input("What is the Celsius temperature? "))
        fahrenheit = 9/5 * celsius + 32
        print("The temperature is ", fahrenheit, "degrees fahrenheit.")

main()