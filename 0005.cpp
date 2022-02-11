#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s)
{
	string longest;
	string subString;

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
				subString.push_back(s[i]);
			}
			startIdx++;
			//cout << subString << endl;

			// check substring is Palindrome
			int forwardIdx = 0;
			int backwardIdx = subString.size() - 1;

			bool isPalindrome = true;
			while (backwardIdx > forwardIdx)
			{
				if (subString[forwardIdx] != subString[backwardIdx])
				{
					isPalindrome = false;
					break;
				}

				forwardIdx++;
				backwardIdx--;
			}

			if (isPalindrome && subString.size() > longest.size())
			{
				longest = subString;
			}
			subString.clear();
		}
	}

	return longest;
}

int main()
{
	string input = "babad";
	//string input = "cbbd";
	//string input = "azwdzwmwcqzgcobeeiphemqbjtxzwkhiqpbrprocbppbxrnsxnwgikiaqutwpftbiinlnpyqstkiqzbggcsdzzjbrkfmhgtnbujzszxsycmvipjtktpebaafycngqasbbhxaeawwmkjcziybxowkaibqnndcjbsoehtamhspnidjylyisiaewmypfyiqtwlmejkpzlieolfdjnxntonnzfgcqlcfpoxcwqctalwrgwhvqvtrpwemxhirpgizjffqgntsmvzldpjfijdncexbwtxnmbnoykxshkqbounzrewkpqjxocvaufnhunsmsazgibxedtopnccriwcfzeomsrrangufkjfzipkmwfbmkarnyyrgdsooosgqlkzvorrrsaveuoxjeajvbdpgxlcrtqomliphnlehgrzgwujogxteyulphhuhwyoyvcxqatfkboahfqhjgujcaapoyqtsdqfwnijlkknuralezqmcryvkankszmzpgqutojoyzsnyfwsyeqqzrlhzbc";

	cout << longestPalindrome(input);
}