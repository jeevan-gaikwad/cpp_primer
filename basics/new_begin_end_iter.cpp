/* begin and end functions from iterator headers give us start and one past the last element pointer */
#include<iostream>
#include<cctype>
#include<iterator>
#include<vector>

using std::cout; using std::cin; using std::endl;
int main(void) {
	
	//std::vector<int> arr=[0,1,2,3,4,-3,5,6,7];
	int arr[]={0,1,2,3,4,-3,5,6,7};

	//auto p_begin=std::begin(arr);
	int  *p_begin=std::begin(arr);
	auto p_end=std::end(arr);
	
	while(p_begin!=p_end && *p_begin>=0) {
		++p_begin;
	}

	cout<<"I just encountered first negative number:"<<*p_begin<<endl;

	return 0;
}
