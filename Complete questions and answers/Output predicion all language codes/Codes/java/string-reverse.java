public class Main {
    public static void main(String[] args) {
        String s = "Hello";
        String rev = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            rev += s.charAt(i);
        }
        System.out.println(rev);
    }
}

// Output:
// olleH
