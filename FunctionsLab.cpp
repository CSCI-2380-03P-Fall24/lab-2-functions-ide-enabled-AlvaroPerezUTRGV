#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){
	
	int Smallest_Index = start ; //initilized a variable that would hold the smallest value. Not the actual value but the index
	for(int i = start; i <= end; i++){      // a simple for loop that would look through the array given a parameter
		if (array[i]< array[Smallest_Index]){  // an if statement that that if the value of my array is less than my previous smallest it will be replaced as the smallest index
			Smallest_Index = i;  // updated the smallest index value
		}
	}
	return Smallest_Index; // returns the Smallest_Index
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int array[], int target, int start, int end) {

	for(int i = start; i<= end; i++){ //a simple for loop to go through my array given a parameter
		if (array[i] == target) { //if statement that says if the value of my array equals to my target number then the next line will be executed
			array[i] = 1000; //replaces the element of the array to 1000
		}
	}
}



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
int printArray(int array[], int size) {
	size = sizeof(array) / sizeof(array[0]); //got the size of my array
	cout << "My array elements are: " ; //simple output of a string
	for(int i = 0; i < size; ++i){ // a for loop to that will execute the next line of code by the size of my array
		cout << array[i] << " "; // prints out the array
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
	int sum = 0; // initilize a variable that will hold the sum of all my odd numbers
	for (int i = start; i <= end; i++){ // a for loop that will go through the array given a parameter 
		if (array[i] % 2 != 0){ // if statement to find the odd numbers by diving by 2
			sum = sum + array[i]; // adds the odd numbers together and saves them to my variable sum 
		}
	}
	return sum; //returns to sum
}