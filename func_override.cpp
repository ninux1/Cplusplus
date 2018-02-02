using namespace std;
#include <iostream>

class Parent {
	public:
	void print()
	{
		cout << "Parent print called" << endl;
	}
};

class Child : public Parent {
	public:
	void print()
	{
		cout << "Child print called" << endl;
	}
};

int main() {
	Parent ob1;
	Child ob2;

	ob1.print();
	ob2.print();

	return 0;
}
