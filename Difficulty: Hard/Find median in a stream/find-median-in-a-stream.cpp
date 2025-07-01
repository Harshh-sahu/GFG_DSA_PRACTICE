class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        
        
       vector<double> result;

        // maxHeap to store the smaller half
        priority_queue<int> maxHeap;

        // minHeap to store the larger half
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : arr) {
            // Step 1: Insert in appropriate heap
            if (maxHeap.empty() || num <= maxHeap.top()) {
                maxHeap.push(num);
            } else {
                minHeap.push(num);
            }

            // Step 2: Balance the heaps
            if (maxHeap.size() > minHeap.size() + 1) {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            } else if (minHeap.size() > maxHeap.size()) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }

            // Step 3: Compute the median
            if (maxHeap.size() == minHeap.size()) {
                double median = (maxHeap.top() + minHeap.top()) / 2.0;
                result.push_back(median);
            } else {
                result.push_back((double)maxHeap.top());
            }
        }

        return result;
        
        
        
        
    }
};
