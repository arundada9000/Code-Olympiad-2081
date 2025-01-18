class Parent {
    public void show() {
        System.out.println("Parent Show");
    }
}

class Child extends Parent {
    public void show(String s) {
        System.out.println("Child Show with " + s);
    }
}

public class Main {
    public static void main(String[] args) {
        Child obj = new Child();
        obj.show();
    }
}

// Output:
// Parent Show
