#include<iostream>
#include<stdexcept>

#define EXIT_OPTION 8

#define PRINT(x) cout<<x<<endl;

using std::cout; using std::cin; using std::endl;

void display_menu() {
	cout<<"Select an exception"<<endl;
	cout<<"1.Generic\n2.runtime_error\n3.range_error\n4.overflow_error\n5.underflow_error\n";
	cout<<"6.bad_alloc\n7.bad_cast\n";
	cout<<EXIT_OPTION<<".Exit\n";
	cout<<"Your choice:";

}
int main(void) {

	int choice=0;

	while(choice != EXIT_OPTION) {
		display_menu();
		cin>>choice;
		try {
				switch(choice) {
					case 1: throw std::exception();
						break;
					case 2: throw std::runtime_error("User defined runtime error");
						break;
					case 3: throw std::range_error("range validation failed for vector");
						break;

					default:
					if(choice != 8)
						cout<<"Unsupported exception type.\n";
				}

		}
		catch(std::range_error ex) {
			PRINT("range error exception is thrown:"<<ex.what());
		}
		catch(std::runtime_error ex) {
			PRINT("runtime_error:"<<ex.what());
		}
		catch(std::exception e) {
			cout<<"Generic exception is thrown!\n";
		}
	}

	return 0;
}

