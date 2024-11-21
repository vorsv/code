import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
public class WordCountInFile 
{   
    public static void main(String[] args) 
    {
        BufferedReader reader = null;
        int charCount = 0;
        try
        {
            reader = new BufferedReader(new FileReader("C:\\sample.txt"));
            String currentLine = reader.readLine();
             
            while (currentLine != null)
            {
                String[] words = currentLine.split(" ");
                for (String word : words){
                    charCount = charCount + word.length();
                }
                currentLine = reader.readLine();
            }
            System.out.println("Number Of Chars In A File : "+charCount);
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
        finally
        {
            try
            {
                reader.close();       
            }
            catch (IOException e) 
            {
                e.printStackTrace();
            }
        }
    }   
}