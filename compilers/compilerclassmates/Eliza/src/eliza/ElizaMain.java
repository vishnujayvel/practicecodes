package Eliza;

import java.util.Vector;
import java.lang.*;
import java.io.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.net.*;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.event.ListSelectionListener;

/**
 *  Eliza main class.
 *  Stores the processed script.
 *  Does the input transformations.
 */
 public class ElizaMain implements ActionListener, KeyListener{


    final boolean echoInput = false;   //printing the script file on command prompt
    final boolean printData = false;  // Test Variable for printing Keys, syns etc on command prompt

    final boolean printKeys = false;
    final boolean printSyns = false;
    final boolean printPrePost = false;
    final boolean printInitialFinal = false;
    
    static private String userName;
    static private JFrame initFrame;
    static private JPanel initPanel;
    static private JButton initButton;
    static private JLabel initLabel;
    static private JTextField initField;
     static private JButton sendButton;
     static private JFrame mainFrame;
   static private JPanel homePanel;
   static private JPanel sendPanel;
     public ElizaMain()
     {
         mainFrame=new JFrame("Samantha");
         mainFrame.resize(350,350);
         mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
         mainFrame.setLocationRelativeTo(null);
         initFrame=new JFrame("ChatBot");
         initFrame.resize(200,150);
         initFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
         initFrame.setLocationRelativeTo(null);
         
         homePanel=new JPanel();
         homePanel.setLayout(new BorderLayout(30, 30));
      
         initLabel=new JLabel("Enter your name:");
         
         initPanel=new JPanel();
       
        
         initButton=new JButton("Chat");
         initButton.addActionListener(this);
         
         initField=new JTextField(10);
         initField.setEditable(true);
          initPanel.add(BorderLayout.NORTH,initLabel);
          initPanel.add(BorderLayout.CENTER,initField);
          initPanel.add(BorderLayout.SOUTH,initButton);
          
          initFrame.add(initPanel);
          initFrame.setVisible(true);
         textarea = new TextArea(10, 40);
         textarea.setEditable(false);
         textfield = new TextField(15);
         homePanel.add("Center", textarea);
         homePanel.add("South", textfield);
         homePanel.resize(600, 300);
         
        sendButton=new JButton("Send");
        sendButton.addActionListener(this);
        sendButton.addKeyListener(this);
        sendPanel=new JPanel();
        sendPanel.add(sendButton);
       
        
         mainFrame.add("North",homePanel);
         mainFrame.add("South",sendPanel);
        mainFrame.setVisible(false);
        
     }
  
    /** The key list */
    KeyList keys = new KeyList();
    /** The syn list */
    SynList syns = new SynList();
    /** The pre list */
    PrePostList pre = new PrePostList();
    /** The post list */
    PrePostList post = new PrePostList();
    /** Initial string */
    String initial = "Hello.";
    /** Final string */
    String finl = "Goodbye.";
    /** Quit list */
    WordList quit = new WordList();

    /** Key stack */
    KeyStack keyStack = new KeyStack();

    /** Memory */
    Mem mem = new Mem();

    DecompList lastDecomp;
    ReasembList lastReasemb;
    boolean finished = false;

    static final int success = 0;
    static final int failure = 1;
    static final int gotoRule = 2;

    public boolean finished() {
        return finished;
    }

    /**
     *  Process a line of script input.
     */
    public void collect(String s){
    //   System.out.println("\n Inside Collect for string :"+s);
        String lines[] = new String[4];
        boolean status;
        status=EString.match(s, "*reasmb: *", lines);
      //  System.out.println("Status for Reasmb: "+status);
        if (status) // a line of script file, pattern, and matching statement ; Beginning with
        {
            if (lastReasemb == null) {
                System.out.println("Error: no last reasemb");
                return;
            }
       //     System.out.println("Adding lines[1] to vector:"+lines[1]);
            lastReasemb.add(lines[1]);
         //   lastReasemb.print(1);
        }
    
       else if (EString.match(s, "*decomp: *", lines)) {
            if (lastDecomp == null) {
                System.out.println("Error: no last decomp");
                return;
            }
            lastReasemb = new ReasembList();
            String temp = new String(lines[1]);
            if (EString.match(temp, "$ *", lines)) {
                lastDecomp.add(lines[0], true, lastReasemb);
            } else {
                lastDecomp.add(temp, false, lastReasemb);
            }
        }
        else if (EString.match(s, "*key: * #*", lines)) {
            lastDecomp = new DecompList();
            lastReasemb = null;
            int n = 0;
            if (lines[2].length() != 0) {
                try {
                    n = Integer.parseInt(lines[2]);
                } catch (NumberFormatException e) {
                    System.out.println("Number is wrong in key: " + lines[2]);
                }
            }
            keys.add(lines[1], n, lastDecomp);
        }
        else if (EString.match(s, "*key: *", lines)) {
            lastDecomp = new DecompList();
            lastReasemb = null;
            keys.add(lines[1], 0, lastDecomp);
        }
        else if (EString.match(s, "*synon: * *", lines)) {
            WordList words = new WordList();
            words.add(lines[1]);
            s = lines[2];
            while (EString.match(s, "* *", lines)) {
                words.add(lines[0]);
                s = lines[1];
            }
           
            words.add(s);
            syns.add(words);
        }
        else if (EString.match(s, "*pre: * *", lines)) {
            pre.add(lines[1], lines[2]);
        }
        else if (EString.match(s, "*post: * *", lines)) {
            post.add(lines[1], lines[2]);
        }
        else if (EString.match(s, "*initial: *", lines)) {
            initial = lines[1];
        }
        else if (EString.match(s, "*final: *", lines)) {
            finl = lines[1];
        }
        else if (EString.match(s, "*quit: *", lines)) {
            quit.add(" " + lines[1]+ " ");
        }
        else {
            System.out.println("Unrecognized input: " + s);
        }
    }

    /**
     *  Print the stored script. 
     */
   public void print() {
        if (printKeys) keys.print(0);
        if (printSyns) syns.print(0);
        if (printPrePost) {
            pre.print(0);
            post.print(0);
        }
        if (printInitialFinal) {
            System.out.println("initial: " + initial);
            System.out.println("final:   " + finl);
            quit.print(0);
        }
    }

    /**
     *  Process a line of input.
     */
    public String processInput(String s) {
        String reply;
        //  Do some input transformations first.
        s = EString.translate(s, "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                                 "abcdefghijklmnopqrstuvwxyz");
        s = EString.translate(s, "@#$%^&*()_-+=~`{[}]|:;<>\\\"",
                                 "                          "  );
        s = EString.translate(s, ",?!", "...");
        //  Compress out multiple speace.
        s = EString.compress(s);
        String lines[] = new String[2];
        //  Break apart sentences, and do each separately.
        while (EString.match(s, "*.*", lines)) {
            reply = sentence(lines[0]);
            if (reply != null) return reply;
            s = EString.trim(lines[1]);
        }
        if (s.length() != 0) {
            reply = sentence(s);
            if (reply != null) return reply;
        }
        //  Nothing matched, so try memory.
        String m = mem.get();
        if (m != null) return m;

        //  No memory, reply with xnone.
        Key key = keys.getKey("xnone");
        if (key != null) {
            Key dummy = null;
            reply = decompose(key, s, dummy);
            if (reply != null) return reply;
        }
        //  No xnone, just say anything.
        return "I am at a loss for words.";
    }

    /**
     *  Process a sentence.
     *  (1) Make pre transformations.
     *  (2) Check for quit word.
     *  (3) Scan sentence for keys, build key stack.
     *  (4) Try decompositions for each key.
     */
    String sentence(String s) {
        s = pre.translate(s);
        s = EString.pad(s);
        if (quit.find(s)) {
            finished = true;
            return finl;
        }
        keys.buildKeyStack(keyStack, s);
        for (int i = 0; i < keyStack.keyTop(); i++) {
            Key gotoKey = new Key();
            String reply = decompose(keyStack.key(i), s, gotoKey);
            if (reply != null) return reply;
            //  If decomposition returned gotoKey, try it
            while (gotoKey.key() != null) {
                reply = decompose(gotoKey, s, gotoKey);
                if (reply != null) return reply;
            }
        }
        return null;
    }

    /**
     *  Decompose a string according to the given key.
     *  Try each decomposition rule in order.
     *  If it matches, assemble a reply and return it.
     *  If assembly fails, try another decomposition rule.
     *  If assembly is a goto rule, return null and give the key.
     *  If assembly succeeds, return the reply;
     */
    String decompose(Key key, String s, Key gotoKey) {
        String reply[] = new String[10];
        for (int i = 0; i < key.decomp().size(); i++) {
            Decomp d = (Decomp)key.decomp().elementAt(i);
            String pat = d.pattern();
            if (syns.matchDecomp(s, pat, reply)) {
                String rep = assemble(d, reply, gotoKey);
                if (rep != null) return rep;
                if (gotoKey.key() != null) return null;
            }
        }
        return null;
    }

    /**
     *  Assembly a reply from a decomp rule and the input.
     *  If the reassembly rule is goto, return null and give
     *    the gotoKey to use.
     *  Otherwise return the response.
     */
    String assemble(Decomp d, String reply[], Key gotoKey) {
        String lines[] = new String[3];
        d.stepRule();
        String rule = d.nextRule();
        if (EString.match(rule, "goto *", lines)) {
            //  goto rule -- set gotoKey and return false.
            gotoKey.copy(keys.getKey(lines[0]));
            if (gotoKey.key() != null) return null;
            System.out.println("Goto rule did not match key: " + lines[0]);
            return null;
        }
        String work = "";
        while (EString.match(rule, "* (#)*", lines)) {
            //  reassembly rule with number substitution
            rule = lines[2];        // there might be more
            int n = 0;
            try {
                n = Integer.parseInt(lines[1]) - 1;
            } catch (NumberFormatException e) {
                System.out.println("Number is wrong in reassembly rule " + lines[1]);
            }
            if (n < 0 || n >= reply.length) {
                System.out.println("Substitution number is bad " + lines[1]);
                return null;
            }
            reply[n] = post.translate(reply[n]);
            work += lines[0] + " " + reply[n];
        }
        work += rule;
        if (d.mem()) {
            mem.save(work);
            return null;
        }
        return work;
    }

    TextArea textarea;
    TextField textfield;

    public void response(String str) {
        textarea.appendText(str);
        textarea.appendText("\n");
    }


    int readScript(boolean local, String script) {
        DataInputStream in = null;
        FileInputStream fin;
        try {
            if (local) {
                fin = new FileInputStream("c:\\Users\\narainsharma\\Desktop\\script");
               
                in = new DataInputStream(fin);
                

            } 
           /* else { // if script is not on local machine. Not needed. 
                try {
                    URL url = new URL(script);
                    URLConnection connection = url.openConnection();
                    in = new DataInputStream(connection.getInputStream());
                } catch (MalformedURLException e) {
                    System.out.println("The URL is malformed: " + script);
                    return 1;
                } catch (IOException e) {
                    System.out.println("Could not read script file.");
                    return 1;
                }
            }*/
            while (true) {
                String s;
                s = in.readLine();
            //    System.out.println("Line read:"+s+"\n");
                if (s == null) break;
                if (!echoInput) 
                System.out.println(s); //printing the script files. Testing
             //   System.out.println("\n Processing(calling collect function) line:"+s+"\n");
                collect(s); // The processing starts here
            }
        } 
        catch (IOException e) 
        {
            System.out.println("There was a problem reading the script file.");
            System.out.println("Tried " + script);
            System.out.println("Exception:"+e);
            return 1;
        }
//        if (printData) print();
        return 0;
    }

   /*int runProgram(String test, JPanel w) {
        DataInputStream in;

        if (w != null) {

            w.setLayout(new BorderLayout(15, 15));

            textarea = new TextArea(10, 40);
            textarea.setEditable(false);

            w.add("Center", textarea);

            textfield = new TextField(15);
            w.add("South", textfield);

            w.resize(600, 300);
            w.show();

            String hello = "Hello.";
            response(">> " + hello);
            response(processInput(hello));
            textfield.requestFocus();

        } else {
            try {
                in = new DataInputStream(new FileInputStream("c:\\Users\\narainsharma\\Desktop\\test"));
                String s;
                s = "Hello.";
                while (true) {
                    System.out.println(">> " + s);
                    String reply = processInput(s);
                    System.out.println(reply);
                    if (finished) break;
                    s = in.readLine();
                    if (s == null) break;
                }
            } catch (IOException e) {
                System.out.println("Problem reading test file.");
                return 1;
            }
        }

        return 0;

    }

    public boolean handleEvent(Event event) {
        switch (event.id) {
            case Event.ACTION_EVENT:
                if (event.target == textfield) {
                    String input = (String)event.arg;
                    String reply = processInput(input);
                    textfield.setText("");
                    response(">> " + input);
                    response(reply);

                    return true;
                }
        }
        return false;
    }
   int runProgram(String test) {
       // DataInputStream in;

        if (homePanel != null) {

            
          
          
            textfield.requestFocus();

        }
        
        return 0;

    }*/

   
    @Override
    public void actionPerformed(ActionEvent e) {
                    if(e.getSource()==initButton)
                    {
                        userName=initField.getText();
                        initFrame.setVisible(false);
                        textarea.setText(initial+"\n");
                     //   textarea.setText("\n");
                        mainFrame.setVisible(true);
                        
                    }
                    else if(e.getSource()==sendButton)
                    {
                        String input = textfield.getText();
                        String reply = processInput(input);
                       
                        textfield.setText("");
                        response(userName+":" + input);
                        response("Samantha:"+reply);
                    }

    }

    @Override
    public void keyTyped(KeyEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void keyPressed(KeyEvent e) {
        if(e.getKeyChar()=='\n')
        {
            String input = textfield.getText();
                    String reply = processInput(input);
                    textfield.setText("");
                    response("You:" + input);
                    response("Samantha:"+reply);
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

 }