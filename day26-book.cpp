#include <iostream>

using namespace std;

typedef struct Date {
	int day;
	int month;
	int year;
}Date;

int main() {

	Date returned; 	// D M Y values for the actual return date
	Date expected; 	// D M Y values for the expected return date
	int charge = 0;	// fine to be charged

	cin >> returned.day >> returned.month >> returned.year;
	cin >> expected.day >> expected.month >> expected.year;

	if ( returned.year > expected.year ) {
	    charge = 10000;
	}
	else if (returned.year == expected.year && returned.month > expected.month) {
	    charge = ( returned.month - expected.month ) * 500;
	}
	else if ( returned.year == expected.year && returned.month == expected.month && returned.day > expected.day ) {
	    charge = ( returned.day - expected.day ) * 15;
	}

	cout << charge << endl;
	
    return 0;

}