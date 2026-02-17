import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();

        List<Character> uppers = new ArrayList<>();
        List<Character> lowers = new ArrayList<>();

        for (int i=0; i < word.length(); i++){
            if (word.charAt(i) < 97) uppers.add(word.charAt(i));
            else lowers.add(word.charAt(i));
        }

        if (lowers.size() >= uppers.size())
            System.out.println(word.toLowerCase());
        else
            System.out.println(word.toUpperCase());
    }
}
