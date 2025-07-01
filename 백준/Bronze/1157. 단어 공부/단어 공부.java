import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine().toUpperCase();

        int[] cnt = new int[26];
        int most = 0;
        int mostIndex = 0;
        int sameCnt = 0;
        List<Character> alphabetList = new ArrayList<>();

        for (char c = 'A'; c <= 'Z'; c++) {
            alphabetList.add(c);
        }

        for (int i = 0; i < word.length(); i++) {
            for (int j = 0; j < 26; j++) {
                if (alphabetList.get(j) == word.charAt(i)) {
                    cnt[j]++;
                }
            }
        }

        for(int i=0; i<26; i++){
            if (cnt[i] > most) {
                most = cnt[i];
                mostIndex=i;
            }
        }
        for(int i=0; i<26; i++){
            if (cnt[i] == most)
                sameCnt++;
        }

        if (sameCnt > 1) {
            System.out.println("?");
        } else {
            System.out.println(alphabetList.get(mostIndex));
        }
    }
}