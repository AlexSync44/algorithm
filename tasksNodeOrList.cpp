#include "tasksNodeOrList.h"

ListNode* deleteDuplicates(ListNode* head)
{
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}

	ListNode* res = head;
	ListNode* tmp;

	while (head != nullptr && head->next != nullptr)
	{
		if (head->val == head->next->val)
		{
			tmp = head->next;
			head->next = tmp->next;
			delete tmp;
		}
		else
		{
			head = head->next;
		}
	}

	return res;
}

void test_l1()
{
	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(1);
	ListNode* node3 = new ListNode(2);
	ListNode* node4 = new ListNode(3);
	ListNode* node5 = new ListNode(3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	std::cout << "Original list: ";

	ListNode* result = deleteDuplicates(node1);

	std::cout << "List after removing duplicates: ";

	// Clean up memory
	while (result != nullptr)
	{
		ListNode* tmp = result;
		result = result->next;
		delete tmp;
	}
}

// поиск цикла в списке
bool hasCycle(ListNode* head)
{
	if (head == nullptr)
	{
		return false;
	}

	std::set<ListNode*> nodeSet;
	ListNode* node = head;

	while (node != nullptr)
	{
		if (nodeSet.find(node) != nodeSet.end())
		{
			return true;
		}

		nodeSet.insert(node);
		node = node->next;
	}

	return false;
}

// алгоритм Флойда зайца и черепахи
bool hasCycle_fast(ListNode* head)
{
	if (head == nullptr && head->next == nullptr)
	{
		return false;
	}

	ListNode* slow = head;
	ListNode* fast = head;

	while (slow != fast)
	{
		if (fast == nullptr && fast->next == nullptr)
		{
			return false;
		}

		slow->next;
		fast->next->next;
	}

	return true;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* resultList = l1;

	std::vector<int> vec1, vec2;
	while (l1 != nullptr && l2 != nullptr)
	{
		vec1.push_back(l1->val);
		vec2.push_back(l2->val);

		l1 = l1->next;
		l2 = l2->next;
	}

	for (size_t i = 0; i < vec1.size(); i++)
	{
		resultList->val = vec1[i] + vec2[i];
		resultList = resultList->next;
	}

	return resultList;
}