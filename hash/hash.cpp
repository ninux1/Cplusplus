
#include<iostream>
using namespace std;
#include "hash.h"

Hash::Hash(void)
{
  tablesize = 8;
  for(int i =0;i<tablesize;i++)
     table[i]=0;	
}

int Hash::hash_function(int key) 
{
    return key % tablesize;
}

void Hash::insert_table(int key)
{
    int index;	
    index = hash_function(key);
    table[index] = key;
}

int Hash::search_table(int key)
{
    int index;	
    index = hash_function(key);
    return index;
}

int Hash::Display()
{
    for(int i=0;i<8;i++)
      cout<< table[i] << endl; 	   
}
