/* Program to covert first word from small case to upper  case using iterator*/
#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using std::string; using std::cin; using std::cout; using std::endl;

int main(void) {
	string str1("sample string");	
	cout<<"Original string is:"<<str1<<endl;
	for(std::string::iterator itr=str1.begin(); itr != str1.end() && !isspace(*itr); itr++) {
			*itr = toupper(*itr);
	}
	
	cout<<"UPPER case string is:"<<str1<<endl;

	/* try const_iterator */
	auto my_const_itr = str1.cbegin(); //This has type string::const_iterator
	while(my_const_itr != str1.cend()) {
		//Try to write
		*my_const_itr='A'; /* error: assignment of read-only location ‘my_const_itr */
		
		my_const_itr++;
	}
	return 0;
}
