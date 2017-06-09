
#include <iostream>
using namespace std;

#include "hash.h"

int main(int argc, char*argv[])
{

    int index;
    Hash newHash;
    
    newHash.insert_table(36);	
    newHash.insert_table(18);	
    newHash.insert_table(72);	
    newHash.insert_table(43);	
    newHash.insert_table(6);	

    cout << endl;
    newHash.Display();
    cout << endl;

    index = newHash.search_table(72);
    cout << "the required value is at " << index << " Location in the hash table" << endl; 	
    index = newHash.search_table(18);
    cout << "the required value is at " << index << " Location in the hash table" << endl; 	
    index = newHash.search_table(43);
    cout << "the required value is at " << index << " Location in the hash table" << endl; 	

    return 0; 
}
