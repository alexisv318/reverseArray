#include <iostream>
#include <array>
using namespace std;

const int size = 4;

array<int, size>elements;

int reverseArray(int size){
	
	elements[0] = 1;
	elements[1] = 2;
	elements[2] = 3;
	elements[3] = 4;
	cout << "Before: " << elements[0] << " " << elements[1] << " " << elements[2] << " " << elements[3] << endl; // displays 1 2 3 4
 	
	
	
for (int element = 0; element < size; ++element) {
	if (element >= 3 ){
		 cout << "After: " << elements[element] << " " << elements[element - 1] << " " << elements[element - 2] << " " << elements[element - 3] << " " <<  endl;
	}
	}
return 0;
}

int main(){

reverseArray(size);
	
	return 0;
}


