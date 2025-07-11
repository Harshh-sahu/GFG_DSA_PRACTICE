class Solution {
  public:
    bool findPairs(vector<int>& arr) {
        // code here.
        unordered_map<int,bool>map;
        
        for(int i =0; i < arr.size();i++){
            for(int j = i+1;j <arr.size();j++){
                int sum = arr[i]+arr[j];
                if(map.find(sum)!= map.end()){
                    return true;
                }else{
                    map[sum]= true;
                }
                
                
            }
        }
        return false;
         
    }
};