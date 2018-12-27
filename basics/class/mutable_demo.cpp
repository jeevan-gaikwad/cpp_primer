#include<iostream>
#include<cctype>
#include<cstdlib>

class MyClass {
	
	private:
		mutable int temp;
		const int var = 10;

	public:
		void update_vals() const{
			//var = 20;
			temp = 33;
		}
};

int main(void) {

	MyClass c1;
	c1.update_vals();

	return EXIT_SUCCESS;
}
