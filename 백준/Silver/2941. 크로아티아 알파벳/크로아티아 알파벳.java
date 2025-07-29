import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();

        for (String s : croatian) {
            input = input.replace(s, "*");
        }
        System.out.println(input.length());
    }
}