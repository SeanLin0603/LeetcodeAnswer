#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
	int val;
	ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* result = NULL;
	struct ListNode* lastNode = NULL;

	int carry = 0;

	while (l1 != NULL || l2 != NULL || carry)
	{
		//ListNode* node = new ListNode(0);
		struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
		node->val = 0;
		node->next = NULL;

		// build linked list
		if (lastNode == NULL)
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
		if (l1 != NULL)
		{
			sum += l1->val;
		}
		if (l2 != NULL)
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
		if (l1 != NULL)
		{
			l1 = l1->next;
		}
		if (l2 != NULL)
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
