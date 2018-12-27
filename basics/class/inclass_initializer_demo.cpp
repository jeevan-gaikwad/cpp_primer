#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>

using std::vector;

class Holder {

	public:
		int member;
		static const int num1=20;
		Holder(int num) {
			member = num;
		}
};

class MyClass {
	public:
		vector<Holder> var = {Holder(22)};
	MyClass& setVar(int i) {
	
		return *this;
	}

	MyClass& getVar() {
		return *this;
	}

};

int main(void) {
	MyClass c1;
	
	c1.getVar().setVar(2);//chain calling

	return EXIT_SUCCESS;
}
