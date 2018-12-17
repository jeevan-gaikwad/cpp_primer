#include<iostream>

#include<vector>
#include<string>

using std::vector;

int test() {

}

int main(void) {
	vector<int> v1={0,1,2,3};
	vector<int> v2={0,1,2,3,4,5};
	bool isV1EqualsV2 =  v1==v2;
	bool isV1LessThanV2 = v1< v2;
	bool isV2LessThanV1 = v2 < v1;
	std::cout<<"Is v1 == v2: "<<isV1EqualsV2<<std::endl<<"Is v1 < v2: "<<isV1LessThanV2<<std::endl<<"IsV2LessThanV1: "<<isV2LessThanV1<<std::endl;
	decltype(test()) v1_size =  v1.size();
	std::cout<<"Suze of v1 is:"<<v1_size<<std::endl;
	return 0;
}
