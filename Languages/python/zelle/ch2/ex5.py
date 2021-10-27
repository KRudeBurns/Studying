
""" 
5. Modify the convert. py program (Section 2.2) so that it computes and
prints a table of Celsius temperatures and the Fahrenheit equivalents every
10 degrees from 0°C to 100°C. 

 """

# convert.py
# A program to convert Celsius temps to Fahrenheit

def main():
    celsius = 0
    print("celsius \t fahrenheit")
    print("----------------------------")
    while celsius < 101 :         
        fahrenheit = 9/5 * celsius + 32
        print(celsius, "\t\t", fahrenheit)
        
        #increment celcius by 10
        celsius += 10  

main()