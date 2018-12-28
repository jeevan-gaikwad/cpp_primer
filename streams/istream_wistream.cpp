#include<iostream>
#include<cstring>
#include<sstream>
#include<cstdlib>

typedef std::wistream input_stream;
//typedef std::wcout    output_stream;

using std::endl;

input_stream& print_stdin(input_stream& input) {
	std::wstring str;
	if(input.good()) {
		while(input>>str) {
			//output_stream<<str;
			std::wcout<<str;
		}
		if(input.eof()) {
			std::cout<<"User chose to put EOF. Clearing the stream"<<endl;
			input.clear();
		}else {
			std::cout<<"Unknow error occurred"<<endl;
		}
	}else {
		std::cout<<"Input stream is not in valid state.";
	}
	return input;
}

int main(void) {
	input_stream &input_stream = print_stdin(std::wcin);
	if(input_stream.good()) {
		std::cout<<"In main: God returned me a good input stream."<<endl;
	}else {
		std::cout<<"In main: God did not return me a good input stream :("<<endl;
	}

	return EXIT_SUCCESS;
}
