#include<iostream>
#include"Node.h"

Node::Node(long long int numero):_numero(numero),suiv(nullptr),prec(nullptr) {}

Node::~Node() {
	std::cout << "������� �����.\n";
}
long long int Node::GetNumero() {
	return _numero;
}
