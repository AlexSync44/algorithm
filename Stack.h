#pragma once
#include <iostream>

#define MAX 1000

class Stack
{
	int m_items[MAX];
	Stack() : m_top(-1) {}
	bool push(int x);
	int pop();
	int peek();
	bool isFull();
	bool isEmpty();

private:
	int m_top;
};

