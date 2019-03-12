#include <iostream>

using namespace std;

class A {

	public:
	int fun(int a){
		cout<<"Int hai\n";
	}
	int fun(double b){
                cout<<"Float hai\n";
        }
};

class B: public A {

	public:
	int fun(int g) {
		cout<<"ai o\n";
	}

	
};

int main()
{
	B b;
	b::fun(1);
	return 0;
}

