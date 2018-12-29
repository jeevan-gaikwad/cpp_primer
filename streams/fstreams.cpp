#include<iostream>
#include<string.h>
#include<cstdlib>
#include<fstream>
#include<errno.h>

int main(int argc, char* argv[]) {
	char *fileName;
	if(argc >=2)
		fileName = argv[1];
	else {
		std::cerr<<__FILE__<<":Please provide a file name as a cmd line parameter"<<std::endl;
		return EXIT_FAILURE;
	}

	std::ofstream file(fileName,std::ofstream::app);
	if(file.is_open()) {
		std::cout<<"File "<<fileName<<" opened successfully!"<<std::endl;
		file<<"SampleText"<<std::endl;
	}else {
		std::cerr<<"Failed to open file "<<fileName<<" Reason:"<<strerror(errno)<<std::endl;
	}
	return EXIT_SUCCESS;
}
