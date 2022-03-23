#define _CRT_SECURE_NO_WARNINGS

#include "SeqList.h"

void TestSeqList1()
{
	SeqList S;
	SeqListInit(&S);
	SeqListPushBack(&S, 1);
	SeqListPushBack(&S, 2);
	SeqListPushBack(&S, 3);
	SeqListPushBack(&S, 4);
	SeqListPushBack(&S, 5);

	SeqListPushFront(&S, 0);
	SeqListPushFront(&S, 0);
	SeqListPushFront(&S, 0);

	SeqListprint(&S);

	SeqListPopBack(&S);

	SeqListprint(&S);

	SeqListPopFront(&S);

	SeqListprint(&S);

	SeqListDestory(&S);
}

void TestSeqList2()
{
	SeqList S;
	SeqListInit(&S);
	SeqListPushBack(&S, 1);
	SeqListPushBack(&S, 2);
	SeqListPushBack(&S, 3);
	SeqListPushBack(&S, 4);
	SeqListPushBack(&S, 5);

	SeqListprint(&S);

	SeqListInsert(&S, 3, 0);
	SeqListInsert(&S, 3, 0);
	SeqListInsert(&S, 3, 0);

	SeqListprint(&S);

	SeqListErase(&S, 2);

	SeqListprint(&S);

	SeqListModify(&S, 1, 0);

	SeqListprint(&S);




}

int main()
{
	//TestSeqList1();
	TestSeqList2();
	return 0;
}