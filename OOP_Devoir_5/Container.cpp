#include"Container.h"
#include<iostream>

Container::Container():_tete(nullptr),_queue(nullptr),_taille(0) {}

bool Container::AjouGrand(Node* node) {
	if (_tete != nullptr)return false;
	_tete = node;
	_queue = node;
	_taille++;
	return true;
}
void Container::AjouTete(int num) {
	Node* nouvTet = new Node(num);
	if (AjouGrand(nouvTet))return;
	_taille++;
	_tete->suiv = nouvTet;
	nouvTet->prec = _tete;
	_tete = nouvTet;
}
void Container::AjouQue(int num) {
	Node* nouvQue = new Node(num);
	if (AjouGrand(nouvQue))return;
	_taille++;
	nouvQue->suiv = _queue;
	_queue->prec = nouvQue;
	_queue = nouvQue;
}
void Container::MontreContainerTete() {
	if (_taille == 0) {
		std::cout << "Нет элементов.\n";
		return;
	}
	for (Node* node = _tete; node != _queue->prec; node = node->prec)
		std::cout << node->GetNumero() << '\n';
}
void Container::MontreContainerQue() {
	if (_taille == 0) {
		std::cout << "Нет элементов.\n";
		return;
	}
	for (Node* node = _queue; node != _tete->suiv; node = node->suiv)
		std::cout << node->GetNumero() << '\n';
}
Node* Container::TrouverElement(int index) {
	Node* node = _tete;
	index--;
	while (index != 0) {
		node = node->prec;
		index--;
	}
	return node;
}
void Container::RetireElement(int index) {
	if (index > _taille || index <= 0)return;
	if (index == _taille) {
		Node* num = _queue;
		_queue = _queue->suiv;
		delete(num);
		_taille--; return;
	}
	if (index == 1) {
		Node* num = _tete;
		_tete = _tete->prec;
		delete(num);
		_taille--; return;
	}
	Node* suivNode = TrouverElement(index + 1);
	Node* precNode = TrouverElement(index - 1);
	Node* retireNode = TrouverElement(index);
	suivNode->suiv = precNode;
	precNode->prec = suivNode;
	delete(retireNode);
	_taille--;
}
void Container::RetireTous() {
	for (Node* node = _queue; node != nullptr;) {
		Node* tmp = node;
		node = node->suiv;
		delete(tmp);
		_taille--;
	}
}