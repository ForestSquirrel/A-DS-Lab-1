#define RED true
#define BLACK false

#include"List.cpp"
#include<string>
#include<Windows.h>

using namespace std;

template<typename T, typename T1>
class Map {
public:
	class Node
	{
	public:
		Node(bool color = RED, T key = T(), Node* parent = NULL, Node* left = NULL, Node* right = NULL, T1 value = T1()) :color(color), key(key), parent(parent), left(left), right(right), value(value) {}
		T key;
		T1 value;
		bool color;
		Node* parent;
		Node* left;
		Node* right;
	};

	~Map() {
		if (this->Top != NULL)
			this->clear();
		Top = NULL;
		delete Leaf;
		Leaf = NULL;
	}

	Map(Node* Top = NULL, Node* Leaf = new Node(0)) :Top(Top), Leaf(Leaf) {}

	void treeprint();

	void  insert(T key, T1 value);

	List<T>* get_keys();
	List<T1>* get_values();
	T1 find(T key);
	void clear();

	void Delete(T key);

private:
	Node* Top;
	Node* Leaf;

	void deleteNode(Node* current);
	void clear_tree(Node* tree);

	void ListKeyOrValue(int mode, List<T>* list);
	void KeyOrValue(Node* tree, List<T>* list, int mode);
	Node* minimum(Node* node);

	Node* maximum(Node* node);

	Node* grandparent(Node* cur);

	Node* uncle(Node* cur);

	Node* sibling(Node* cur);

	Node* find_key(T key);
	//all print function
	void Drawline(short x, short y, short old_y);
	void go(short x, short y);
	void Color(int front, int back);
	int numberDigits(int a);
	void ConsoleOut(Node *tree, short &Y, short &Xright);

	//balance tree
	void BalanceTree(Node* node);


	//Rotation
	void left_rotate(Node* node);
	void right_rotate(Node* node);
};