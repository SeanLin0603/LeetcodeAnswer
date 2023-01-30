class Solution {
public:
    
    int toInt(string& s)
    {
        bool negative = false;
        long value = 0;

        if(s[0] == '-')
        { 
            negative = true;
            s.erase(s.begin());
        }

		for (int i = 0; i < s.size(); i++)
		{
            if (negative)
			{
				if ((value * 10 + s[i] - '0')*-1 <= INT_MIN)
					return INT_MIN;
			}
			else if (value * 10 + s[i] - '0' >= INT_MAX)
				return INT_MAX;

			value *= 10;
			value += s[i] - '0';
		}
        
        if(negative)
        {
            value *= -1;
        }
        
        return value;
    }
    
    
    int myAtoi(string s) {
        string parsing = "";
        bool digitOnly = false;
        
        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            
            if(c == ' ')
            {
                if(digitOnly)
                    break;
                else
                    continue;
            }
            else if(c == '.')
            {
                break;
            }
            else if(c == '+')
            {
                if(digitOnly)
                    break;
                else
                    digitOnly = true;
                    continue;
            }
            else if(c == '-')
            {
                if(digitOnly)
                    break;
                else
                    digitOnly = true;
                    parsing.push_back(c);
            }
            else if('0' <= c && c <= '9')
            {
                parsing.push_back(c);
                digitOnly = true;
            }
            else
            {
                break;
            }
        }
        
        cout << parsing;
        if(parsing == "")
            return 0;
        else
            return toInt(parsing);
    }
};