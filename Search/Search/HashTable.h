#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

typedef int HTKeyType;
typedef int HTValueType;

typedef enum State
{
	EMPTY = 0,
	EXIST = 1,
	DELETE = 2,
}State;

typedef struct HashData
{
	HTKeyType _key;
	HTValueType _value;
	State _state;
}HashData;

typedef struct HashTable
{
	HashData* _table;
	size_t _len;    //长度
	size_t _size;   //有效数据个数
}HashTable;

void HTInit(HashTable* ht, size_t len);
void HTDestroy(HashTable* ht);
size_t HashFunc(HTKeyType key, size_t len);

void CheackCapacity(HashTable* ht);
int HTInsert(HashTable* ht, HTKeyType key, HTValueType value);
int HTRemove(HashTable* ht, HTKeyType key);
HashData* HTFind(HashTable* ht, HTKeyType key);

int HTSize(HashTable* ht);
int HTEmpty(HashTable* ht);