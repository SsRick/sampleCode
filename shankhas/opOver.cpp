#include <iostream>

using namespace std;

class Test {
	public:
	Test(){}
	Test(Test &t){
		cout<<"Copy const";
	}

	Test& operator = (Test &t1) {
		cout<<"Assign";
	}
};

int main(){
	Test t1, t2;
t2 = t1;
Test t3= t1;
getchar();
return 0;
}
