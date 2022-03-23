#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//静态的顺序表
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};

//动态顺序表
typedef int SeqDataType;

typedef struct SeqList
{
	SeqDataType* a;
	int size;
	int capacity;
}SeqList;

//增删查改

//头插尾插、头删尾删
void SeqListPushBack(SeqList* seq, SeqDataType x);
void SeqListPushFront(SeqList* seq, SeqDataType x);

void SeqListPopBack(SeqList* seq);
void SeqListPopFront(SeqList* seq);

//初始化、销毁
void SeqListInit(SeqList* seq);
void SeqListDestory(SeqList* seq);

//打印
void SeqListprint(SeqList* seq);

//查找
int SeqListFind(SeqList* seq, SeqDataType x);

//中间位置插入、删除
void SeqListInsert(SeqList* seq, int pos, SeqDataType x);
void SeqListErase(SeqList* seq, int pos);

//修改
void SeqListModify(SeqList* seq, int pos, SeqDataType x);