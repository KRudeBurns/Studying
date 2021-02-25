import javax.swing.*;



public class HelloJava {
    public static void main(String[] args)
    {
        JFrame frame;
        frame = new JFrame("Hello Java");
        //make frame visible
        frame.setVisible(true);
        //set size
        frame.setSize(340,240);

        //set the label and center it
        JLabel label = new JLabel("Hello Java!", JLabel.CENTER);


        //add label to the frame
        frame.add(label);


        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
