public class Demo extends Thread {
    
    @Override
    public void run()
    {
       try
       {
           System.out.println("Thread"+Thread.currentThread().getId() "is running" );
       } 
       catch(Exception e)
       {
           System.out.println("Exception caught");
       }
    }
    
    
}
 class MyThread
{
    public static void main(String[] args) {
        
        for(int i=0;i<10;i++){
            
            Demo d=new Demo();
            d.start();
        }
            
    }
}
/********************************/
output

Thread9
Thread10
Thread8
Thread11
Thread12
Thread13
Thread14
Thread15
Thread16
Thread17
BUILD SUCCESSFUL (total time: 1 second)
