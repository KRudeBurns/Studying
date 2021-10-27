""" 
1. Write a program to calculate the volume and surface area of a sphere from
its radius, given as input. Here are some formulas that might be useful:
V = 4/37rr3
A= 47rr2

"""
#importh math library
import math

def main():
    radius = float(input("Enter the radius: "))
    pi = math.pi
    Volume = (4/3) * pi * (radius**3)
    Area = 4 * pi * (radius ** 2)
    print("Volume of the sphere is: ", Volume)
    print("Surface area of the sphere is: ", Area)

main()
