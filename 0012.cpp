class Solution {
public:
    string intToRoman(int num) {
        
        int input = num;
        string roman;
        
        while(input>=1000)
        {
            input-=1000;
            roman.push_back('M');
        }
        
        while(input>=900)
        {
            input-=900;
            roman.push_back('C');
            roman.push_back('M');
        }
        
        while(input>=500)
        {
            input-=500;
            roman.push_back('D');
        }
        
        while(input>=400)
        {
            input-=400;
            roman.push_back('C');
            roman.push_back('D');
        }
        
        while(input>=100)
        {
            input-=100;
            roman.push_back('C');
        }
        
        while(input>=90)
        {
            input-=90;
            roman.push_back('X');
            roman.push_back('C');
        }
        
        while(input>=50)
        {
            input-=50;
            roman.push_back('L');
        }
        
        while(input>=40)
        {
            input-=40;
            roman.push_back('X');
            roman.push_back('L');
        }
        
        while(input>=10)
        {
            input-=10;
            roman.push_back('X');
        }
        
        while(input>=9)
        {
            input-=9;
            roman.push_back('I');
            roman.push_back('X');
        }
        
        while(input>=5)
        {
            input-=5;
            roman.push_back('V');
        }
        
        while(input>=4)
        {
            input-=4;
            roman.push_back('I');
            roman.push_back('V');
        }
        
        while(input>=1)
        {
            input-=1;
            roman.push_back('I');
        }
        
        return roman;
        
    }
};