#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) 
{
	string result;
	string tmpStr;

	int stringSize = s.size();

	for (int length = stringSize; length > 0; length--)
	{
		// sliding window
		int times = stringSize - length;
		int startIdx = 0;
		for (int t = 0; t <= times; t++)
		{
			for (int i = startIdx; i < startIdx + length; i++)
			{
				tmpStr.push_back(s[i]);
			}
			startIdx++;
			cout << tmpStr << endl;
	
			
			
			
			
			tmpStr.clear();
		}
	}



	return result;
}

int main()
{
	string input = "babad";
	cout << longestPalindrome(input);
}