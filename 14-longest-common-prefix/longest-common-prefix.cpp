class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        if(strs.size() == 1)
            return strs[0];
        else if(strs.size() == 0)
            return "";
        for(int i=0;i<strs[0].length();i++){
            bool isEqual = true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i] != strs[j][i]){
                    isEqual = false;
                    break;
                }
            }
            if(isEqual)
                output += strs[0][i];
            else
                break;
        }

        return output;
    }
};