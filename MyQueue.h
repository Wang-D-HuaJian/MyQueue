#ifndef MYQUEUE_H
#define MYQUEUE_H
/*****************************���ζ��е�ʵ��************************************/
//class MyQueue
//{
//public:
//	MyQueue(int queueCapacity); // ��������ΪqueueCapacity��С�Ķ���
//	virtual ~MyQueue();//��������
//	void ClearQueue();//��ն���
//	bool QueueEmpty() const; // �ж϶����Ƿ�Ϊ��
//	bool QueueFull() const; //�ж϶����Ƿ�Ϊ��
//	int QueueLength() const;//���ض��г���
//	bool EnQueue(int element); //��Ԫ��element�����
//	bool DeQueue(int &element); //��Ԫ�س�����
//	void QueueTraverse();//��������
//
//private:
//	int *m_pQueue;//��������ָ�룬ָ����б���
//	int m_iQueueLen;//����Ԫ�ظ���
//	int m_iQueueCapacity;//������������
//	int m_iHead;//��ͷ�±�
//	int m_iTail;//��β�±�
//};


//
///***********************************���컷�ζ����������Զ��������*********************************************/
//#include "Customer.h"
//
//class MyQueue
//{
//public:
//	MyQueue(int queueCapacity); // ��������ΪqueueCapacity��С�Ķ���
//	virtual ~MyQueue();//��������
//	void ClearQueue();//��ն���
//	bool QueueEmpty() const; // �ж϶����Ƿ�Ϊ��
//	bool QueueFull() const; //�ж϶����Ƿ�Ϊ��
//	int QueueLength() const;//���ض��г���
//	bool EnQueue(Customer element); //��Ԫ��element�����
//	bool DeQueue(Customer &element); //��Ԫ�س�����
//	void QueueTraverse();//��������
//
//private:
//	Customer *m_pQueue;//��������ָ�룬ָ����б���
//	int m_iQueueLen;//����Ԫ�ظ���
//	int m_iQueueCapacity;//������������
//	int m_iHead;//��ͷ�±�
//	int m_iTail;//��β�±�
//};

/************************************ʹ����ģ��ʹ����ģ����******************************************/
template<typename T>
class MyQueue
{
public:
	MyQueue(int queueCapacity); // ��������ΪqueueCapacity��С�Ķ���
	virtual ~MyQueue();//��������
	void ClearQueue();//��ն���
	bool QueueEmpty() const; // �ж϶����Ƿ�Ϊ��
	bool QueueFull() const; //�ж϶����Ƿ�Ϊ��
	int QueueLength() const;//���ض��г���
	bool EnQueue(T element); //��Ԫ��element�����
	bool DeQueue(T &element); //��Ԫ�س�����
	void QueueTraverse();//��������

private:
	T *m_pQueue;//��������ָ�룬ָ����б���
	int m_iQueueLen;//����Ԫ�ظ���
	int m_iQueueCapacity;//������������
	int m_iHead;//��ͷ�±�
	int m_iTail;//��β�±�
};

template<typename T>
MyQueue<T>::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_pQueue = new Customer[m_iQueueCapacity];
	ClearQueue();
}

template<typename T>
MyQueue<T>::~MyQueue()
{
	delete[]m_pQueue;
	m_pQueue = NULL;
}

template<typename T>
void MyQueue<T>::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

template<typename T>
bool MyQueue<T>::QueueEmpty() const
{
	if (m_iQueueLen == 0)
		return true;
	return false;

	//return m_iQueueLen == 0 ? true : false;
}

template<typename T>
bool MyQueue<T>::QueueFull() const
{
	if (m_iQueueLen == m_iQueueCapacity)
	{
		return true;
	}
	return false;
}

template<typename T>
int MyQueue<T>::QueueLength() const
{
	return m_iQueueLen;
}

template<typename T>
bool MyQueue<T>::EnQueue(T element)
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail % m_iQueueCapacity;//��ֹ�±�Խ����ʹ�±�һֱ��0-m_iQueueCapacity֮��ѭ��,��������ڶ������������±���
		m_iQueueLen++;
		return true;
	}
}

template<typename T>
bool MyQueue<T>::DeQueue(T &element)
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead % m_iQueueCapacity;
		m_iQueueLen--;
		return true;
	}
}

template<typename T>
void MyQueue<T>::QueueTraverse()
{
	cout << endl;
	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
	{
		cout<< m_pQueue[i%m_iQueueCapacity] << endl;
	}
	cout << endl;
}

 
#endif