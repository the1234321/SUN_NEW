#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include "error.h"
#include "windows.h"
using namespace std;

//�ڵ�״̬
#define NODE_DEAD       0 //�ڵ㲻����
#define NODE_ACTIVE     1 //�ڵ����

class node
{
public:
	int id;											//�ڵ�ID��
	map<int, double> adjOut;						//�����ڽӽڵ���Ϣ����ź�Ȩ��
	int  numAdjOut;									//�����ھӽڵ����
	map<int, double> adjIn;							//����ڽӽڵ���Ϣ����ź�Ȩ��
	int  numAdjIn;									//����ھӽڵ����

	map<int, map<int, double>> adjMultiOut;			//����������ڽӽڵ���Ϣ������ţ���ź�Ȩ��
	int  numAdjMultiOut;							//����������ھӽڵ����
	map<int, map<int, double>> adjMultiIn;			//����������ڽӽڵ���Ϣ������ţ���ź�Ȩ��
	int  numAdjMultiIn;								//����������ھӽڵ����

	double strength;								//�ڵ�Ȩֵ
	int cid;										//����id
	int status;										// 1: �ڵ����;  0: �ڵ㲻����;
	node(int id);									//���캯��
	~node();										//��������
	void showNode();								//��ʾ�ڵ���Ϣ
	int addLinkToNode(int nodeid, double weight);	//Ϊ�ڵ����ӳ����ھ�
	int delLinkFromNode(int nodeid);				//Ϊ�ڵ�ɾ�������ھ�
	int addLinkFromNode(int nodeid, double weight);	//Ϊ�ڵ���������ھ�
	int delLinkToNode(int nodeid);					//Ϊ�ڵ�ɾ������ھ�
	int addLinkToNodeMulti(int netid, int nodeid, double weight);	//Ϊ�ڵ����Ӷ���������ھ�
	int delLinkToNodeMulti(int netid, int nodeid);					//Ϊ�ڵ�ɾ������������ھ�
	int addLinkFromNodeMulti(int netid, int nodeid, double weight);	//Ϊ�ڵ����Ӷ���������ھ�
	int delLinkFromNodeMulti(int netid, int nodeid);				//Ϊ�ڵ�ɾ������������ھ�
};

