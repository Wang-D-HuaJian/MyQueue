#include "MyQueue.h"
#include<iostream>
using namespace std;

//MyQueue::MyQueue(int queueCapacity)
//{
//	m_iQueueCapacity = queueCapacity;
//	m_iHead = 0;
//	m_iTail = 0;
//	m_iQueueLen = 0;
//	m_pQueue = new int[m_iQueueCapacity];
//}
//
//MyQueue::~MyQueue()
//{
//	delete[]m_pQueue;
//	m_pQueue = NULL;
//}
//
//void MyQueue::ClearQueue()
//{
//	m_iHead = 0;
//	m_iTail = 0;
//	m_iQueueLen = 0;
//}
//
//bool MyQueue::QueueEmpty() const
//{
//	if (m_iQueueLen == 0)
//		return true;
//	return false;
//	
//	//return m_iQueueLen == 0 ? true : false;
//}
//
//bool MyQueue::QueueFull() const
//{
//	if (m_iQueueLen == m_iQueueCapacity)
//	{
//		return true;
//	}
//	return false;
//}
//
//int MyQueue::QueueLength() const
//{
//	return m_iQueueLen;
//}
//
//bool MyQueue::EnQueue(int element)
//{
//	if (QueueFull())
//	{
//		return false;
//	}
//	else
//	{
//		m_pQueue[m_iTail] = element;
//		m_iTail++;
//		m_iTail = m_iTail % m_iQueueCapacity;//��ֹ�±�Խ����ʹ�±�һֱ��0-m_iQueueCapacity֮��ѭ��,��������ڶ������������±���
//		m_iQueueLen++;
//		return true;
//	}
//}
//
//bool MyQueue::DeQueue(int &element)
//{
//	if (QueueEmpty())
//	{
//		return false;
//	}
//	else
//	{
//		element = m_pQueue[m_iHead];
//		m_iHead++;
//		m_iHead = m_iHead % m_iQueueCapacity;
//		m_iQueueLen--;
//		return true;
//	}
//}
//
//void MyQueue::QueueTraverse()
//{
//	cout << endl;
//	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
//	{
//		cout << m_pQueue[i%m_iQueueCapacity] << endl;
//	}
//	cout << endl;
//}


/***********************������У�ʹ�������ڸ�������*******************************/
//MyQueue::MyQueue(int queueCapacity)
//{
//	m_iQueueCapacity = queueCapacity;
//	m_pQueue = new Customer[m_iQueueCapacity];
//	ClearQueue();
//}
//
//MyQueue::~MyQueue()
//{
//	delete[]m_pQueue;
//	m_pQueue = NULL;
//}
//
//void MyQueue::ClearQueue()
//{
//	m_iHead = 0;
//	m_iTail = 0;
//	m_iQueueLen = 0;
//}
//
//bool MyQueue::QueueEmpty() const
//{
//	if (m_iQueueLen == 0)
//		return true;
//	return false;
//
//	//return m_iQueueLen == 0 ? true : false;
//}
//
//bool MyQueue::QueueFull() const
//{
//	if (m_iQueueLen == m_iQueueCapacity)
//	{
//		return true;
//	}
//	return false;
//}
//
//int MyQueue::QueueLength() const
//{
//	return m_iQueueLen;
//}
//
//bool MyQueue::EnQueue(Customer element)
//{
//	if (QueueFull())
//	{
//		return false;
//	}
//	else
//	{
//		m_pQueue[m_iTail] = element;
//		m_iTail++;
//		m_iTail = m_iTail % m_iQueueCapacity;//��ֹ�±�Խ����ʹ�±�һֱ��0-m_iQueueCapacity֮��ѭ��,��������ڶ������������±���
//		m_iQueueLen++;
//		return true;
//	}
//}
//
//bool MyQueue::DeQueue(Customer &element)
//{
//	if (QueueEmpty())
//	{
//		return false;
//	}
//	else
//	{
//		element = m_pQueue[m_iHead];
//		m_iHead++;
//		m_iHead = m_iHead % m_iQueueCapacity;
//		m_iQueueLen--;
//		return true;
//	}
//}
//
//void MyQueue::QueueTraverse()
//{
//	cout << endl;
//	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
//	{
//		m_pQueue[i%m_iQueueCapacity].printInfo();
//	}
//	cout << endl;
//}