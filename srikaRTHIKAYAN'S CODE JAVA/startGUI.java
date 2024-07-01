
import javax.swing.JFrame;
import javax.swing.ImageIcon;
import javax.swing.JLabel;
import javax.swing.JButton;

public class startGUI {

public static void main(String[] args) {

ImageIcon icon = new ImageIcon("meme.png");
JButton clickmemeButton = new JButton();
clickmemeButton.setIcon(icon);
clickmemeButton.setBounds(200,100,50,25);

JLabel labelgui1 = new JLabel(icon);

JFrame appgui =new JFrame();
appgui.setTitle("no troll button at all😊☠️");
appgui.setSize(1920,1080);
appgui.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
appgui.setVisible(true);
appgui.add(labelgui1);
appgui.add(clickmemeButton);
}


}