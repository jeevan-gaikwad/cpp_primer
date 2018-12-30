#include<iostream>
#include<cstdlib>
#include<vector>

using std::vector;

int main(void) {

	vector<int> vec;
	int i=0;
	for(;i<100;i++) {
		vec.push_back(i);
		std::cout<<"i:"<<i<<" size:"<<vec.size()<<" capacity:"<<vec.capacity()<<std::endl;
	}
	vec.shrink_to_fit();
	std::cout<<"Shrink to fit:";

	std::cout<<" size:"<<vec.size()<<" capacity:"<<vec.capacity()<<std::endl;

	vec.reserve(150);

	std::cout<<"Reserved(150):";

	std::cout<<" size:"<<vec.size()<<" capacity:"<<vec.capacity()<<std::endl;
	std::cout<<"New loop.."<<std::endl;
	for(;i<300;i++) {
		vec.push_back(i);
		std::cout<<"i:"<<i<<" size:"<<vec.size()<<" capacity:"<<vec.capacity()<<std::endl;
	}


	return EXIT_SUCCESS;
}
