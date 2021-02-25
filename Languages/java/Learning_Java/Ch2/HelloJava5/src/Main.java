import javax.swing.*;

public class Main {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Hello Java 5");

        //frame.add(new HelloComponent2 ("Hello, Java!"));
        HelloComponent2 aLabel = new HelloComponent2();
        frame.add(aLabel);
        frame.setSize(300, 300);
        frame.setVisible(true);


        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


    }
}
