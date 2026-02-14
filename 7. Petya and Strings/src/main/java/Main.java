import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String first = scanner.nextLine().toLowerCase();
        String second = scanner.nextLine().toLowerCase();
        int val = 0;

        for (int i=0; i < first.length(); i++) {
            if (first.charAt(i) == second.charAt(i)) continue;
            if (first.charAt(i) > second.charAt(i)) val = 1;
            else val = -1;
            break;
        }
        System.out.println(val);
    }
}
