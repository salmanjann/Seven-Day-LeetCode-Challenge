class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string zigzag = "";
        for (int i = 0; i < numRows; i++) {
            if (i < s.length())
                zigzag += s[i];
            // first row
            if (i == 0) {
                int index = i + ((numRows - (i + 1)) * 2 - 1) + 1;
                while (index < s.length()) {
                    zigzag += s[index];
                    index = index + ((numRows - (i + 1)) * 2 - 1) + 1;
                }
            }
            // last row
            else if (i == numRows - 1) {
                int index = i + ((numRows - 1) * 2 - 1) + 1;
                while (index < s.length()) {
                    zigzag += s[index];
                    index = index + ((numRows - 1) * 2 - 1) + 1;
                }
            }
            // middle rows
            else {
                int index = i + ((numRows - (i + 1)) * 2 - 1) + 1;
                while (index < s.length()) {
                    zigzag += s[index];
                    index = index + (i * 2 - 1) + 1;
                    if (index < s.length())
                        zigzag += s[index];
                    index = index + ((numRows - (i + 1)) * 2 - 1) + 1;
                }
            }
        }
        return zigzag;
    }
};