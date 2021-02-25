#define an int variable
types_of_people = 10
#define a string variable to include the prior named int variable
x = f"There are {types_of_people} types of people"

#strings all around
binary = "binary"
do_not = "don't"
y = f"Those who know {binary} and those who {do_not}"

print(x)
print(y)

#printing named variables
print(f"I said: {x}")
print(f"I also said: '{y}'")

#defining a boolean and also string
hilarious = False
joke_evaluation = "Isn't that joke so funny?! {}"

#using the format function - need to learn about .format()
print(joke_evaluation.format(hilarious))

w = "This is the left side of ..."
e = "a string with a right side."

print(w+e)
