import java.util.Scanner;

public class Task4 {
    public static int Square(int n) {
        return n*n;
    }
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        int m = userInput.nextInt();
        System.out.println(Square((m)));
        userInput.close();
    }
}
