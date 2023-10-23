#include <iostream>
#include "keeper.h"
#include "books.h"
#include "novel.h"
#include "poet.h"
#include "fantastic.h"
#include "vybor.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Keeper <Novel> novel;
	Keeper <Poet> poet;
	Keeper <Fantastic> fantastic;
	int button;
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "����: " << endl << endl;
		cout << "1 - �������� ���������" << endl;
		cout << "2 - ����" << endl;
		cout << "3 - �������� �������" << endl;
		cout << "0 - ���������� ������ ���������" << endl << endl;
		cout << "�������� �����: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			vybor_deystviya(novel, "novel.txt");
			break;
		case 2:
			vybor_deystviya(poet, "poet.txt");
			break;
		case 3:
			vybor_deystviya(fantastic, "fantastic.txt");
			break;
		case 0:
			flag = false;
			cout << "\n���������� ������" << endl;
			break;
		default:
			cout << endl << "������� ������ �����!" << endl
				<< endl;
			system("pause");
			break;
		}
	}
	return 0;
}