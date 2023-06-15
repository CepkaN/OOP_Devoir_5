#pragma once
#include"Node.h"

class Container {
private:
	Node* _tete;
	Node* _queue;
	int _taille;

	bool AjouGrand(Node*node);
public:
	Container();
	void AjouQue(int num);
	void AjouTete(int num);
	void MontreContainerTete();
	void MontreContainerQue();
	void RetireTous();
	void RetireElement(int index);

	Node* TrouverElement(int index);



};
