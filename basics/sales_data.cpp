#include<iostream>
#include<string>

struct Sales_data{
	double revenue;
	int units;
	std::string isbn;
};

int main(void) {
	Sales_data data[2];

	for(int i=0;i<2;i++) {
		std::cout<<"Enter details of the "<<i+1<<" book:"<<std::endl;
		std::cout<<"ISBN:";
		std::cin>>data[i].isbn;
		std::cout<<std::endl<<"Units sold:";
		std::cin>>data[i].units;
		std::cout<<std::endl<<"Price per book:";
		double price;
		std::cin>>price;
		data[i].revenue = data[i].units * price;
	}

	//Now check whether boths books have same ISBN 

	if(data[0].isbn == data[1].isbn) {
		int totalUnits = data[0].units + data[1].units;
		double totalRevenue = data[0].revenue + data[1].revenue;
		std::cout<<std::endl<<"Total count:"<< totalUnits<<std::endl<<"Average price:" << totalRevenue/totalUnits <<std::endl;
		if(totalUnits != 0) {
			std::cout<<"Total revenue:"<<totalRevenue<<std::endl;
		} else {
			std::cout<<"No books were sold."<<std::endl;
		}
	} else {
		std::cout<<"Both books must have same ISBN.";
	}

	return 0;
}
