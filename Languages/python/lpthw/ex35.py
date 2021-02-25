from sys import exit

def gold_room():
    choice = input("This room is full of gold. How much do you take? > ")

    if "0" in choice or "1" in choice:
        how_much = int(choice) #cast string to int
        print(choice)
    else:
        dead("Man, learn to type a number")

    if how_much < 50:
        print("Nice, you are not greedy, you win!")
        exit(0)
    else:
        dead("You greedy bastard!")

def bear_room():
    print("There is a bear here.")
    print("The bear has a bunch of honey.")
    print("The fat bear is in front of another door.")
    print("How are you going to move the bear?")
    bear_moved = False

    while True:
        choice = input("> ")

        if "honey" in choice:
           dead("The bear looks at you then slaps your face off.")
        elif "taunt bear" in choice and  not bear_moved:
           print("The bear has moved from the door")
           print("You can go through now")
           bear_moved = True
        elif "taunt bear" in choice and bear_moved:
           dead("The bear gets pissed off and chews your leg off")
        elif "open door" in choice and bear_moved:
           gold_room()
        else:
           print("I got no idea what that means!")

def cthulhu_room():
    print("Here you see the great evil Cthulhu")
    print("He, it, whatever stares at you and you go insane")
    choice = input("Do you flee for your life or eat your head? > ")

    if "flee" in choice:
        start()
    elif "head" in choice:
        dead("Well that was tasty")
    else:
        cthulhu_room()

def dead(why):
    print(why, "Good job!")
    exit(0)

def start():
    print("You are in a dark room")
    print("There is a door to your right and left")
    choice = input("Which one do you take > ")

    if "left" in choice:
        bear_room()
    elif "right" in choice:
        cthulhu_room()
    else:
        dead("You stumble around the room until you starve")



#test it
start()
