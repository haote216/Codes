#include"HashTable.h"

void HTInit(HashTable* ht, size_t len)
{
	assert(ht);
	assert(len > 0);

	ht->_table = (HashData*)malloc(sizeof(HashData)*len);
	ht->_size = 0;
	ht->_len = len;

	for (size_t i = 0; i < len; ++i)
		ht->_table[i]._state = EMPTY;
}
void HTDestroy(HashTable* ht)
{
	assert(ht);
	free(ht->_table);
	ht->_table = NULL;
	ht->_size = ht->_len = 0;
}
size_t HashFunc(HTKeyType key, size_t len)
{
	return key % len;
}

void CheackCapacity(HashTable* ht);
int HTInsert(HashTable* ht, HTKeyType key, HTValueType value)
{
	//ÔöÈÝ
	CheackCapacity(ht);

	size_t index = HashFunc(key, ht->_len);
	while (ht->_table[index]._state == EXIST)
	{
		if (ht->_table[index]._key == key)
			return 0;
		else
			++index;
	}
	ht->_table[index]._key = key;
	ht->_table[index]._state = EXIST;
	ht->_table[index]._value = value;
	ht->_size++;
}
 
int HTRemove(HashTable* ht, HTKeyType key)
{
	assert(ht);
	HashData* data;
	data = HTFind(ht, key);
	if (data)
	{
		data->_state = DELETE;
		ht->_size--;
		return 1;
	}
	else
		return 0;
}
HashData* HTFind(HashTable* ht, HTKeyType key)
{
	size_t index;
	assert(ht);
	index = HashFunc(key,ht->_len);
	while (ht->_table[index]._state != EMPTY)
	{
		if (ht->_table[index]._key == key)
		{
			if (ht->_table[index]._state == EXIST)
				return &(ht->_table[index]);
			else
				return NULL;
		}
		else
			++index;
	}
	return NULL;
}

int HTSize(HashTable* ht)
{
	assert(ht);
	return ht->_size;
}
int HTEmpty(HashTable* ht)
{
	assert(ht);
	return 0 == ht->_size;
}