
#include <iostream>
#include"Container.h"

void fun(Container &cont1) {
    system("cls");
    int n, m, k;  long long int el;
    std::cout << "\t�������� ����� : \n";
    std::cout << "1. �������� �������.\n";
    std::cout << "2. �������� ���.\n";
    std::cout << "3. ������� �������.\n";
    std::cout << "4. ������� ��.\n";
    std::cin >> n;
    switch (n) {
    case 1:system("cls"); std::cout << "������� ���������� ����������� ��������� : ";
        std::cin >> m; for (; m != 0; m--) { std::cout << "������� ������� : \n"; std::cin >> el; cont1.AjouTete(el);}fun(cont1); break;
    case 2:system("cls"); cont1.MontreContainerTete(); system("pause");fun(cont1); break;
    case 3:system("cls"); std::cout << "������� ������ �������� : "; std::cin >> k; cont1.RetireElement(k);fun(cont1); break;
    case 4:system("cls"); cont1.RetireTous(); std::cout << "��� �������� �������."; system("pause"); fun(cont1); break;
    default:return;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    Container cont; Container cont1;
    //cont.AjouTete(3444);
    //cont.AjouTete(7543);
    //cont.AjouTete(9823645);
    //cont.AjouTete(7834281);
    //cont.AjouQue(8748523);
    //cont.AjouQue(683668);
    //cont.AjouQue(453676);
    //cont.AjouQue(34657);
    //cont.MontreContainerTete();
    //std::cout << "\n\n";
    //cont.RetireElement(2);
    //cont.MontreContainerTete();
    fun(cont1);


    return 0;
}