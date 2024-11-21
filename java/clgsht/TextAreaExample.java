
import java.awt.*;    
public class TextAreaExample    
{    
     TextAreaExample() {    
// creating a frame  
        Frame f = new Frame();    
// creating a text area  
            TextArea area = new TextArea("Welcome to javatpoint");    
// setting location of text area in frame  
        area.setBounds(10, 30, 300, 300);    
// adding text area to frame  
        f.add(area);  
// setting size, layout and visibility of frame    
        f.setSize(400, 400);    
        f.setLayout(null);    
        f.setVisible(true);    
     }    
public static void main(String args[])    
{    
   new TextAreaExample();    
}    
}    