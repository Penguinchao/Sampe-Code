#include <iostream>
using namespace std;

bool getYesNo();

int main(){
	cout << "This is a yes or no question. (y/n) ";
	bool answer = getYesNo();
	if(answer == 1){
        cout << "You said yes!\n";
	}else if(answer == 0){
        cout << "You said no!\n";
	}else{
        cout << "Error!";
	}

	return 0;
}

bool getYesNo(){
    char input;
	cin >> input;
    //cout << "(y/n): ";
    while( ( input != 'y' && input != 'Y' ) && ( input != 'N' && input != 'n' ) ){
        cin >> input;
    }if( ( input == 'y' || input == 'Y' ) ){
        return 1;
    }else if( ( input == 'n' || input == 'N' ) ){
        return 0;
    }else{
        cout << "Program error: getYesNo()";
    }
}
