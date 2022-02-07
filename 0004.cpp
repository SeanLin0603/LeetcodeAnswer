#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	double median = 0;
	vector<int> mergedArray;

	// merge
	for (int i : nums1)
	{
		mergedArray.push_back(i);
	}
	for (int i : nums2)
	{
		mergedArray.push_back(i);
	}
	sort(mergedArray.begin(), mergedArray.end());

	// find median
	int length = mergedArray.size();
	if (length % 2 == 1)
	{
		median = mergedArray[length / 2];
	}
	else
	{
		int left = mergedArray[length / 2 - 1];
		int right = mergedArray[length / 2];

		median = (double)(left + right) / 2;
	}
	return median;
}

int main()
{
	vector<int> num1 = { 1, 2 };
	vector<int> num2 = { 3, 4 };

	double median = findMedianSortedArrays(num1, num2);
	cout << median;
}