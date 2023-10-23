#include "novel.h"
#include <iostream>
#include <string>
using namespace std;

Novel::Novel() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� ��� ������ Novel" << endl << endl;
	fio = "";
	live = "";
	works = "";
	bio = "";
}

Novel::Novel(const Novel& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� ��� ������ Novel" << endl << endl;
	*this = other;
}

Novel::~Novel() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� ��� ������ Novel" << endl << endl;
}

void Novel::p() {
	cin >> *this;
}

Novel& Novel::operator=(const Novel& other) {
	this->fio = other.fio;
	this->live = other.live;
	this->works = other.works;
	this->bio = other.bio;
	return *this;
}

ofstream& operator<<(ofstream& fout, Novel& obj) {
	fout << obj.fio << " " << endl;
	fout << obj.live << " " << endl;
	fout << obj.works << " " << endl;
	fout << obj.bio << " " << endl;
	fout << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Novel& obj) {
	fin >> obj.fio >> obj.live >> obj.works >> obj.bio;
	return fin;
}

ostream& operator<<(ostream& out, Novel& obj) {
	setlocale(LC_ALL, "Russian");
	out << "��� �������� ����������: " << obj.fio << endl;
	out << "���� �����: " << obj.live << endl;
	out << "������������: " << obj.works << endl;
	out << "������� ���������: " << obj.bio << endl;
	return out;
}

istream& operator>>(istream& in, Novel& obj) {
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "��� �������� ����������: ";
	getchar();
	getline(cin, obj.fio);
	cout << "���� �����: ";
	cin >> obj.live;
	cout << "������������: ";
	getchar();
	getline(cin, obj.works);
	cout << "������� ���������: ";
	getchar();
	getline(cin, obj.bio);
	return in;
}