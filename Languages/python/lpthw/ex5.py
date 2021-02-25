name = "Kufre R. Abia"
age = 35 #not a lie
age_in_days = age * 363
height = 67 #inches - very short
height_in_ft = 67 * 0.08333
weight = 229 #lbs - very fat
weight_in_kg = weight * 0.4536
eyes = 'Brown'
teeth = 'White'
hair = 'Black'


print(f"Let's talk about {name}.")
print(f"He's {height} inches tall or {height_in_ft} feet tall.")
print(f"He's {weight} pounds heavy or {weight_in_kg} kilos heavy.")
print("Actually that's quite heavy")
print(f"He's got {eyes} eyes and {hair} hair")
print(f"His teeth are usually {teeth}")

#this line is tricky try to get it exactly right
total = age + height + weight
alt_total = age_in_days + height_in_ft + weight_in_kg
print(f"If I add {age}, {height}, and {weight}, I get {total}") 
print(f"If I add {age_in_days}, {height_in_ft}, and {weight_in_kg}, I get {alt_total}") 
