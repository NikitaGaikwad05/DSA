/* 1
   12   
   123  
   1234 
   12345 */

  import java.io.*;
public class pattern3{
    public void pattern(int n)
    {
        for(int i=1;i<=5;i++)
            {
            for(int j=1;j<=i;j++)
                {
                System.out.print(j);

            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        pattern3 pt=new pattern3();
        int n=5;
        pt.pattern(n);
    }
}
