class Main {
    static String s = initialize();

    static String initialize() {
        System.out.println("Static Method");
        return "Initialized";
    }

    public static void main(String[] args) {
        System.out.println("Main Method");
        System.out.println(s);
    }
}

//Static Method
//Main Method
//Initialized