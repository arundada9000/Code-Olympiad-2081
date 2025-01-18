public class Main {
    public static void show(String s) {
        System.out.println("String: " + s);
    }

    public static void show(Object o) {
        System.out.println("Object: " + o);
    }

    public static void main(String[] args) {
        show(null);
    }
}

// Output:
// String: null
