#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode* result = nullptr;
	ListNode* lastNode = nullptr;
	int carry = 0;

	while (l1 != nullptr || l2 != nullptr || carry)
	{
		ListNode* node = new ListNode(0);

		// build linked list
		if (lastNode == nullptr)
		{
			lastNode = node;
			result = lastNode;
		}
		else
		{
			lastNode->next = node;
			lastNode = node;
		}

		// if node exists, add
		int sum = carry;
		if (l1 != nullptr)
		{
			sum += l1->val;
		}
		if (l2 != nullptr)
		{
			sum += l2->val;
		}

		// carry
		carry = 0;
		if (sum >= 10)
		{
			sum %= 10;
			carry = 1;
		}
		
		node->val = sum;

		// shift to next node
		if (l1 != nullptr)
		{
			l1 = l1->next;
		}
		if (l2 != nullptr)
		{
			l2 = l2->next;
		}
	}
	
	return result;
}

int main()
{
	ListNode* l1;
	ListNode* l2;

	/*ListNode tmp0, tmp1, tmp2;
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
	l2 = &tmp3;*/

	/*ListNode tmp0;
	tmp0.val = 0;
	tmp0.next = nullptr;
	l1 = &tmp0;
	ListNode tmp1;
	tmp1.val = 0;
	tmp1.next = nullptr;
	l2 = &tmp1;*/

	ListNode tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
	tmp0.val = tmp1.val = tmp2.val = tmp3.val = tmp4.val = tmp5.val = tmp6.val = 9;
	tmp0.next = &tmp1;
	tmp1.next = &tmp2;
	tmp2.next = &tmp3;
	tmp3.next = &tmp4;
	tmp4.next = &tmp5;
	tmp5.next = &tmp6;
	tmp6.next = nullptr;
	l1 = &tmp0;
	ListNode tmp7, tmp8, tmp9, tmp10;
	tmp7.val = tmp8.val = tmp9.val = tmp10.val = 9;
	tmp7.next = &tmp8;
	tmp8.next = &tmp9;
	tmp9.next = &tmp10;
	tmp10.next = nullptr;
	l2 = &tmp7;

	ListNode* result = addTwoNumbers(l1, l2);
}
