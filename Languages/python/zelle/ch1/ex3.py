""" Modify the chaos program using 2.0 in place of 3.9 as the multiplier in the
logistic function. Your modified line of code should look like this:
X = 2. 0 * X * (1 - X)  """

def main():
    print("This program illustrates a chaotic function")
    x = eval(input("Enter a number between 0 and 1: "))
    for i in range(13):
        x = 2.0 * x * (1-x)
        print(x)

main()