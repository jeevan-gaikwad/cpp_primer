/* Following program demonstrates fuction templates with operator overloading in c++ */
#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class MyVec {

	std::vector<T> vec;
public:
	size_t size() { return vec.size(); }
	void push_back(T data) {
		vec.push_back(data);
	}
	void print_contents() {
		for(auto num:vec) {
			cout<<num<<endl;
		}
	}

	T& operator[](size_t index) {
		return vec[index];
	}
	T& operator=(MyVec<T> vec) {
		this.vec=vec;
		return this.vec;
	}
};

template<typename T>
MyVec<T> square(MyVec<T> x) {
	return x*x;
}


template<typename T>
MyVec<T> operator *(MyVec<T> &first,MyVec<T> &second) {
	//Logic to make square
	MyVec<T> temp;
	for(int itr=0;itr<first.size();itr++) {
		temp.push_back(first[itr]*second[itr]);
	}

	return temp;
}

int main(void) {
	MyVec<int> vec1;
	vec1.push_back(5);
	vec1.push_back(6);
	vec1.push_back(7);

	cout<<"Initial contents are:"<<endl;
	vec1.print_contents();
	MyVec<int> vec2=vec1;
	cout<<"Copied contents are:"<<endl;
	vec2.print_contents();
	//cout<<"Square is<int>:"<<square(5)<<endl;
	//cout<<"Square is<double>:"<<square(5.5)<<endl;
	
	MyVec<int> res = square(vec1);
	cout<<"Contents of vector are:";
	res.print_contents();
	
	return 0;
}
