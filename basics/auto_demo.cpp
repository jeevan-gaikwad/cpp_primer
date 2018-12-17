#include<iostream>
#include<cstdlib>

int main() {

	int i=10;
	const int cnst_var = 33;

	auto a1=i;
	auto a2_non_cnst = cnst_var;
	const auto a3_cnst = cnst_var;
	auto &a4_const_ref = cnst_var;
	a2_non_cnst = 77;
	//a3_cnst = 88; //Error
	a4_const_ref = 99;
	std::cout<<"Printing i with auto:"<<a1<<" a2_non_cnst:"<<a2_non_cnst<<" original:"<<cnst_var<<std::endl;
	return 0;
}
