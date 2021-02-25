import javax.swing.*;

public class Main {

    public static void main(String[] args) {
	// write your code here
        //the "hello java" shows on the toolbar
        JFrame frame = new JFrame("Hello Java");
        //make the frame visible
        frame.setVisible(true);
        //set the size of the frame
        frame.setSize(300, 300);

        //close the frame and close the program
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
