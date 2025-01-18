class Test {
    public Test() {
        System.out.println("Default Constructor");
    }

    public Test(int x) {
        this();
        System.out.println("Parameterized Constructor with x = " + x);
    }
}

public class Main {
    public static void main(String[] args) {
        Test obj = new Test(10);
    }
}

// Output:
// Default Constructor
// Parameterized Constructor with x = 10
