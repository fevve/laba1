#pragma once
#include <fstream>
#include "books.h"
#include "keeper.h"
using namespace std;

class Novel : public Books {
private:
	string fio;      //���
	string live;     //���� �����
	string works;    //������������
	string bio;      //������ ���������
public:
	Novel();
	~Novel();
	Novel(const Novel&);
	void p() override;
	friend ofstream& operator << (ofstream& fout, Novel& obj);
	friend ifstream& operator >> (ifstream& fin, Novel& obj);
	friend ostream& operator << (ostream& out, Novel& obj);
	friend istream& operator >> (istream& in, Novel& obj);
	Novel& operator =(const Novel& other);
};