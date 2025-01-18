class Main {
    Main() {
        System.out.println("Default Constructor");
    }
    
    Main(int x) {
        this();
        System.out.println("Parameterized Constructor: " + x);
    }
    
    public static void main(String[] args) {
        Main obj = new Main(10);
    }
}

//Default Constructor
//Parameterized constructor