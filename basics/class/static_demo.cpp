#include<iostream>
#include<cstdlib>
#include<vector>

class MyClass {
	
	public:
	static int num;
	const static int val=44;
	int sample=25;
	static void print_val() {
		std::cout<<"Num is:"<<num<<std::endl;
		std::cout<<"Val is:"<<val<<std::endl;

	}

	void print_int(int ref=val/* static member as default argument val */) const{
		std::cout<<__func__<<":Val is"<<val<<std::endl;
		std::cout<<__func__<<":Ref is"<<ref<<std::endl;
	}
	void sample_fun(const int num/*=sample //Not allowed*/) {
		std::cout<<__func__<<":"<<num<<std::endl;
	}
};

int MyClass::num = 10;

int main(void) {
	MyClass::print_val();
	MyClass c;
	c.print_int();
	c.sample_fun(MyClass::val);
	std::cout<<"In main val is:"<<MyClass::val<<std::endl;
	return EXIT_SUCCESS;
}
