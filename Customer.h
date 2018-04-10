#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
#include<ostream>

using namespace std;

class Customer
{
	friend ostream &operator<<(ostream &out, Customer &cust);//声明友元，重载操作运算符<<
public:
	Customer(string name="", int age=0);//变成默认构造函数
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
	cout << "姓名： " << m_strName << endl;
	cout << "年龄： " << m_iAge << endl;
	cout << endl;
}

ostream &operator<<(ostream &out, Customer &cust)
{
	out << "姓名： " << cust.m_strName << "\n年龄： " << cust.m_iAge << endl;
	return out;
}

#endif 