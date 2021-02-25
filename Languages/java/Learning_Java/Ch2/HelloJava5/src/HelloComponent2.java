import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionListener;


public class HelloComponent2 extends JComponent
implements MouseMotionListener {

    //this is a public string that can be used for all methods
    String theMessage;
    //declaring coordinates of the message
    int messageX = 125, messageY = 95;

    //default constructor
    public HelloComponent2() {
        theMessage = "James Burns Chaes";
        addMouseMotionListener(this);
    }

    //this is an overloaded constructor that allows me
    // to construct hello message with a string of choice
    // in main
    //addMouseMotionListener(this) tells the program to listen
    //when the mouse makes a motion when this overloaded constructor
    //is the object
    public HelloComponent2(String message) {
        theMessage = message;
        addMouseMotionListener(this);
    }

    public void paintComponent(Graphics g) {
        //set the font
        //Font(name_of_font, style_of_font, size_of_font)
        Font aFont = new Font("Courier", Font.PLAIN, 20);
        g.setFont(aFont);

        //set the paint color
        g.setColor(Color.CYAN);

        g.drawString( theMessage, messageX, messageY);
    }

    public void mouseDragged(MouseEvent e) {
        //save the mouse coordinates and paint the message
        //messageX = e.getX();
        //messageY = e.getY();
        //repaint();
    }

    public void mouseMoved(MouseEvent e) {
        messageX = e.getX();
        messageY = e.getY();
        repaint();
    }


    //MouseMotionListener is an interface
    //an interface is an abstract class that uses methods with empty bodies

    //to access the interface methods, the methods must be implemented
    //in the class that uses it.
    //the class that implements the interface, must override every method of
    // the interface.
}
