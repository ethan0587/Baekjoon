import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double totalGrade =0;
        double totalCredits = 0;

        for (int i=0; i<20; i++){
            String input = scanner.nextLine();
            String[] inputs = input.split(" ");

            double credit = Double.parseDouble(inputs[1]);
            String gradeStr = inputs[2];

            if (gradeStr.equals("P")) {
                continue;
            }

            double grade = getGradePoint(gradeStr);

            totalGrade+=grade*credit;
            totalCredits+=credit;

        }
        double gpa = 0;
        if (totalCredits > 0) {
            gpa = totalGrade / totalCredits;
        }

        System.out.printf("%.6f", gpa);

    }

    static double getGradePoint(String grade) {
        switch (grade) {
            case "A+": return 4.5;
            case "A0": return 4.0;
            case "B+": return 3.5;
            case "B0": return 3.0;
            case "C+": return 2.5;
            case "C0": return 2.0;
            case "D+": return 1.5;
            case "D0": return 1.0;
            case "F":  return 0.0;
            default:   return 0.0;
        }
    }
}