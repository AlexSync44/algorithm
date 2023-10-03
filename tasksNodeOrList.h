#pragma once
#include <iostream>
#include <vector>
#include <set>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode* deleteDuplicates(ListNode* head);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);