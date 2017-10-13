#ifndef LINKTABLE_H
#define LINKTABLE_H

#include<pthread.h>

#define SUCESS 0
#define FAILURE (-1)

//LinkTable Node Type

typedef struct LinkTableNode
{
	struct LinkTableNode * pNext;
}tLinkTableNode;

//LinkTable Type

typedef struct LinkTable
{
	tLinkTableNode *pHead;
	tLinkTableNode *pTail;
	int SumOFNode;
	pthread_mutex_t mutex;
}tLinkTable;

tLinkTable * CreateLinkTable();

//Delete a LINKtable

int DeleteLinkTable(tLinkTable * pLinkTable);

int AddLinkTableNode(tLinkTable * pLinkTable,tLinkTableNode * pNode);

int DeLinkTableNode(tLinkTable * pLinkTable,tLinkTableNode *pNode);

tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable);

tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode *pNode);

#endif
