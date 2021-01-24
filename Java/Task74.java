import java.util.Scanner;

public class Task74 {

    static long gcd(long a, long b){
        if (b == 0) 
            return a;
        else 
            return gcd(b, a%b);
    }

    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        long number1, number2;
        number1 = userInput.nextInt();
        number2 = userInput.nextInt();
        System.out.println(gcd(number1, number2));
        userInput.close();
    }
}