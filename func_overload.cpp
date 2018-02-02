using namespace std;
#include <iostream>

class poly {
	public:
	
	void func(int x)
	{
		cout << "Integer argument" << x << endl;
	}

	void func(double x)
	{
		cout << "Double argument" << x << endl;
	}

	void func(int x , int y)
	{
		cout << "Two arguments" << x << endl;
	}
};

int main()
{
    	poly ob;

	ob.func(2);
	ob.func(4.5);
	ob.func(4, 5);

	return 0;
}
