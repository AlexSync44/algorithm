#include "Stack.h"

bool Stack::push(int x)
{
	if (isFull())
	{
		std::cout << "Stack Overflow";
		return false;
	}
	else
	{
		++m_top;
		m_items[m_top] = x;
		return true;
	}
}

int Stack::pop()
{
	if (isEmpty())
	{
		std::cout << "Stack Underflow";
		return 0;
	}
	else
	{
		int x = m_items[m_top];
		--m_top;
		return x;
	}
}

int Stack::peek()
{
	if (isEmpty())
	{
		std::cout << "Stack Underflow";
	}
	else
	{
		int x = m_items[m_top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return m_top < 0;
}

bool Stack::isFull()
{
	return m_top >= (MAX - 1);
}