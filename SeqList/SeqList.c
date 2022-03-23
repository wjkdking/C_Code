#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"


void SeqListInit(SeqList* seq)
{
	assert(seq);

	seq->a = NULL;
	seq->size = 0;
	seq->capacity = 0;
}

void SeqListDestory(SeqList* seq)
{
	assert(seq);

	free(seq->a);
	seq->size = 0;
	seq->capacity = 0;
}

void CheckCapacity(SeqList* seq)
{
	//满了需要增容
	if (seq->size == seq->capacity)
	{
		int newcapacity = (seq->capacity == 0 ? 4 : seq->capacity * 2);
		SeqDataType* new = realloc(seq->a, sizeof(SeqDataType) * newcapacity);
		if (new == NULL)
		{
			perror("SeqListPushBack");
			exit(-1);
		}

		seq->a = new;
		seq->capacity = newcapacity;
	}
}


void SeqListPushBack(SeqList* seq, SeqDataType x)
{
	assert(seq);

	CheckCapacity(seq);
	
	seq->a[seq->size] = x;
	seq->size++;
}

void SeqListPushFront(SeqList* seq, SeqDataType x)
{
	int end = seq->size - 1;

	CheckCapacity(seq);

	while (end >= 0)
	{
		seq->a[end + 1] = seq->a[end];
		end--;
	}

	seq->a[0] = x;
	seq->size++;
}

void SeqListprint(SeqList* seq)
{
	assert(seq);


	int i = 0;
	for (i = 0; i < seq->size; i++)
	{
		printf("%d ", seq->a[i]);
	}
	printf("\n");
}

void SeqListPopBack(SeqList* seq)
{
	assert(seq);
	assert(seq->size > 0);

	seq->size--;
}

void SeqListPopFront(SeqList* seq)
{
	assert(seq);
	assert(seq->size > 0);
	
	for (int i = 0; i < seq->size - 1; i++)
	{
		seq->a[i] = seq->a[i + 1];
	}

	seq->size--;
}

int SeqListFind(SeqList* seq, SeqDataType x)
{
	assert(seq);

	for (int i = 0; i < seq->size; i++)
	{
		if (seq->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* seq, int pos, SeqDataType x)
{
	assert(seq);
	assert(pos >= 0 && pos <= seq->size);

	CheckCapacity(seq);

	int end = seq->size - 1;
	while (end >= pos)
	{
		seq->a[end + 1] = seq->a[end];
		end--;
	}

	seq->a[pos] = x;
	seq->size++;
}

void SeqListErase(SeqList* seq, int pos)
{
	assert(seq);
	assert(pos >= 0 && pos < seq->size);

	for (int i = pos; i < seq->size - 1; i++)
	{
		seq->a[i] = seq->a[i + 1];
	}

	seq->size--;
}

void SeqListModify(SeqList* seq, int pos, SeqDataType x)
{
	assert(seq);
	assert(pos >= 0 && pos < seq->size);

	seq->a[pos] = x;
}