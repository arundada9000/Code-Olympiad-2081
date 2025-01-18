public class Main {
    public static void main(String[] args) {
        try {
            int x = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Division by zero");
        }
    }
}

// Output:
// Division by zero
