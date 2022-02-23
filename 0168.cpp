class Solution {
public:
    
    string convertToTitle(int columnNumber) {
        
        string title;
        int input = columnNumber;

        while (input > 0)
        {
            int r = input % 26;

            if (r == 0)
            {
                r = 26;
                input--;
            }

            input /= 26;

            title.push_back('A' - 1 + r);
        }

        // reverse
        int head = 0;
        int tail = title.size() - 1;
        while (tail > head)
        {
            swap(title[head], title[tail]);
            head++;
            tail--;
        }
        //cout << title << endl;

        return title;
    }
};