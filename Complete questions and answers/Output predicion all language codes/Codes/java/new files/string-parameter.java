public class Main {
    void display(int... nums) {
        System.out.println("Varargs Method");
    }

    void display(int num) {
        System.out.println("Single Parameter Method");
    }

    public static void main(String[] args) {
        Main obj = new Main();
        obj.display(5);
    }
}

//Single Parameter Method
