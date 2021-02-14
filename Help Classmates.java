//Initial Template for Java


import java.util.*; 
import java.io.*; 

class GFG 
{ 
	public static void main (String[] args) { 
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
        	int n = sc.nextInt();
            int array[] = new int[n];
            for (int i = 0; i < n; ++i)
            {
                array[i] = sc.nextInt();
            }

            Solution ob = new Solution();

            int ans[] = ob.help_classmate(array,n);

           	for (int i=0; i<n; i++) 
                System.out.print(ans[i]+" "); 
            System.out.println();
            t--;
        }
	} 
} 

// } Driver Code Ends


//User function Template for Java

class Solution {
public static int[] help_classmate(int arr[], int n)
{
// Your code goes here
int j = 1;
int[] hc_array = new int[n];
for(int i = 0; i < n; i++){
j = i+1;
while(j < n && arr[i] <= arr[j]) j++;

hc_array[i] = (j != n) ? arr[j] : -1;
}
return hc_array;
}
}
