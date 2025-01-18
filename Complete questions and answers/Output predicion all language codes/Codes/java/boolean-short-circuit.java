public class Main {
    public static void main(String[] args) {
        int x = 5;
        if (x > 0 || x++ < 10) {
            System.out.println(x);
        }
    }
}

// Output:
// 5
