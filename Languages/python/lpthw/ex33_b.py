def list_example(user_entry):
    #declare int
    x = 0
    
    numbers = [] #initialize an empty list/array
    
    while x < user_entry:
        print(f"At the top user_entry is {x}")
        numbers.append(x) #adding user_entry items to list
        x += 1 # incrementing ++user_entry is not allowed

        print("Numbers is now: ", numbers) #this will print the entire list
        print(f"At the bottom user_entry is {x}")

    print(" ")
    print("The numbers: ")

    for num in numbers:
        print(num, end=" ")
