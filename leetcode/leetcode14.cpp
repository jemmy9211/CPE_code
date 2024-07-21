class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            for(int j=ans.length()-1;j>=0;j--){
                if(ans[j]!=strs[i][j]){
                    ans.resize(j);
                }
            }
        }
        return ans;
    }
};
