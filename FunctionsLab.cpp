#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){
	
	int Smallest_Index = start ;
	for(int i = start; i <= end; i++){
		if (array[i]< array[Smallest_Index]){
			Smallest_Index = i;
		}
	}
	return Smallest_Index; // fix this!
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int array[], int target, int start, int end) {

	for(int i = start; i<= end; i++){
		if (array[i] == target) {
			array[i] = 1000;
		}
	}
}



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
int printArray(int array[], int size) {
	size = sizeof(array) / sizeof(array[0]);
	cout << "My array elements are: " ;
	for(int i = 0; i < size; ++i){
		cout << array[i] << " ";
	}
	cout << endl;
	
	return 0;
}








//Write a function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. 
//     n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.


int sumOdds(int array[], int start, int end){
	int sum = 0;
	for (int i = start; i <= end; i++){
		if (array[i] % 2 != 0){
			sum = sum + array[i];
		}
	}
	return sum;
}