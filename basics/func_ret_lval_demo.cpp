#include<iostream>
#include<string>

char& test_func(char & c) {

	c='X';

	return c;
}

/*
auto update(std::string[] &arr){
	arr[0]="Jeevan";
	return arr;
}
*/

int[] &update2(int[] &arr) {

	return arr;
}

int main(void) {

	char p='D';
	test_func(p)='A';
	std::cout<<"Char is:"<<p<<std::endl;
	
	std::string str_arr[5];

	//update(str_arr);
	//std::cout<<str_arr[0]<<std::endl;
	int arr[3]={9,8,7};
	update2(arr);
	std::cout<<" ";
	return 0;
}
