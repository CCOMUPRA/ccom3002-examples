#include <iostream>

using namespace std;

template <typename T>
struct node
{
	T info;
	node<T> *link;
};

template <typename T>
class LinkedListIterator
{
public:
	LinkedListIterator()
	{
		current = nullptr;
	}
	// Constructor
	// Postcondition: current = nullptr;

	LinkedListIterator(node<T> *ptr)
	{
		current = ptr;
	}
	// Constructor
	// Postcondition: current = nullptr;

	T operator*()
	{
		return current->info;
	}
	// Function to overload the dereferencing operator *.
	// Postcondition: Returns the info contained in the node.

	LinkedListIterator<T> operator++()
	{
		current = current->link;
		return *this;
	}
	// Overload the pre-increment operator.
	// Postcondition: The iterator is advanced to the next node.

	bool operator==(const LinkedListIterator<T> &right) const
	{
		return current == right.current;
	}
	// Overload the equality operator.
	// Postcondition: Returns true if this iterator is equal to
	// the iterator specified by right, otherwise it returns
	// false.

	bool operator!=(const LinkedListIterator<T> &right) const
	{
		return current != right.current;
	}
	// Overload the not equal to operator.
	// Postcondition: Returns true if this iterator is not equal
	// to the iterator specified by right, otherwise it returns
	// false.

private:
	node<T> *current; // Pointer to point to the current
					  // node in the linked list
};

template <typename T>
class LinkedList
{
private:
	node<T> *first;
	node<T> *last;
	int count;

public:
	LinkedList()
	{
		first = nullptr;
		last = nullptr;
		count = 0;
	}

	~LinkedList()
	{
		destroyList();
	}

	// Inicializar la lista.
	void initializeList(int quantity);
	// Insertar al final.
	void insertLast(T value);
	// Eliminar elemento
	void deleteNode(T value);
	// Imprimir la lista
	void print();
	// Insertar al principio.
	void insertFirst(T value);
	// Buscar el count.
	int getCount();
	// Verificar si está vacía.
	bool isEmptyList();
	// Destruir la lista.
	void destroyList();
	// Buscar el primero.
	T front();
	// Buscar el último.
	T back();
	// Begin
	LinkedListIterator<T> begin();
	// End
	LinkedListIterator<T> end();
	// Copy constructor
	LinkedList(const LinkedList<T> &otherList)
	{
		first = nullptr;
		copyList(otherList);
	}
	// Copy the list
	void copyList(const LinkedList<T> &otherList);
};

template <typename T>
void LinkedList<T>::initializeList(int quantity)
{
	node<T> *newNode = nullptr;
	// Construir lista encadenada
	for (int i = 0; i < quantity; i++)
	{
		T x;
		cin >> x;

		// Paso 1: Crear nodo
		newNode = new node<T>;
		newNode->info = x;
		newNode->link = nullptr;

		// Paso 2.1: Verificar si lista está vacía.
		if (first == nullptr)
		{
			first = newNode;
			last = newNode;
			count++;
			// Paso 2.2: Si no está vacía, añadir al final.
		}
		else
		{
			last->link = newNode;
			last = newNode;
			count++;
		}
	}
}

template <typename T>
void LinkedList<T>::print()
{
	// Imprimir la lista encadenada.
	node<T> *current = first;
	while (current != nullptr)
	{
		cout << current->info << " ";
		current = current->link;
	}
	cout << endl;
}

template <typename T>
void LinkedList<T>::insertFirst(T value)
{

	// Crear nuevo nodo
	node<T> *newNode = new node<T>;
	newNode->info = value;
	newNode->link = first;
	first = newNode;
	count++;
}

template <typename T>
void LinkedList<T>::insertLast(T value)
{
	// Insert last

	// Crear nuevo nodo
	node<T> *newNode = new node<T>;
	newNode->info = value;
	newNode->link = nullptr;

	last->link = newNode;
	last = newNode;
	count++;
}

template <typename T>
void LinkedList<T>::deleteNode(T value)
{
	try
	{
		// Special case: empty list
		if (first == nullptr)
			throw "The list is empty.";

		// Special case: deleting the first node
		if (first->info == value)
		{
			node<T> *temp = first;
			first = first->link;
			delete temp;
			if (first == nullptr)
				last = nullptr;
			count--;
			return;
		}

		// Find the node to delete
		node<T> *current = first;
		while (current->link != nullptr && current->link->info != value)
			current = current->link;

		// If node found, delete it
		if (current->link != nullptr)
		{
			node<T> *temp = current->link;
			current->link = current->link->link;
			delete temp;
			// If the node to delete is the last node
			if (current->link == nullptr)
				last = current;
			count--;
		}
	}
	catch (const string msg)
	{
		cerr << msg << endl;
	}
}

template <typename T>
int LinkedList<T>::getCount()
{
	return count;
}

template <typename T>
bool LinkedList<T>::isEmptyList()
{
	return first == nullptr;
}

template <typename T>
void LinkedList<T>::destroyList()
{
	node<T> *temp;
	while (first != nullptr)
	{
		temp = first;
		first = first->link;
		delete temp;
	}
	last = nullptr;
	count = 0;
}

template <typename T>
T LinkedList<T>::front()
{
	assert(first != nullptr);
	return first->info;
}

template <typename T>
T LinkedList<T>::back()
{
	assert(last != nullptr);
	return last->info;
}

template <typename T>
LinkedListIterator<T> LinkedList<T>::begin()
{
	LinkedListIterator<T> temp(first);
	return temp;
}

template <typename T>
LinkedListIterator<T> LinkedList<T>::end()
{
	LinkedListIterator<T> temp(nullptr);
	return temp;
}
