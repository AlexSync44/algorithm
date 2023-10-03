#include "Node.h"
/*
Создаём новый узел.
Если список пустой, то возвращаем указатель на новый узел.
Если в списке есть узлы, в цикле идём по списку, пока не найдем последний элемент.
Меняем указатель последнего элемента на указатель на новый узел.
*/
void List::push_back(int data)
{
	// создание нового узла
	Node* node = new Node(data);
	// если список пустой возвращаем узел
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}
	// в цикле ищем последний элемент списка
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}
	// обновление указателя next последнего узла на указатель на новый узел
	last->m_next = node;
	return;
}

/*
Создаём новый узел.
Меняем указатель m_next нового узла на начало списка.
Обновляем значение начала списка новым узлом.
*/
void List::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

/*
Создать новый узел.
Проверить крайние случаи, если список пустой или если позиция равна нулю.
Переместиться по списку до узла до позиции вставки.
Изменить указатель текущего узла на следующий узел новым узлом.
Изменить указатель нового узла на следующий узел на узел, следующий за текущим узлом.
*/
void List::insert(int pos, int data)
{
	// создаем новый узел 
	Node* newNode = new Node(data);

	if (m_head == nullptr)
	{
		// если список пуст, новый узел и будет началом списка
		m_head = newNode;
		return;
	}

	if (pos == 0)
	{
		// крайний случай - вставка  в начало списка
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos = 0;

	Node* current = m_head;
	// в цикле идем по списку, пока список не кончится, или пока не дойдем до позиции
	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}
	// меняем указатель на следующий узел на указатель на новый узел
	Node* next = current->m_next;
	current->m_next = newNode;
	// связываем список обратно, меняем указатель на узел, следующий после нового узла,
	// на указатель на узел, следующий за current
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
	// крайний случай удаления начала списка
	if (temp && temp->m_data == data)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}
	// идем по списку, пока не найдем узел со значением данных, равных ключу
	while (temp && temp->m_data != data)
	{
		prev = temp;
		temp = temp->m_next;
	}
	// если узел не найден, возвращаем
	if (!temp)
		return;
	// меняем указатель следующего узла для предыдущего узла на узел, следующий
	// за удаляемым узлом, и удаляем узел с данными
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