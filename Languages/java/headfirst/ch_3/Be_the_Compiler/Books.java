public class Books {
    String title;
    String author;

    public static void main(String[] args) {
        Books[] myBooks = new Books[3];
        int x = 0;

        myBooks[0] = new Books();
        myBooks[1] = new Books();
        myBooks[2] = new Books();

        myBooks[0].title = "The Grapes of Java";
        myBooks[1].title = "The Big Java";
        myBooks[2].title = "The Java Wave";

        myBooks[0].author = "ace";
        myBooks[1].author = "Vee";
        myBooks[2].author = "chace";

        while (x < 3) {
            System.out.print(myBooks[x].title + " by ");
            System.out.println(myBooks[x].author);
            ++x;
        }
    }
}
