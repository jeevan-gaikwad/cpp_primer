#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
#include<errno.h>
#include<string.h>

#define SUCCESS 0
#define FAILURE 1

typedef int status_t;

struct PersonInfo {
	std::string name;
	char gender;
	long phone_number;
};

PersonInfo prepare_record(std::string str) {

	std::string token;
	std::istringstream strstrm(str);
	PersonInfo person;
	strstrm >> person.name;
	strstrm >> person.gender;
	strstrm >> token;
	person.phone_number = atoi(token.c_str());
	
	return person;
}
status_t read_records_from_file(std::string filename, std::vector<PersonInfo> &records) {
	std::ifstream file(filename);
	std::string str;
	if(file.is_open()) {
		std::cout<<"File opened successfully. Reading records"<<std::endl;
		while(getline(file,str)) { //While there are more records to read
			//Skip if file has commnes. Start with #
			if(str[0] == '#') {
				continue;//Skip
			}
			//process the line
			records.push_back(prepare_record(str));
		}
	}else {
		std::cerr<<"Failed to open file "<<filename<<strerror(errno)<<std::endl;
	}
	return SUCCESS;
}

int main(void) {
	std::vector<PersonInfo> records;
	std::string file_name="sample_records.txt";

	if(read_records_from_file(file_name, records) == SUCCESS ) {
		std::cout<<"Reading done. Total no of records:"<<records.size()<<std::endl;
		std::cout<<std::unitbuf;
		int i=1;
		for(auto person:records) {
			std::cout<<(i++)<<". "<<person.name<<" "<<person.gender<<" "<<person.phone_number<<std::endl;
		}
	}else {
		std::cout<<"Failed to read the records from file."<<std::endl;
	}


	return EXIT_SUCCESS;
}
