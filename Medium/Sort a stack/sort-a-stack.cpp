//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void insertSorted(stack<int>&s ,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    
    //base case
    
    if(s.top() <= target){
        s.push(target);
        return;
    }
    
    int topElement =s.top();
    s.pop();
    insertSorted(s,target);
    
    //BT
    s.push(topElement);
    
}
void solve(stack<int>&s ){
    if(s.empty()){
        
        
        return;
    }
    
    int topElement = s.top();
    s.pop();
    solve(s);
    
    insertSorted(s,topElement);
}
void SortedStack :: sort()
{
        
        
        solve(s);
        

    
    
}