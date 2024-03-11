//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class Driverclass
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        //Reading total number of testcases
        int t= sc.nextInt();
        
        while(t-- >0)
        {
            //reading the string
            String st = sc.next();
            
            //calling ispar method of Paranthesis class 
            //and printing "balanced" if it returns true
            //else printing "not balanced"
            if(new Solution().ispar(st) == true)
                System.out.println("balanced");
            else
                System.out.println("not balanced");
        
        }
    }
}
// } Driver Code Ends



class Solution
{
    //Function to check if brackets are balanced or not.
    static boolean ispar(String x)
    {
        // add your code here
        Stack<Character> stack = new Stack<>();
        Map<Character, Character> mapping = new HashMap<>();
        mapping.put('}','{');
        mapping.put(')','(');
        mapping.put(']','[');
        for(int i=0; i<x.length(); i++){
            char c = x.charAt(i);
            if (mapping.containsKey(c)){
                char topElement = stack.empty() ? '#' : stack.pop();
                if(topElement != mapping.get(c)){
                    return false;
                }
            }else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
}
