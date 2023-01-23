#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findJudge(int n, vector<vector<int>>& trust) {
		vector<int> input(n + 1);
		vector<int> output(n + 1);
		for (int i = 0; i < trust.size(); i++)
		{
			int active = trust[i][0];
			int passive = trust[i][1];
			input[passive]++;
			output[active]++;
		}

		for (int i = 1; i <= n; i++)
		{
			if (input[i] == n - 1 && output[i] == 0)
				return i;
		}
		return -1;
	}
};


int main()
{
	vector<vector<int>> trust;
	vector<int> x1({ 1, 3 });
	vector<int> x2({ 2, 3 });
	vector<int> x3({ 3, 1 });
	trust.push_back(x1);
	trust.push_back(x2);
	trust.push_back(x3);

	Solution sol;
	int judge = sol.findJudge(3, trust);
	cout << judge << endl;
	return 0;
}