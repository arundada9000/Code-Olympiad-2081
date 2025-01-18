public class Main {
    public static void main(String[] args) {
        try {
            try {
                int x = 5 / 0;
            } catch (ArithmeticException e) {
                System.out.println("Inner Catch");
                throw e;
            }
        } catch (Exception e) {
            System.out.println("Outer Catch");
        }
    }
}

// Output:
// Inner Catch
// Outer Catch
