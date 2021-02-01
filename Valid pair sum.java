
import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
        	int n = sc.nextInt();
        	int array[] = new int[n];
        	for (int i=0; i<n ;i++ ) {
        		array[i] = sc.nextInt();
        	}
            Solution ob = new Solution();
            System.out.println(ob.ValidPair(array,n));
            t--;
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
static long ValidPair(int a[], int n)
{
long count=0;
Arrays.sort(a);
for(int i=n-1;i>=0;i--){

int beg=0;
int end=i-1;
if(a[i]>0){
while(beg<=end){
int mid=(beg+end)/2;
if(a[mid]>-1*a[i]){
end=mid-1;
}else{
beg=mid+1;
}
}
count+=i-(end+1);
}

}
return count;
}
}
