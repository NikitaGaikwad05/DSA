/* *
   **
   ***
   ****
   *****  */

  import java.io.*;
public class pattern2{
    public void pattern(int n)
    {
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<=i;j++)
                {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String args[]){
        pattern2 pt=new pattern2();
        int n=5;
        pt.pattern(n);
    }
}
