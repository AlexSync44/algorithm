#pragma once
#include <iostream>

// односвязный список
class Node
{
public:
	Node(int data) : m_data(data), m_next(nullptr) {}

	int m_data;
	Node* m_next;
};

class List
{
public:
	List() : m_head(nullptr) {}
	void push_back(int data);
	void push_front(int data);
	void insert(int pos, int data);
	void show();
	void deleteNode(int data);
	void deleteNodePos(int position);
	void clear();

private:
	Node* m_head;
};

