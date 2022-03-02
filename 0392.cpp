class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        bool result = true;
        
        int mainIndex=0;
        int subIndex=0;
        
        for(int i=0;i<t.size();i++)
        {
            if(s[subIndex] == t[i])
            {
                //cout << t[i] << " " << subIndex << endl;
                subIndex++;
            }
        }
        
        cout << subIndex;
        if(subIndex==s.size())
        {
            result = true;
        }
        else
        {
            result = false;
        }
        
        return result;
    }
};