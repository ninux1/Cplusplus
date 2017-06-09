
#include<iostream>
using namespace std;

#ifndef HASH_H
#define HASH_H

class Hash {

   private:
	int tablesize;
	int table[8];
	int hash_function(int);

   public:
	Hash();
	void insert_table(int);
	int search_table(int);
 	int Display();	

};

#endif
