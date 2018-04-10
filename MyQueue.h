#ifndef MYQUEUE_H
#define MYQUEUE_H
/*****************************环形队列的实现************************************/
//class MyQueue
//{
//public:
//	MyQueue(int queueCapacity); // 创建容量为queueCapacity大小的队列
//	virtual ~MyQueue();//析构函数
//	void ClearQueue();//清空队列
//	bool QueueEmpty() const; // 判断队列是否为空
//	bool QueueFull() const; //判断队列是否为满
//	int QueueLength() const;//返回队列长度
//	bool EnQueue(int element); //新元素element入队列
//	bool DeQueue(int &element); //首元素出队列
//	void QueueTraverse();//遍历队列
//
//private:
//	int *m_pQueue;//队列数组指针，指向队列本身
//	int m_iQueueLen;//队列元素个数
//	int m_iQueueCapacity;//队列数组容量
//	int m_iHead;//队头下标
//	int m_iTail;//队尾下标
//};


//
///***********************************改造环形队列适用于自定义的类型*********************************************/
//#include "Customer.h"
//
//class MyQueue
//{
//public:
//	MyQueue(int queueCapacity); // 创建容量为queueCapacity大小的队列
//	virtual ~MyQueue();//析构函数
//	void ClearQueue();//清空队列
//	bool QueueEmpty() const; // 判断队列是否为空
//	bool QueueFull() const; //判断队列是否为满
//	int QueueLength() const;//返回队列长度
//	bool EnQueue(Customer element); //新元素element入队列
//	bool DeQueue(Customer &element); //首元素出队列
//	void QueueTraverse();//遍历队列
//
//private:
//	Customer *m_pQueue;//队列数组指针，指向队列本身
//	int m_iQueueLen;//队列元素个数
//	int m_iQueueCapacity;//队列数组容量
//	int m_iHead;//队头下标
//	int m_iTail;//队尾下标
//};

/************************************使用类模板使其变成模板类******************************************/
template<typename T>
class MyQueue
{
public:
	MyQueue(int queueCapacity); // 创建容量为queueCapacity大小的队列
	virtual ~MyQueue();//析构函数
	void ClearQueue();//清空队列
	bool QueueEmpty() const; // 判断队列是否为空
	bool QueueFull() const; //判断队列是否为满
	int QueueLength() const;//返回队列长度
	bool EnQueue(T element); //新元素element入队列
	bool DeQueue(T &element); //首元素出队列
	void QueueTraverse();//遍历队列

private:
	T *m_pQueue;//队列数组指针，指向队列本身
	int m_iQueueLen;//队列元素个数
	int m_iQueueCapacity;//队列数组容量
	int m_iHead;//队头下标
	int m_iTail;//队尾下标
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
		m_iTail = m_iTail % m_iQueueCapacity;//防止下标越境，使下标一直在0-m_iQueueCapacity之间循环,而不会大于队列容量，导致崩溃
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