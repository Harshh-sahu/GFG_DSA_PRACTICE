class Solution {
  public:
    // Function to check if b is a subset of a
 bool isSubset(vector<int> &a, vector<int> &b) {
    unordered_map<int, int> mp;

    // Build frequency map for array a
    for (int i = 0; i < a.size(); i++) {
        mp[a[i]]++;
    }

    // Check every element of b
    for (int i = 0; i < b.size(); i++) {
        if (mp.find(b[i]) == mp.end() || mp[b[i]] == 0) {
            return false;
        } else {
            mp[b[i]]--;
        }
    }

    return true;}
};