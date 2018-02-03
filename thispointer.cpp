using namespace std;
#include <iostream>

class complex {
	private:
		int x, y;
	public:
		complex(int a, int b) {
			this->x = a;
			this->y = b;
			this->add();
		}

		void add() {
			this->x = 10;
			this->y = 20;
			cout << (x + y) << endl;
		}
};

int main() {

	complex ob(5, 6);
	//int res = ob.add();
	//cout << "The sum is " << res << endl;
}
