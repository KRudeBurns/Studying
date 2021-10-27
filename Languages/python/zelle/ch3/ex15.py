""" 
15. Write a program that approximates the value of pi by summing the terms
of this series: 4/1- 4/3 + 4/5- 4/7 + 4/9- 4/11 + ... The program should
prompt the user for n, the number of terms to sum, and then output the
sum of the first n terms of this series. Have your program subtract the
approximation from the value of math. pi to see how accurate it is. 
"""
def main():
    import math
    pi = math.pi

    print("This program approximates the value of pi by summing the terms ")
    print("of this series: 4/1- 4/3 + 4/5- 4/7 + 4/9- 4/11 + ... 4/n")

    #ask user for n
    n = int(input("Enter the number of terms to sum: "))
    x = 1
    sum = 0

    for i in range(1, n+1):    
        if(i%2 == 0):
            sum = sum - 4/x
        else:
            sum = sum + 4/x
        
        x = x+2 
    print ("my pi = ", sum)
    print("pi = ", pi)
    #test for accuracy
    print("difference = ", abs(sum - pi))

main()    

    

