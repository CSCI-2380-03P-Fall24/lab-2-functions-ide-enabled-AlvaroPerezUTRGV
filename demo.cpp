#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


int main() {
    int myarray[] = {0,2,6,9,6,4} ; 
    int size = sizeof(myarray) / sizeof(myarray[0]);
	cout << "My array elements are: " ;
	for(int i = 0; i < size; ++i){
		cout << myarray[i] << " ";
	}
	cout << endl;

    return 0;
}