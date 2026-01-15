package ObjectOrientedProject;

public class ShapeApp {
    public static void main(String[] args) {
        Geomerty geomerty = new Geomerty();
        geomerty.accept(new Circle());
        geomerty.accept(new Rectangle());
        geomerty.accept(new Square());
    }
}
