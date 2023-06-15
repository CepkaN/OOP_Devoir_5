#pragma once

class Node {
private:
	long long int _numero;
public:
	Node(long long int numero);
	~Node();
	Node* suiv;
	Node* prec;
	long long int GetNumero();
};