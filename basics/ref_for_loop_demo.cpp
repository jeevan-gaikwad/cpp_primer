#include<iostream>

using std::cout;
int main(void) {
	int arr[2][3]={0,1,2,3,4,5};	

	cout<<"Arr is:";
	for(auto &num:arr) {
		for(int num2:num)
			std::cout<<num2<<", ";
	}
	cout<<std::endl;
	return 0;
}
