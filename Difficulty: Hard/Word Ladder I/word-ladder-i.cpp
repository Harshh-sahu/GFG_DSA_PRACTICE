//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string beginWord, string endWord, vector<string>& wordList) {
          queue<pair<string, int>> q;
        q.push({beginWord, 1});
        unordered_set<string> st(wordList.begin(), wordList.end());

        // If endWord is not in wordList, there is no valid transformation
        if (st.find(endWord) == st.end()) {
            return 0;
        }

        // Remove the beginWord from the set to avoid reprocessing
        st.erase(beginWord);

        while (!q.empty()) {
            pair<string, int> fNode = q.front();
            q.pop();
            string currString = fNode.first;
            int currCount = fNode.second;

            // Check if we have reached the endWord
            if (currString == endWord) {
                return currCount;
            }

            for (int index = 0; index < currString.length(); index++) {
                // Save the original character at the current index
                char originalCharacter = currString[index];
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    // Replace the character at the current index with 'a' to 'z'
                    currString[index] = ch;

                    // Check if the transformed word is in the wordList
                    if (st.find(currString) != st.end()) {
                        q.push({currString, currCount + 1});
                        st.erase(currString);
                    }
                }
                // Restore the original character at the current index
                currString[index] = originalCharacter;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends