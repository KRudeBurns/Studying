""" 
16. A Fibonacci sequence is a sequence of numbers where each successive
number is the sum of the previous two. The classic Fibonacci sequence
begins: 1, 1, 2, 3, 5, 8, 13, .... Write a program that computes the nth
Fibonacci number where n is a value input by the user. For example, if
n = 6, then the result is 8. 

"""

a=int(input("Enter the first number of the series "))
b=int(input("Enter the second number of the series "))
n=int(input("Enter the number of terms needed "))
#print(a,b,end=" ")
while(n-2):
    c=a+b
    a=b
    b=c
    n=n-1
print(c,end=" ")