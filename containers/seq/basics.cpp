#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>

#define PRINT(x) std::cout<<x<<std::endl;
class MyClass {

	private:
		int index;
	public:
	MyClass(int index):index(index) { }

	void print_index() const{ PRINT(index); }

	void demo_func() { }

};

int main(void) {

	std::vector<std::string> vec1={"str1", "s2", "s3", "s4", "s5", "s6"};
	/* Various types of initializations */
	std::vector<MyClass> vec2 = {MyClass(1), MyClass(2), MyClass(3)};
	MyClass m1(22);
	std::vector<MyClass> vec3(5, MyClass(44)); 
	std::vector<MyClass> vec4(5, m1); 
	
	std::vector<std::string>::iterator itr = vec1.begin();
	itr += 6;
	//PRINT(*itr);
	std::vector<std::string> vec5(vec1.begin(), itr); /* Initialize vector from range */


	PRINT("Printing string vector:");
	for(std::vector<std::string>::const_iterator itr =  vec5.cbegin(); itr != vec5.end(); itr++) {
		PRINT(*itr);
	}
	PRINT("Printing vector:");
	for(std::vector<MyClass>::const_iterator itr =  vec2.cbegin(); itr != vec2.end(); itr++) {
		itr->print_index();
		 //itr->demo_func(); //Not allowed, if function is not const on const iterator
	}

	return EXIT_SUCCESS;
}
