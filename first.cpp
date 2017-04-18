#include <iostream>

using namespace std;

class First {

    private:
	int i,j;

    public:
	First(int, int);
        void display();

};

First::First(int a, int b)
{
  i =  a;
  j = b;
}

void First::display()  
{
   cout<<"Print addition = " << i*j << endl;
}

int main()
{
   First f(20,30);
   f.display();
}   	       
