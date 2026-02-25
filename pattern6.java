*/  12345
    1234 
    123  
    12   
    1  */

 import java.io.*;
 public class pattern6
 {
    public void pattern(int n)
    {
        for(int i=0;i<=n;i++)
            {
            for(int j=1;j<n-i+1;j++)
                {
                System.out.print(j);
            }
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        pattern6 pt=new pattern6();
        int n=5;
        pt.pattern(n);

    }
}
