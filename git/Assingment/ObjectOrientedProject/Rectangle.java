package ObjectOrientedProject;

public final class Rectangle extends Shape {
    private float length =0.00f;
    private float breath=0.00f;

    public void takeInput(){
        System.out.println("Enter the length and breath ");
        length=in.nextFloat();
        breath=in.nextFloat();
    }
    public void calculate(){
        area=length*breath;
    }
}
