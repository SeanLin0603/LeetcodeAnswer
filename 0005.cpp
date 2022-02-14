#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s)
{
	string longest;
	string subString;

	int stringSize = s.size();

	int head = 0;
	int tail = stringSize - 1;

	while (tail > head)
	{
		if (s[tail] != s[head])
		{
			tail--;
			continue;
		}


		// s[tail] == s[head]
		int forwardIdx = head;
		int backwardIdx = tail;
		bool isPalindrome = true;
		while (backwardIdx > forwardIdx)
		{
			if (s[backwardIdx] != s[forwardIdx])
			{
				isPalindrome = false;
				break;
			}
			forwardIdx++;
			backwardIdx--;
		}

		head++;
	}





	//for (int length = stringSize; length > 0; length--)
	//{
	//	// sliding window
	//	int times = stringSize - length;
	//	int startIdx = 0;
	//	for (int t = 0; t <= times; t++)
	//	{
	//		for (int i = startIdx; i < startIdx + length; i++)
	//		{
	//			subString.push_back(s[i]);
	//		}
	//		startIdx++;
	//		//cout << subString << endl;

	//		// check substring is Palindrome
	//		int forwardIdx = 0;
	//		int backwardIdx = subString.size() - 1;

	//		bool isPalindrome = true;
	//		while (backwardIdx > forwardIdx)
	//		{
	//			if (subString[forwardIdx] != subString[backwardIdx])
	//			{
	//				isPalindrome = false;
	//				break;
	//			}

	//			forwardIdx++;
	//			backwardIdx--;
	//		}

	//		if (isPalindrome && subString.size() > longest.size())
	//		{
	//			longest = subString;
	//		}
	//		subString.clear();
	//	}
	//}

	return longest;
}

int main()
{
	string input = "babad";
	//string input = "cbbd";
	//string input = "azwdzwmwcqzgcobeeiphemqbjtxzwkhiqpbrprocbppbxrnsxnwgikiaqutwpftbiinlnpyqstkiqzbggcsdzzjbrkfmhgtnbujzszxsycmvipjtktpebaafycngqasbbhxaeawwmkjcziybxowkaibqnndcjbsoehtamhspnidjylyisiaewmypfyiqtwlmejkpzlieolfdjnxntonnzfgcqlcfpoxcwqctalwrgwhvqvtrpwemxhirpgizjffqgntsmvzldpjfijdncexbwtxnmbnoykxshkqbounzrewkpqjxocvaufnhunsmsazgibxedtopnccriwcfzeomsrrangufkjfzipkmwfbmkarnyyrgdsooosgqlkzvorrrsaveuoxjeajvbdpgxlcrtqomliphnlehgrzgwujogxteyulphhuhwyoyvcxqatfkboahfqhjgujcaapoyqtsdqfwnijlkknuralezqmcryvkankszmzpgqutojoyzsnyfwsyeqqzrlhzbc";

	cout << longestPalindrome(input);
}