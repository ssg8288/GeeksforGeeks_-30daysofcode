//Initial Template for Java

import java.util.*;
import java.math.*;

class Gfg
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.next());
        while(t-- > 0)
        {
            int k = Integer.parseInt(sc.next());
            String s = sc.next();
            Solution T = new Solution();
            System.out.println(T.reduced_String(k, s));
            
        }
    }
}
// } Driver Code Ends

class Solution
{
    static class Pair
    {
        char ch;
        int count;
        
        public Pair(char c ,int count)
        {
            this.ch=c;
            this.count=count;
        }
    }
    public static String reduced_String(int k, String s)
    {
        if(k==1)
        {
            return "";
        }
        Stack<Pair>st=new Stack<Pair>();
        int count=0;
        StringBuilder sb=new StringBuilder();
        for(char i:s.toCharArray())
        {
            if(st.isEmpty())
            {
                count=1;
                st.push(new Pair(i,count));
            }
            else
            {
                if(st.peek().ch==i)
                {
                    count=st.peek().count+1;
                    st.push(new Pair(st.peek().ch,count));
                    
                    if(count==k)
                    {
                        while(count-->0)
                        {
                            st.pop();
                        }
                    }
                }
                else
                {
                    count=1;
                    st.push(new Pair(i,count));
                }
            }
        }
        
        while(!st.isEmpty())
        {
            sb.append(st.peek().ch);
            st.pop();
        }
        
        return sb.reverse().toString();
        
    }
}
