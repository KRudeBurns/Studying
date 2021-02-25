import javax.swing.*;

public class Main {

    public static void main(String[] args) {
	// write your code here
        JFrame frame = new JFrame("Hello Java");
        frame.setVisible(true);
        frame.setSize(300, 250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //include the HelloComponent object
        HelloComponent aLabel = new HelloComponent();

        //add the component to the frame
        frame.add(aLabel);


    }
}
