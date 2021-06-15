package com.aiit.thj;

public class AIIT190329 
{

	public static void main(String[] args)
	{
		//一数组的遍历
		int array1[]=new int[] {9,8,5,2,1,1};
		
		//foreach
		for(int i:array1)
		{ 
			System.out.print(i+"\t");
		}
		System.out.println();
		//for
		for(int i=0;i<array1.length;i++)
		{ 
			System.out.print(array1[i]+"\t");
		}
		System.out.println();
		//二维数组的遍历
		int array2[][]=new int[][] {{9,8,5},{2,1,1}};
		
		//foreach
		for(int i[]:array2)
		{ 
			for(int j:i)
			{ 
				System.out.print(j+"\t");
			}
		}
		System.out.println();
		
		//for
		for(int i=0;i<array2.length;i++)
		{ 
			for(int j=0;j<array2[i].length;j++)
			{ 
				System.out.print(array2[i][j]+"\t");
			}
		}
	}

}
