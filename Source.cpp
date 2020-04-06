#include<iostream>

#include"map.cpp"
int main() {

	Map<int, int>* tree = new Map<int, int>();

	tree->insert(1, -2);
	tree->insert(3, -3);
	tree->insert(2, -4);
	tree->insert(5, -5);
	tree->insert(6, -5);
	tree->insert(8, -6);
	tree->insert(9, -7);
	tree->insert(11, -5);
	tree->insert(4, -6);
	tree->insert(19, -7);

	tree->Delete(8);
	tree->Delete(4);

	tree->treeprint();

	system("pause");
	return 0;
}