#include "poet.h"
#include <iostream>
#include <string>
using namespace std;

Poet::Poet() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� ��� ������ Poet" << endl << endl;
	fio = "";
	live = "";
	works = "";
}

Poet::Poet(const Poet& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� ��� ������ Poet" << endl << endl;
	*this = other;
}

Poet::~Poet() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� ��� ������ Poet" << endl << endl;
}

void Poet::p() {
	cin >> *this;
}

Poet& Poet::operator=(const Poet& other) {
	this->fio = other.fio;
	this->live = other.live;
	this->works = other.works;
	return *this;
}

ofstream& operator<<(ofstream& fout, Poet& obj) {
	fout << obj.fio << " " << endl;
	fout << obj.live << " " << endl;
	fout << obj.works << " " << endl;
	fout << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Poet& obj) {
	fin >> obj.fio >> obj.live >> obj.works;
	return fin;
}

ostream& operator<<(ostream& out, Poet& obj) {
	setlocale(LC_ALL, "Russian");
	out << "��� �����: " << obj.fio << endl;
	out << "���� �����: " << obj.live << endl;
	out << "������������: " << obj.works << endl;
	return out;
}

istream& operator>>(istream& in, Poet& obj) {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "��� �����: ";
	getchar();
	getline(cin, obj.fio);
	cout << "���� �����: ";
	cin >> obj.live;
	cout << "������������: ";
	getchar();
	getline(cin, obj.works);
	return in;
}