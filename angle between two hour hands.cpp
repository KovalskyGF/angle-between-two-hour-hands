#include <stdio.h>
#include <iostream>
#include <Math.h>>

using namespace std;

int main() {

	int hours;
	int minutes;
	int res;
	
	cout << "hours: ";
	cin >> hours;
	cout << "minutes: ";
	cin >> minutes;
	
	res = 30*( hours + minutes / 60 ) - minutes*6;   
	          
	if ( res < 0 ) {
		res=-res;
	}
	
	cout  << "Result: " << res;
}

