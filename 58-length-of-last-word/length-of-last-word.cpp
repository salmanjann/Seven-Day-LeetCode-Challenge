class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int prevCount = count;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' ' && count > 0){
                
                    prevCount = count;
                count = 0;
            }
            else if(s[i] != ' '){
                count++;
            }
        }
        if(count == 0)
            return prevCount;
        return count;
    }
};