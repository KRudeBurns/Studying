public class MovieTestDrive {
    public static void main (String [] args) {
        Movie one = new Movie();
        one.title = "Gone with the Wind!";
        one.genre = "Romance";
        one.rating = 10;

        Movie two = new Movie();
        two.title = "Lost in Cubicle Space";
        two.genre = "Drama";
        two.rating = 5;
        two.playIt();

        Movie three = new Movie();
        three.title = "Byte Club";
        three.genre = "Action";
        three.rating = 3;

    }
}
