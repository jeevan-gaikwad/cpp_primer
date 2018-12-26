#include<iostream>
#include<cstdlib>
#include<cctype>

#define PRINT(x) std::cout<<x<<std::endl;

class MyClass {
	
public:
	
		void lookup(int* const xyz) {
			*xyz=55;		
			int p=55;
			xyz=&p;
			PRINT("Loopup const int* called");
		}

		/*
		void lookup(int* xyz) { 
		
			*xyz=55;		
			PRINT("Loopup int* called");
			
		}
		*/
};

int main(void) {
	MyClass c;
	int i=22;
	int *ptr=&i;
	int const *ptr2=&i;
	PRINT("Origin i is:"<<i);
	c.lookup(ptr);
	PRINT("New i is:"<<i);
	//c.lookup(ptr2);
	//PRINT("New i is:"<<i);
	return EXIT_SUCCESS;
}
