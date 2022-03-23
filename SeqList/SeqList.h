#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��̬��˳���
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};

//��̬˳���
typedef int SeqDataType;

typedef struct SeqList
{
	SeqDataType* a;
	int size;
	int capacity;
}SeqList;

//��ɾ���

//ͷ��β�塢ͷɾβɾ
void SeqListPushBack(SeqList* seq, SeqDataType x);
void SeqListPushFront(SeqList* seq, SeqDataType x);

void SeqListPopBack(SeqList* seq);
void SeqListPopFront(SeqList* seq);

//��ʼ��������
void SeqListInit(SeqList* seq);
void SeqListDestory(SeqList* seq);

//��ӡ
void SeqListprint(SeqList* seq);

//����
int SeqListFind(SeqList* seq, SeqDataType x);

//�м�λ�ò��롢ɾ��
void SeqListInsert(SeqList* seq, int pos, SeqDataType x);
void SeqListErase(SeqList* seq, int pos);

//�޸�
void SeqListModify(SeqList* seq, int pos, SeqDataType x);