class Solution {
public:
    int romanToInt(string s) {
        
        int total = 0;
        int i = 0;

        while(s[i]=='M')
        {
            i++;
            total+=1000;
        }
        
        while(s[i]=='D')
        {
            i++;
            total+=500;
        }
        
        while(s[i]=='C')
        {
            i++;
            
            if(s[i]=='M')
            {
                i++;
                total+=900;
            }
            else if(s[i]=='D')
            {
                i++;
                total+=400;
            }
            else
            {
                total+=100;
            }
            
        }
        
        while(s[i]=='L')
        {
            i++;
            total+=50;
        }
        
        while(s[i]=='X')
        {
            i++;
            
            if(s[i]=='C')
            {
                i++;
                total+=90;
            }
            else if(s[i]=='L')
            {
                i++;
                total+=40;
            }
            else
            {
                total+=10;
            }
            
        }
        
        while(s[i]=='V')
        {
            i++;
            total+=5;
        }
        
        while(s[i]=='I')
        {
            i++;
            
            if(s[i]=='X')
            {
                i++;
                total+=9;
            }
            else if(s[i]=='V')
            {
                i++;
                total+=4;
            }
            else
            {
                total+=1;
            }
        }
        
        return total;
    }
};