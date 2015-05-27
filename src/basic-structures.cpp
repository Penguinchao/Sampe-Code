#include <iostream>
#include <string>
using namespace std;

/***********************************************
	Structures must come before your main function,
	because you cannot prototype them!
 ***********************************************/

struct MyStructure{ //First letter should be capitalized
	string name = "DEFAULT";
	string somethingElse = "DEFAULT";
	int someNumber;
}; //Note the semicolon

int main(){
	MyStructure sampleStruct;
	cout << sampleStruct.name << endl;
	sampleStruct.name = "Eyyyyyy!";
	cout << sampleStruct.name << endl;

	//If defining attributes on declaration, you must
	//put all values in order and can't skip them.
	MyStructure sampleStructTwo = {"Name goes here", "Something Else", 5};
	cout << sampleStructTwo.name << endl
		 << sampleStructTwo.somethingElse << endl
		 << someNumber;

	//Pointers:
	MyStructure* strucPointer = &sampleStruct;
	cout << *strucPointer.name; //Dereferences the NAME variable
	cout << (*strucPointer).name; //Dereferences the whole STRUCTURE
	cout << strucPointer->name; //Shorthand of dereferencing the structure
}
