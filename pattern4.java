*/   1
     22   
     333  
     4444 
     55555 */

 import java.io.*;
public class pattern4
{
    public void pattern(int n)
    {
        for(int i=1;i<=n;i++)
            {
           for(int j=1;j<=i;j++)
            {
            System.out.print(i);
           }
           System.out.println();
        }
    }
    public static void main(String args[])
    {
         pattern4 pt=new pattern4();
         int n=5;
         pt.pattern(n);
    }
}
