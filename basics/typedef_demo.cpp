#include<iostream>
#include<cstdlib>
#include<string>

using std::string;

class MyClass {
	string name;

	public:
	MyClass() {

	}
	MyClass(string name) {
		this->name = name;
	}
	string getClassName() { return name; }

};
MyClass *MYCLASS[2];


int main(void) {
	
	decltype(MYCLASS) c1={new MyClass("Demo"), new MyClass("Demo2")};
	std::cout<<c1[1]->getClassName()<<std::endl;

	return EXIT_SUCCESS;
}
