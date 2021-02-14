//Initial Template for Java

import java.io.*;
import java.util.*; 

 // } Driver Code Ends

class Solution 
{ 
	static int maxCandy(int a[], int n) 
	{ 
	    // Your code goes here
	   int l=0;
	   int r=n-1;
	   int res=0;
	   while(l<r){
	       int temp=(r-l-1)*Math.min(a[l],a[r]);
	       if(temp>res){
	           res=temp;
	       }
	       if(a[l]<a[r]){
	           l++;
	       }else{
	           r--;
	       }
	   }
	   return res;
	}
}


// { Driver Code Starts.
class GFG{
	public static void main(String[] args) 
	{ 
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int height[] = new int[n];
            for (int i = 0; i < n; ++i)
            {
                height[i] = sc.nextInt();
            }

            Solution ob = new Solution();
            System.out.println(ob.maxCandy(height,n));
            t--;
        }
	} 
} 

  // } Driver Code Ends
