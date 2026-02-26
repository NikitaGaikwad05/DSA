/*  *   
   ***
  *****
 *******
*********    */
import java.io.*;
public class pattern7{
    public void pattern(int n)
    {
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<n-i-1;j++)
                {
                System.out.println("");
            }
            for(int j=0;j<2*i+1;j++)
                {
                System.out.print("*");

            }
            System.out.println();

        }
    }
    public static void main(String args[]){
        pattern7 pt=new pattern7();
        int n=5;
        pt.pattern(n);
    }
}
