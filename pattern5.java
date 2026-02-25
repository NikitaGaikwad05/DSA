*/ *****
   ****
   ***
   **
   *  */
import java.io.*;
public class pattern5{
    public void pattern(int n)
    {
        for(int i=1;i<=n;i++)
            {
            for(int j=0;j<n-i+1;j++)
                {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        pattern5 pt=new pattern5();
        int n=5;
        pt.pattern(n);
    }
}
