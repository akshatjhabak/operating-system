class Demo implements Runnable
{ 
    @Override
    public void run() 
    { 
        try
        { 
          System.out.println ("Thread " +Thread.currentThread().getId()+" is running"); 
  	} 
        catch (Exception ex) 
        { 
            System.out.println ("Exception is caught"); 
        } 
    } 
} 
   
public class Multithread 
{ 
    public static void main(String[] args) 
    { 
        for (int i=0; i<8; i++) 
        { 
            Demo ob = new Demo();
	    Thread th=new Thread(ob);	 
            th.start(); 
        } 
    } 
} 
/********************/
output
Thread 9 is running
Thread 12 is running
Thread 11 is running
Thread 10 is running
Thread 8 is running
Thread 15 is running
Thread 13 is running
Thread 14 is running
BUILD SUCCESSFUL (total time: 0 seconds)