class Solution {
public:
    vector<int> countBits(int n) {
     
        vector<int> ans;
        
        int curVal = 0;
        for(int i = 0;i<=n;i++)
        {
            int count = 0;
            curVal = i;
            while(curVal>0)
            {
                if(curVal%2==1)
                {
                    count++;
                }

                curVal/=2;
            }
            ans.push_back(count);
        }

        return ans;
    }
};