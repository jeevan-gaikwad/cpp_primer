#include<iostream>
#include<vector>
#include<stack>
#include<cstdlib>

#define PRINT(x) std::cout<<x<<std::endl;

int main(void) {
	std::stack<int> sts;
	sts.push(5);
	sts.push(10);
 	PRINT("Stack top");	


	return EXIT_SUCCESS;
}
