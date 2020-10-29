import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class RecursiveReveal {
    public static void RevealStr(String string, int start, int length, FileWriter writer) throws IOException {
        int index = string.substring(start).indexOf('*') + start;           // Done to find the next instance of *, +start to find its index on the actual array
        char[] characters = string.toCharArray();                           // To change the character of the String
        int binaryChar = 48;                                                // Character value of 0
        //Base Case - Where there is no more *
        if (index-start == -1){
            System.out.println(string);
            writer.write(string +"\n");
            return;
        }

        //Recursion - Change all the instances of * to 0 or 1 using binaryCount "either count +1 or -1"
        characters[index] = (char)binaryChar;
        string = String.valueOf(characters);                            // turn array back to string
        RevealStr(string, index+1, length-index, writer);   // substring where the previous * is turned to 0
        binaryChar += 1;
        characters[index] = (char)binaryChar;
        string = String.valueOf(characters);
        RevealStr(string, index+1, length-index, writer);   // substring where the previous * is turned to 1

    }

    public static void main(String[] args) throws IOException {
        File output = new File("recursiveOut.txt");
        FileWriter writer = new FileWriter(output, true);

        // Get string from user
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your String including * as masks: ");
        String s = input.nextLine();


        int length = s.length();
        int masks = 0;
        for (int i = 0; i < length; i++){ // To Count the number of Masks
            if (s.charAt(i) == '*')
                masks++;
        }

        writer.write("String: " + s + "\nNumber of masks: " + masks +"\nOutputs:\n");


        long startTime = System.nanoTime(); // Start time
        RevealStr(s, 0 , length, writer);
        long endTime = System.nanoTime(); // End Time
        long runtime = endTime - startTime; // Runtime
        writer.write(((float) runtime)/1000000 + " milliseconds.\n\n");

        System.out.println(runtime);

        writer.close();
    }
}
