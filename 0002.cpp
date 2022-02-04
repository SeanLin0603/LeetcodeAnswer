#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	
	ListNode* result;

	// get length
	int len1 = 1;
	int len2 = 1;

	ListNode* node1 = l1;
	while (node1->next != nullptr)
	{
		len1++;
		node1 = node1->next;
	}
	ListNode* node2 = l2;
	while (node2->next != nullptr)
	{
		len2++;
		node2 = node2->next;
	}

	int resultLen = 0;
	if (len1 > len2)
	{
		resultLen = len1;
	}
	else
	{
		resultLen = len2;
	}

	// add
	ListNode* nodeArr = (ListNode*)malloc(resultLen * sizeof(ListNode));
	for (int i = 0; i < resultLen; i++)
	{
		nodeArr[i].val = l1->val + l2->val;
		if (i > 0)
		{
			nodeArr[i - 1].next = &nodeArr[i];
		}
		if (i == resultLen - 1)
		{
			nodeArr[i].next = nullptr;
		}

		l1 = l1->next;
		l2 = l2->next;
	}

	// carry
	for (int i = 0; i < resultLen; i++)
	{
		if (nodeArr[i].val >= 10)
		{
			nodeArr[i].val -= 10;
			nodeArr[i + 1].val++;
		}
	}

	result = nodeArr;
	free(nodeArr);

	return result;
}

int main()
{
	ListNode* l1;
	ListNode* l2;

	ListNode tmp0, tmp1, tmp2;
	tmp0.val = 2;
	tmp0.next = &tmp1;
	tmp1.val = 4;
	tmp1.next = &tmp2;
	tmp2.val = 3;
	tmp2.next = nullptr;
	l1 = &tmp0;

	ListNode tmp3, tmp4, tmp5;
	tmp3.val = 5;
	tmp3.next = &tmp4;
	tmp4.val = 6;
	tmp4.next = &tmp5;
	tmp5.val = 4;
	tmp5.next = nullptr;
	l2 = &tmp3;


	ListNode* result = addTwoNumbers(l1, l2);
	cout << "Hello World!\n";
}
