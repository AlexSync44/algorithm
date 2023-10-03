#include "Node.h"
/*
������ ����� ����.
���� ������ ������, �� ���������� ��������� �� ����� ����.
���� � ������ ���� ����, � ����� ��� �� ������, ���� �� ������ ��������� �������.
������ ��������� ���������� �������� �� ��������� �� ����� ����.
*/
void List::push_back(int data)
{
	// �������� ������ ����
	Node* node = new Node(data);
	// ���� ������ ������ ���������� ����
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}
	// � ����� ���� ��������� ������� ������
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}
	// ���������� ��������� next ���������� ���� �� ��������� �� ����� ����
	last->m_next = node;
	return;
}

/*
������ ����� ����.
������ ��������� m_next ������ ���� �� ������ ������.
��������� �������� ������ ������ ����� �����.
*/
void List::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

/*
������� ����� ����.
��������� ������� ������, ���� ������ ������ ��� ���� ������� ����� ����.
������������� �� ������ �� ���� �� ������� �������.
�������� ��������� �������� ���� �� ��������� ���� ����� �����.
�������� ��������� ������ ���� �� ��������� ���� �� ����, ��������� �� ������� �����.
*/
void List::insert(int pos, int data)
{
	// ������� ����� ���� 
	Node* newNode = new Node(data);

	if (m_head == nullptr)
	{
		// ���� ������ ����, ����� ���� � ����� ������� ������
		m_head = newNode;
		return;
	}

	if (pos == 0)
	{
		// ������� ������ - �������  � ������ ������
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos = 0;

	Node* current = m_head;
	// � ����� ���� �� ������, ���� ������ �� ��������, ��� ���� �� ������ �� �������
	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}
	// ������ ��������� �� ��������� ���� �� ��������� �� ����� ����
	Node* next = current->m_next;
	current->m_next = newNode;
	// ��������� ������ �������, ������ ��������� �� ����, ��������� ����� ������ ����,
	// �� ��������� �� ����, ��������� �� current
	newNode->m_next = next;
}

void List::show()
{
	Node* current = m_head;
	while (current != nullptr)
	{
		std::cout << current->m_data << std::endl;
		current = current->m_next;
	}
}

void List::deleteNode(int data)
{
	Node* temp = m_head;
	Node* prev = nullptr;
	// ������� ������ �������� ������ ������
	if (temp && temp->m_data == data)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}
	// ���� �� ������, ���� �� ������ ���� �� ��������� ������, ������ �����
	while (temp && temp->m_data != data)
	{
		prev = temp;
		temp = temp->m_next;
	}
	// ���� ���� �� ������, ����������
	if (!temp)
		return;
	// ������ ��������� ���������� ���� ��� ����������� ���� �� ����, ���������
	// �� ��������� �����, � ������� ���� � �������
	prev->m_next = temp->m_next;
	delete temp;
}

void List::deleteNodePos(int position)
{
	if (m_head == nullptr)
		return;

	if (position == 0)
	{
		Node* temp = m_head;
		m_head = m_head->m_next;
		delete temp;
		return;
	}

	Node* prev = nullptr;
	Node* current = m_head;
	int currentPosition = 0;

	while (current != nullptr && currentPosition < position)
	{
		prev = current;
		current = current->m_next;
		currentPosition++;
	}

	if (current == nullptr)
		return;

	prev->m_next = current->m_next;
	delete current;
}

void List::clear()
{
	while (m_head != nullptr)
	{
		Node* temp = m_head;
		m_head = m_head->m_next;
		delete temp;
	}
}