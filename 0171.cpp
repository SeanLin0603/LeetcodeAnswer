class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int value = 0, p = 0;
        
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            int c = columnTitle[i] - 64;
            
            value += c * pow(26, p++);
            // cout << value << endl;            
        }
        
        return value;
    }
};