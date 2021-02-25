#This program implements dictionaries

# create a mapping of state to abbreviation
states = {
       'Oregon' : 'OR',
       'Florida' : 'FL',
       'California' : 'CA',
       'New York' : 'NY',
       'Michigan' : 'MI'
}

#create a basic set of states and some cities in them
cities = {
       'CA' : 'San Francisco',
       'MI' : 'Detroit',
       'FL' : 'Jacksonville'
}

#add some more cities
cities['NY'] = 'New York'
cities['OR'] = 'Portland'

#print out some cities
print('-' * 10)
print("NY State has: ", cities['NY'])

#print out some states
print('-' * 10)
print("Florida's abbreviation is: ", states['Florida'])
print("California's abbreviation is: ", states['California'])

#print every state abbreviation
print('-' * 10)
for state, abbrev in list(states.items()):
    print(f"{state} has abbreviation of {abbrev}")

#print every city in state
for abbrev, city in list(cities.items()):
    print(f"{abbrev} has the city {city}")

#now print both state and city
print('-' * 10)
for state, abbrev in list(states.items()):
    print(f"{state} has abbreviation of {abbrev}")
    print(f"and has the city {cities[abbrev]}")

print('-' * 10)
#safely get an abbreviation that may not be there
state = states.get('Texas')

if not state:
    print("Sorry no texas")

#get a city with a default value
city = cities.get('TX', 'Does not exist')
print(f"The city for the state  'TX' is: {city}")
