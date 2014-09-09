package Eliza;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

/**
 *  Eliza Application.
 */
public class ElizaApp {

    static String scriptPathname = "script"; // Name of the script file
    static String testPathname = "test"; //Name of the test file
    static String scriptURL = "c:\\Users\\narainsharma\\Desktop\\script"; // Change this URL to the location of your script

    static final boolean useWindow = true;
    static final boolean local = true; // Script is on local machine. Need to remove this.
  
  
    
  
        
    public static void main(String args[]) {
        
        ElizaMain eliza = new ElizaMain();
        String script = scriptPathname; //script=script
        String test = testPathname; //test=test
   /*     if (! local) 
        {
            script = scriptURL;
        //    System.out.print("True");
        }
        else
        {
          //  System.out.print("False");
            }
            * 
        if (args.length > 0) script = args[0];
        if (args.length > 1) test = args[1];*/
        int res = eliza.readScript(local, script);
        if (res != 0) System.exit(res);
      /*  if (useWindow) {    // displaying in Frames   
           res = eliza.runProgram(test);
        } 
        else {
            res = eliza.runProgram(test, null); //displaying in Command Prompt
            System.exit(res);
        }*/
    }

  

}

