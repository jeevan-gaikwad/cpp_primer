#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;

class MyClass {
	string name;
public:
	MyClass(string name) {
		this->name = name;
	}

	string& getName() { return name; }
};

vector<string> getList() {

	return {"G1", "G2", "P2"};
}


vector<MyClass*> getClassObjList() {
	//MyClass *c1=new MyClass("C1");

	return { new MyClass("C1"), new MyClass("C2")};
	//return {c1};
}
int main(void) {
	vector<string> list=getList();
	for(auto str:list)
		std::cout<<str<<std::endl;
	
	try {
			vector<MyClass*> classList=getClassObjList();
			std::cout<<"Printing class names:"<<std::endl;

			for(auto obj:classList) {
				std::cout<<obj->getName()<<std::endl;
			}
	
	} catch(std::logic_error ex) {
		std::cout<<"Error while calling getClassObjList():"<<ex.what()<<std::endl;
	}
	
	return 0;
}
