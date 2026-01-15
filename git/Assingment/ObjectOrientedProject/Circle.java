package ObjectOrientedProject;

public final class Circle extends Shape{
    private float r=0.00f;
    private float pi=3.14f;
    
    public void takeInput(){
        System.out.println("Enter the radius");
        r=in.nextFloat();
    }
    public void calculate(){
        area=pi*r*r;
    }
}
