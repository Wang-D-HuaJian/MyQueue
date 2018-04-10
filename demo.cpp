#include<iostream>
#include "MyQueue.h"
#include<stdlib.h>
#include<string>
#include "Customer.h"
#include "MyQueue.h"
using namespace std;

/**************检验环形队列********************/
int main(void)
{
	MyQueue<Customer> *p = new MyQueue<Customer>(4);
	Customer c1("zhangsan", 20);
	Customer c2("lisi", 30);
	Customer c3("wangwu", 10);
	Customer c4("wangermazi", 45);

	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);
	p->EnQueue(c4);

	p->QueueTraverse();








	//p->EnQueue(10);
	//p->EnQueue(12);
	//p->EnQueue(14);
	//p->EnQueue(15);
	//p->EnQueue(16);

	//p->QueueTraverse();

	//int e = 0;
	//p->DeQueue(e);
	//cout << endl;
	//cout << e << endl;

	//p->DeQueue(e);
	//cout << endl;
	//cout << e << endl;

	//cout << endl;
	//p->QueueTraverse();

	//cout << p->QueueLength() << endl;

	//delete p;
	//p = NULL;

	system("pause");
	return 0;
}