#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
#include<ostream>

using namespace std;

class Customer
{
	friend ostream &operator<<(ostream &out, Customer &cust);//������Ԫ�����ز��������<<
public:
	Customer(string name="", int age=0);//���Ĭ�Ϲ��캯��
	void printInfo() const;

private:
	string m_strName;
	int m_iAge;
};

Customer::Customer(string name, int age)
{
	m_strName = name;
	m_iAge = age;
}

void Customer::printInfo() const
{
	cout << "������ " << m_strName << endl;
	cout << "���䣺 " << m_iAge << endl;
	cout << endl;
}

ostream &operator<<(ostream &out, Customer &cust)
{
	out << "������ " << cust.m_strName << "\n���䣺 " << cust.m_iAge << endl;
	return out;
}

#endif 