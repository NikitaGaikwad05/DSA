//find the person eligible for voting or not using if else

import java.util.*;
class demo
{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the age:");
    int age=sc.nextInt();
    if(age>=18){
      System.out.println("you are an adult:"+age);
    }else{
      System.out.println("You are not an adult"+age);
    }
  }
 
}
