#include<iostream>
#include<fstream>
#include<exception>
#include<cstring>
#include<errno.h>
using namespace std;

class MyException : public std::exception
{
	string msg;

public:
	explicit MyException(string msg):msg(msg) {
	}
	~MyException() { 
		cout<<"MyException destructor"<<endl;
	}
	const char * what () const throw ()  {
		    	return msg.c_str();
	}
};

class Base{

public:
	//virtual void sample() th

};

int main(void) {
	try{
	ifstream of("MyFile.cpp");
	of.exceptions(ios::failbit);
	throw MyException("My custom exception");
	/*
	

	if(of.good()) {
		cout<<"File opened successfully!"<<endl;
	}
	*/
	cout<<"File opening successfull"<<endl;
	}catch(ios_base::failure& ex) {
		cout<<"Error while opening the file"<<strerror(errno)<<endl;
	}catch(MyException& ex) {
		cout<<"Custom exception"<<ex.what()<<endl;
	}
	return 0;
}
