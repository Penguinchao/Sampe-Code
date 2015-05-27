#include <iostream>
#include <string>
using namespace std;

//Prototype
void debugOut(string input);

//Global Variable
bool debugEnabled = 1; //1 == on, 0 == off

int main(){
	debugOut("This should show if debug is enabled!");
}

void debugOut(string input){
	if(debugEnabled){
		cout << input << endl;
	}
}