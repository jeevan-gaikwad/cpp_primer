#include<iostream>
#include<cassert>
#include<cstdlib>

#ifdef NDEBUG
#define DEBUG(x) std::cout<<x<<std::endl
#else
#define DEBUG(x)
#endif

int main(int argc, char* argv[]) {
	int i=10;
	#ifdef NDEBUG
		assert(i<10);
	#endif
	DEBUG("Debug statement");
	std::cout<<"Program ends"<<std::endl;
	return EXIT_SUCCESS;
}
