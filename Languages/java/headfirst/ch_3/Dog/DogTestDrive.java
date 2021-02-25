public class DogTestDrive {
    public static void main (String [] args) {
        //make a dog object and access it
        Dog dog1 = new Dog();
        dog1.bark();
        dog1.name = "Bart";

        //make a dog array
        Dog[] myDogs = new Dog[3];
        myDogs[0] = new Dog();
        myDogs[1] = new Dog();
        myDogs[2] = dog1;

        //access the does using the array references
        myDogs[0].name = "Fred";
        myDogs[1].name = "Marge";

        System.out.println("The last dog's name is " + myDogs[2].name);

        //now loop through the array
        //and tell all dogs to bark
        int x = 0;
        while (x < myDogs.length)
        {
            myDogs[x].bark();
            myDogs[x].eat();
            myDogs[x].chaseCat();
            x = x + 1;
        }
    }
}
