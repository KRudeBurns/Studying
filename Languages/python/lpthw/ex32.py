#lists are c++ arrays
the_count = [1,2,3,4,5]
fruits = ['apples', 'oranges', 'pears', 'apricots']
change = [1, 'pennies', 2, 'dimes', 3, 'quarters']

#it doesn't matter the variable name
#for *variable* name in list works
for number in the_count:
    print(f"This is count {number}")

for fruit in fruits:
    print(f"A fruit of type: {fruit}")

for i in change:
    print(f"I got {i}")


#to build a list we can start with an empty list
elements = []

#we can add to the new list from an existing list
for i in the_count:
    print(f"Adding {i} to new list")
    elements.append(i)

for fruit in fruits:
    print(f"Adding {fruit} to the new list")
    elements.append(fruit)

#we can also add new items from a range to the list
for x in range(8,19):
    print(f"adding {x} to the new list")
    elements.append(x)


for i in elements:
    print(f"Element was: {i}")
