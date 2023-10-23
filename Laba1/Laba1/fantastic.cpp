#include "fantastic.h"
#include <iostream>
#include <string>
using namespace std;

Fantastic::Fantastic() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� ��� ������ Fantastic" << endl << endl;
	fio = "";
	live = "";
	works = "";
	films = "";
}

Fantastic::Fantastic(const Fantastic& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� ��� ������ Fantastic" << endl << endl;
	*this = other;
}

Fantastic::~Fantastic() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� ��� ������ Fantastic" << endl << endl;
}

void Fantastic::p() {
	cin >> *this;
}

Fantastic& Fantastic::operator=(const Fantastic& other) {
	this->fio = other.fio;
	this->live = other.live;
	this->works = other.works;
	this->films = other.films;
	return *this;
}

ofstream& operator<<(ofstream& fout, Fantastic& obj) {
	fout << obj.fio << " " << endl;
	fout << obj.live << " " << endl;
	fout << obj.works << " " << endl;
	fout << obj.films << " " << endl;
	fout << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Fantastic& obj) {
	fin >> obj.fio >> obj.live >> obj.works >> obj.films;
	return fin;
}

ostream& operator<<(ostream& out, Fantastic& obj) {
	setlocale(LC_ALL, "Russian");
	out << "��� �������� ��������: " << obj.fio << endl;
	out << "���� �����: " << obj.live << endl;
	out << "������������: " << obj.works << endl;
	out << "������� ���������: " << obj.films << endl;
	return out;
}

istream& operator>>(istream& in, Fantastic& obj) {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "��� �������� ��������: ";
	getchar();
	getline(cin, obj.fio);
	cout << "���� �����: ";
	cin >> obj.live;
	cout << "������������: ";
	getchar();
	getline(cin, obj.works);
	cout << "����� �� �� ������ ������: ";
	getchar();
	getline(cin, obj.films);
	return in;
}