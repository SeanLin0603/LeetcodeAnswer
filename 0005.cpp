#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s)
{
	string longest;

	int stringSize = s.size();

	int head = 0;
	int tail = stringSize - 1;

	// head loop
	while (tail > head)
	{
		// tail loop
		while (tail > head)
		{
			if (s[tail] != s[head])
			{
				tail--;
				continue;
			}
			else
			{
				// s[tail] as same as s[head]
				// check palindrome

				int forwardIdx = head;
				int backwardIdx = tail;
				bool isPalindrome = true;
				// keep determining the rest char is same
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

				if (isPalindrome)
				{
					// save string
					string candidate;

					for (int i = head; i <= tail; i++)
					{
						candidate.push_back(s[i]);
					}
					//cout << candidate << endl;
					
					// if the candidate is long enough, return directly
					if (candidate.size() > (s.size() / 2))
					{
						return candidate;
					}
					else if (candidate.size() >= longest.size())
					{
						longest = candidate;
					}
				}
			}

			tail--;
		}

		tail = stringSize - 1;
		head++;
	}

	// if input doesn't contain palindrome, then push the first char
	if (longest.size() == 0)
	{
		longest.push_back(s[0]);
	}

	return longest;
}

int main()
{
	//string input = "babad";
	//string input = "cbbd";
	//string input = "a";
	//string input = "ac";
	//string input = "azwdzwmwcqzgcobeeiphemqbjtxzwkhiqpbrprocbppbxrnsxnwgikiaqutwpftbiinlnpyqstkiqzbggcsdzzjbrkfmhgtnbujzszxsycmvipjtktpebaafycngqasbbhxaeawwmkjcziybxowkaibqnndcjbsoehtamhspnidjylyisiaewmypfyiqtwlmejkpzlieolfdjnxntonnzfgcqlcfpoxcwqctalwrgwhvqvtrpwemxhirpgizjffqgntsmvzldpjfijdncexbwtxnmbnoykxshkqbounzrewkpqjxocvaufnhunsmsazgibxedtopnccriwcfzeomsrrangufkjfzipkmwfbmkarnyyrgdsooosgqlkzvorrrsaveuoxjeajvbdpgxlcrtqomliphnlehgrzgwujogxteyulphhuhwyoyvcxqatfkboahfqhjgujcaapoyqtsdqfwnijlkknuralezqmcryvkankszmzpgqutojoyzsnyfwsyeqqzrlhzbc";
	string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	
	cout << longestPalindrome(input);
}