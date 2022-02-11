#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) 
{
	string str = to_string(x);

	int forwardIdx = 0;
	int backwardIdx = str.size() - 1;

	while (backwardIdx > forwardIdx)
	{
		if (str[forwardIdx] != str[backwardIdx])
		{
			return false;
		}

		forwardIdx++;
		backwardIdx--;
	}

	return true;
}

int main()
{
	int input = -121;
	cout << isPalindrome(input);
}