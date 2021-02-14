//Initial Template for Java

import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0){
        	int n = sc.nextInt();
        	int array[] = new int[n];
        	for (int i=0; i<n ; i++ ) {
        		array[i] = sc.nextInt();
        	}
            Solution ob = new Solution();
            System.out.println(ob.RulingPair(array,n));
            t--;
        }
    } 
} 
      // } Driver Code Ends


//User function Template for Java

class Solution
{
static int digitSum(int n) {
int sum = 0;
while (n != 0)
{
sum += (n % 10);
n /= 10;
}
return sum;
}

static int RulingPair(int arr[], int n) {
// max digit sum of 10^9 is 81

int map[] = new int[81 + 1];

int ans = -1;

for (int i = 0; i < n; i++)
{
// Finding the digit sum of arr[i]
int dSum = digitSum(arr[i]);

if (map[dSum] != 0)
{
ans = Math.max(ans, map[dSum] + arr[i]);
}
map[dSum] = Math.max(map[dSum] , arr[i]) ;
}
return ans;
}
} 
