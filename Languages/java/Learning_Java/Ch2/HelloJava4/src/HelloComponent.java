import javax.swing.*;
import java.awt.*;

//extends means to add functionality to a class
//HelloComponent adds the JComponents functionality to itself
//in other words HelloCompenent inherits the capabilities of JComponent
public class HelloComponent extends JComponent {
    //HelloComponent overrides the fxn
    // paintComponent(Graphics g) which exists in JComponent
    public void paintComponent(Graphics g){
        //set the color g will be painting with
        g.setColor(Color.BLUE);
        //create a font g will be using
        Font aFont = new Font(Font.SANS_SERIF, Font.BOLD, 14);
        //set that font
        g.setFont(aFont);
        //now actually draw
        g.drawString("Hello, Java!", 130, 95);



        //test line - print the type of font to the terminal
        System.out.println("The font is = " + g.getFont());
        System.out.println("The font is = " + g.getFont().getFontName());
        System.out.println("The font is = " + g.getFont().getName());
        System.out.println("The postscript name = " + g.getFont().getPSName());


    }
}
