//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    
     double median = 0;
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int> > minHeap;
    int signum(int a , int b) {
        if(a == b) 
                return 0;
        if(a > b )
                return 1;
        if(a < b)
                return -1;
}
    
    void insertHeap(int &element)
    {
        
        
        switch(signum(minHeap.size(), maxHeap.size())) {
                case 0:if(element > median) {
                        minHeap.push(element);
                        median = minHeap.top();
                        }
                        else {
                        maxHeap.push(element);
                        median = maxHeap.top();
                       }
                        break;
                case 1: if(element > median ) {
                        int minTop = minHeap.top();
                        minHeap.pop();
                        maxHeap.push(minTop);
                        minHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                        }
                        else {
                        maxHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                        }
                        break;
                case -1: if(element > median) {
                        minHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                         }
                         else {
                        int maxTop = maxHeap.top();
                        maxHeap.pop();
                        minHeap.push(maxTop);
                        maxHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                        }
                        break;

        }
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        return median;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends