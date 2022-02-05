#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
	string substring = "";
	string longest = "";

	for (int i = 0; i < s.size(); i++)
	{
		bool exist = false;
		char c = s[i];

		// check if this char already exists
		for (int j = 0; j < substring.size(); j++)
		{
			if (substring[j] == c)
			{
				exist = true;
				break;
			}
		}

		if (exist)
		{
			// keep delete the duplicated character
			while (exist)
			{
				substring.erase(substring.begin());
				exist = false;
				for (int j = 0; j < substring.size(); j++)
				{
					if (substring[j] == c)
					{
						exist = true;
						break;
					}
				}
			}
		}
		
		substring.push_back(c);
		if (substring.size() > longest.size())
		{
			longest = substring;
		}
	}

	return longest.size();
}

int main()
{
	//string input = "abcabcbb";
	//string input = "bbbbb";
	//string input = "pwwkew";
	//string input = " ";
	string input = "dvdf";

	cout << lengthOfLongestSubstring(input) << endl;
}
