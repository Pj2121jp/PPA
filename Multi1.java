import java.util.*;

class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is runing");
    }

}

public class Multi1 
{
    public static void main(String Args[])
    {
        System.out.println("Inside Main Thread");

        Demo obj1 = new Demo();        
        Demo obj2 = new Demo();

        obj1.start();
        obj2.start();


    }
    
}
