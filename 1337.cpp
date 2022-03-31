#include <iostream>
#include <vector>
using namespace std;

int findOne(vector<int>& arr)
{
	int size = arr.size();
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			if (i == 0)
			{
				return 0;
			}
			else
			{
				return i;
			}
		}
	}
	return size;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(vector<int>& index, vector<int>& reference)
{
	int size = reference.size();

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (reference[j] < reference[i])
			{
				swap(index[j], index[i]);
				swap(reference[j], reference[i]);
			}
			else if (reference[j] == reference[i] && index[i] > index[j])
			{
				swap(index[j], index[i]);
				swap(reference[j], reference[i]);
			}
		}
	}

}

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
	int rows = mat.size();
	vector<int> soldiers;
	vector<int> index;

	for (int i = 0; i < rows; i++)
	{
		vector<int> row = mat[i];

		int soldierNum = findOne(row);
		// cout << soldier << endl;
		soldiers.push_back(soldierNum);
		index.push_back(i);
	}

	bubbleSort(index, soldiers);
	vector<int> result(index.begin(), index.begin() + k);

	return result;
}

int main()
{
	vector<vector<int>> input;
	vector<int> tmp;
	tmp.push_back(1);
	tmp.push_back(1);
	tmp.push_back(1);
	tmp.push_back(1);
	tmp.push_back(1);
	input.push_back(tmp);

	tmp[0] = 1;
	tmp[1] = 0;
	tmp[2] = 0;
	tmp[3] = 0;
	tmp[4] = 0;
	input.push_back(tmp);

	tmp[0] = 1;
	tmp[1] = 1;
	tmp[2] = 0;
	tmp[3] = 0;
	tmp[4] = 0;
	input.push_back(tmp);

	tmp[0] = 1;
	tmp[1] = 1;
	tmp[2] = 1;
	tmp[3] = 1;
	tmp[4] = 0;
	input.push_back(tmp);

	tmp[0] = 1;
	tmp[1] = 1;
	tmp[2] = 1;
	tmp[3] = 1;
	tmp[4] = 1;
	input.push_back(tmp);
	
	kWeakestRows(input, 3);
}
