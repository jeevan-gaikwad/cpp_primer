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
typedef int arr_i_t[2];

arr_i_t &update2() {

	static arr_i_t arr;
	arr[0]=22;
	arr[1]=23;
	return arr;
}

int main(void) {

	char p='D';
	test_func(p)='A';
	std::cout<<"Char is:"<<p<<std::endl;
	
	std::string str_arr[5];

	//update(str_arr);
	//std::cout<<str_arr[0]<<std::endl;
	int arr[2]={8,7};
	int* sample_arr = update2();

	std::cout<<sample_arr[0]<<" "<<sample_arr[1]<<std::endl;
	return 0;
}
