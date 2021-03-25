求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
package com.aiit.thj;

import java.util.Scanner;

public class AIITCherry0329 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
        int  n=0;
        long sum=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=1;i<n+1;i++)
        { 
        	sum+=fun(i);
        }
       System.out.println(sum);
	}
   public static long fun(int i)
  { 
	 long jc=1;
	 if(i==1)
	 { 
		 jc*=1;
	 }
	 else
	 { 
		 jc*=i*fun(i-1);
	 }
	 return jc;
  }
}