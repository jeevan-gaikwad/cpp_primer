#include<iostream>
#include<cstdlib>
#include<string>
#include<exception>

#define YEAR_OF_MFG 2018
#define PRINT(x) std::cout<<x<<std::endl

using std::string;

class Camera {
	private:
		double aperture;
		double megapixel;
		
	public:
		Camera()=default;
		Camera(double aperture, double megapixel): aperture(aperture), megapixel(megapixel) { }
		Camera(Camera& camera) {
			PRINT("Camera Copy constructor invoked");
		}
		void print_details() {
			PRINT("Aperture:"<<aperture<<" Megapixel:"<<megapixel);
		}
};

class Phone {
	private:
		
		string IMEI_num;
		string model;
		int    yearOfManufacture = YEAR_OF_MFG;
		Camera camera;

	public:
		
		Phone()=default;

		Phone(string imei_num, string model, Camera camera):
		IMEI_num(imei_num), model(model), camera(camera)
		{ }
	
		void print_details() {
				PRINT("IMEI:"<<IMEI_num<<" model:"<<model<<" yearOfManufacture:"<<yearOfManufacture);
				camera.print_details();
		}

};
int main(void) {

	Camera carlZesis(1.7, 20.0);
	Phone onePlus6("xyz", "onePlus6", carlZesis);
	Phone onePlus6T;
	onePlus6T = onePlus6;
	onePlus6T.print_details();
		
	/*
	try{	
		throw std::logic_error("my exception");
	} catch(std::exception ex){

		std::cout<<"Caught exception:"<<ex.what()<<std::endl;
	}
	*/

	return EXIT_SUCCESS;
}
