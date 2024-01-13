// Leetcode 13 Jan 2024

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        int ans=0;
        for(auto it:mp1){
            if(mp1[it.first]>mp2[it.first])
            ans+=mp1[it.first]-mp2[it.first];
        }
        return ans;
    }
};
