*/*****
  *****
  *****
  *****
  *****  */


import java.io.*;
public class solution{
    public void pattern(int n)
    {
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<n;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[]args){
        solution s=new solution();
        int n=5;
        s.pattern(n);

    }
}
