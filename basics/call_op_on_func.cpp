#include<iostream>
#include<cctype>
#include<string>

using std::string;

class MyClass {

private:
	string className;

public:

	MyClass() {
		className="MyClass";
	}

	string& getSimpleName() {
		return className;
	}

};

int main(void) {
	MyClass obj;
	size_t classNameSize = obj.getSimpleName().size();
	std::cout<<"Size of string '"<<obj.getSimpleName()<<"' is:"<<classNameSize<<std::endl;

	return 0;
}
