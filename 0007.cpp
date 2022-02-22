class Solution {
public:
    void swap(char &a, char &b)
    {
        char tmp = a;
        a = b;
        b = tmp;
    }
    
    int reverse(int x) 
    {
        string maxInt = "2147483647";
        string minInt = "-2147483648";
        
        string str = to_string(x);
        int head = (x<0)? 1:0;
        int tail = str.size()-1;
        
        while(tail>head)
        {
            swap(str[head], str[tail]);
            head++;
            tail--;
            
            // cout << str << endl;
        }
        
        if(str[0]=='-' && str.size()>=11)
        {
            // negative
            if(str.compare(minInt)>0)
            {
                return 0;
            }
        }
        else if(str.size()>=10)
        {
            // positive
            if(str.compare(maxInt)>0)
            {
                return 0;
            }
        }
        
        return stoi(str);
    }
};