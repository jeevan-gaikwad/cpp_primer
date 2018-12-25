#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::cout;
using std::vector;

void print_lines(std::initializer_list<string> list) {

	cout<<"Printing your strings:\n";	
	for(std::initializer_list<string>::const_iterator itr=list.begin();itr != list.end(); itr++) {
		cout<<*itr<<std::endl;
	}

}

void print_lines_v2(std::initializer_list<std::initializer_list<string>> list) {

	cout<<"Printing your strings:v2\n";	
	for(std::initializer_list<std::initializer_list<string>>::const_iterator itr=list.begin();itr != list.end(); itr++) {
		
		for(std::initializer_list<string>::const_iterator str_itr=itr->begin();str_itr != itr->end();str_itr++) {
			cout<<*str_itr<<std::endl;
		}
		cout<<"\n";
	}

}

int main(int argc,char *argv[]) {

	print_lines({"Hello","Jeevan"});	
	print_lines_v2({{"Hello","Jeevan"},{"How","are","you"}});	
	
	return 0;
}
