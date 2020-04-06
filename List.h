#include<iostream>
using namespace std;
template<typename T>
class List
{
private:
	class Node {
	public:
		Node(T data = T(), Node* Next = NULL) {
			this->data = data;
			this->Next = Next;
		}
		Node* Next;
		T data;
	};

	Node* head;
	Node* tail;
	int Size;
public:
	void push_back(T obj);
	void push_front(T obj); 
	void pop_back();
	void pop_front(); 
	void insert(T obj, size_t k); 
	T at(size_t k);
	void remove(int k);
	size_t get_size(); 
	void print_to_console(); 
	void clear(); 
	void set(size_t k, T obj);  
	bool isEmpty();
	List(Node* head = NULL, Node* tail = NULL, int Size = 0) :head(head), tail(tail), Size(Size) {}
	~List() {
		if (head != NULL) {
			this->clear();
		}
	};
};