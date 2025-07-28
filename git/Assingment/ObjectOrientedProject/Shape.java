package ObjectOrientedProject;

import java.util.Scanner;

public abstract class Shape {
    public Scanner in=new Scanner(System.in);
    public float area =0.00f;
    abstract public void takeInput();
    abstract public void calculate();
    public void dispaly(){
        System.out.println("Area is "+area);
    }

}
