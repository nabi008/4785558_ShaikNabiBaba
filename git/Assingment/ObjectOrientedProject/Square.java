package ObjectOrientedProject;

public final class Square extends Shape{
    private float length=0.00f;
    public void takeInput(){
        System.out.println("Enter the length");
        length=in.nextFloat();
    }
    public void calculate(){
        area=length*length;
    }
}
