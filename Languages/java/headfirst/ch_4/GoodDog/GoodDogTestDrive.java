public class GoodDogTestDrive {
    public static void main(String[] args) {
        GoodDog one = new GoodDog();
        one.setSize(70);

        GoodDog two = new GoodDog();
        two.setSize(15);

        System.out.println("Dog one: " + one.getSize());
        one.bark();
        System.out.println("Dog two: " + two.getSize());
        two.bark();

        System.out.println("Testing dog in an array of three");
        GoodDog [] aDogz = new GoodDog[3];
        int i = 0;
        while (i < 3){
            aDogz[i] = new GoodDog();
            ++i;
        }        
        aDogz[0].setSize(10);
        aDogz[1].setSize(60);
        aDogz[2].setSize(90);

        i = 0;
        while (i < 3) {
            System.out.println("Array Dog: " + i + " size = " + aDogz[i].getSize());
            aDogz[i].bark();
            ++i; 
        }
    } //end main
} // end class
