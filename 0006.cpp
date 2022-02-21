class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
        {
            return s;
        }
        
        string output;

        // calc the matrix size
        int charNum = 0;
        int cols = 0;
        while (charNum < s.size())
        {
            if (numRows != 1 && cols % (numRows - 1) == 0)
            {
                charNum += numRows;
            }
            else
            {
                charNum++;
            }
            cols++;
        }

        // init
        char** matrix = (char**)malloc(sizeof(char*)*numRows);

        for (int i = 0; i < numRows; i++)
        {
            matrix[i] = (char*)malloc(sizeof(char)*cols);
        }

        // fill in
        int stringIndex = 0;
        int freezeWeight = 0;
        for (int c = 0; c < cols; c++)
        {
            for (int r = 0; r < numRows; r++)
            {
                if (stringIndex >= s.size())
                {
                    matrix[r][c] = ' ';
                }
                else if (c % (numRows - 1) == 0)
                {
                    // '|' then fill char
                    freezeWeight = r + c;
                    matrix[r][c] = s[stringIndex++];
                }
                else
                {
                    if (r + c == freezeWeight)
                    {
                        // '/' then fill char
                        matrix[r][c] = s[stringIndex++];
                    }
                    else
                    {
                        // space
                        matrix[r][c] = ' ';
                    }
                }
            }
        }

        // output
        for (int r = 0; r < numRows; r++)
        {
            // cout << "r: " << r << endl;
            
            for (int c = 0; c < cols; c++)
            {
                // cout << "c: " << c << endl;

                if(output.size()>=s.size())
                {
                    break;
                }
                
                int ch = matrix[r][c];
                // cout << "ch: " << ch << endl << endl;

                if (ch != ' ')
                {
                    output.push_back(ch);
                }
            }
        }

        return output;
    }
};