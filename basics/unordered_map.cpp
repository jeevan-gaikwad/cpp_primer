#include<iostream>
#include<unordered_map>

int main(void) {

	std::unordered_map< char, std::string > uom;
	uom['j'] = "jeevan";//Method 1
	uom.insert(std::pair<char, std::string>('p', "prabha")); //Method2
	std::unordered_map<char, std::string>::iterator element = uom.find('j'); //Method3
	if(element != uom.end())
		std::cout<<"I could retrieve '"<<element->first<<"':"<<element->second<<std::endl;
	else
		std::cout<<"Element 'j' not found"<<std::endl;

	std::cout<<"Just retrieved:"<<uom['j']<<std::endl;
	std::cout<<"Just retrieved:"<<uom['p']<<std::endl;
	return 0;
}
