#pragma once
#include <fstream>
#include "books.h"
#include "keeper.h"
using namespace std;

class Fantastic : public Books {
private:
	string fio;      //���
	string live;     //���� �����
	string works;    //������������
	string films;    //����� �� ������ �� ������
public:
	Fantastic();
	~Fantastic();
	Fantastic(const Fantastic&);
	void p() override;
	friend ofstream& operator << (ofstream& fout, Fantastic& obj);
	friend ifstream& operator >> (ifstream& fin, Fantastic& obj);
	friend ostream& operator << (ostream& out, Fantastic& obj);
	friend istream& operator >> (istream& in, Fantastic& obj);
	Fantastic& operator =(const Fantastic& other);
};