i = 0
numbers = [] #empty list/array

while i < 6:
    print(f"At the top i is {i}")
    numbers.append(i) #adding i items to list
    i += 1 # incrementing ++i is not allowed

    print("Numbers is now: ", numbers) #this will print the entire list
    print(f"At the bottom i is {i}")

print(" ")
print("The numbers: ")

for num in numbers:
    print(num)


