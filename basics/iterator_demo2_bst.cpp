#include<iostream>
#include<vector>

using std::vector; using std::cout; using std::cin; using std::endl;
int main(void) {
	
	vector<int> arr={11,22,33,44,55,66,77,88,99};
	int element;
	cout<<"Enter a element to search:";
	cin>>element;
	vector<int>::const_iterator mid_itr=arr.cbegin();
	int mid = (arr.cend()-arr.cbegin()-1)/2;

	mid_itr = mid_itr + mid; 
	while(mid >0 && mid < arr.size()) {
		if(*mid_itr == element) {
			cout<<"Element found!"<<endl;
			return 0;
		} else {
			mid = mid/2;
			cout<<"New mid is:"<<mid<<endl;
			if(element < *mid_itr) {
				mid_itr -= mid;
			} else {
				mid_itr += mid;
			}				
		}
	}

	cout<<"Element NOT found!"<<endl;
	return 0;
}
