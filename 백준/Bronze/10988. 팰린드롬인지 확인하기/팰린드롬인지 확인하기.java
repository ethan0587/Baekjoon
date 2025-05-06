import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
        String[] wordArray = new String[word.length()];

        for (int i = 0; i < word.length(); i++)
            wordArray[i] = String.valueOf(word.charAt(i));

        boolean answer = true;

        for (int j = 0; j < word.length(); j++) {
            if (!wordArray[j].equals(wordArray[word.length() -1 - j])) {
                answer = false;
                break;
            }
        }

        if (answer)
            System.out.println("1");
        else
            System.out.println("0");
    }
}