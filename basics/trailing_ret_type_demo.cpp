#include<iostream>
#include<cassert>
#include<cstdlib>
#include<vector>

#ifdef NDEBUG
#define DEBUG(x) std::cout<<x<<std::endl
#else
#define DEBUG(x)
#endif

#define PRINT(x) std::cout<<x<<std::endl
//using std::begin;using std::end;

auto sample_func() -> int(&)[2] {

	static int arr[]={2,3};

	return arr;
}

int main(void) {
	

	int* arr=sample_func();
	for(auto num=0;num<2;num++) {
		
		PRINT(arr[num]);

	}
	int arr_new[]={3,7};
	for(auto myNum:arr_new) {
		PRINT(myNum);
	}
	return EXIT_SUCCESS;
}
