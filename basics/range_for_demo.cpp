#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using std::cin; using std::cout; using std::endl;

int main(void) {
	
	int arr[5]={0,1,2,3,4};

	for(auto &a:arr) {
		a=99;
		std::cout<<"Arr[i]:"<<a<<std::endl;
	}
	std::vector<std::string> strArr;
	std::string str;
	while( getline(cin, str)) {
		strArr.push_back(str);
	}
	
	cout<<"You just entered following lines:";
	for(std::string str:strArr) {
		cout<<str<<endl;
	}
	return 0;
}

