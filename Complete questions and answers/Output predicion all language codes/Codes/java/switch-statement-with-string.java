public class Main {
    public static void main(String[] args) {
        String color = "Red";
        switch (color) {
            case "Blue":
                System.out.println("Blue");
            case "Red":
                System.out.println("Red");
            default:
                System.out.println("Default");
        }
    }
}

// Output:
// Red
//Default
