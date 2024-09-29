#include <iostream>
#include <iomanip>

using namespace std;

/*NOTE: SIMPLE CLASS FUNCTION: color class should have three private member variables
 * all members should be ints
 * the three ints should represent the three rgb values 
 * mustuse setter/getter member functions
 * the values must only be 0-255
 * also create a 'print' function to output the values to the console*/

const int max_rgb = 255;
const int min_rgb = 0;

class color {
private:
	int red_value;
	int green_value;
	int blue_value;
public:
	int getred_value() {return red_value;} // 
	void setred_value(int red) {red_value = red;}
	
	int getgreen_value() {return green_value;}
	void setgreen_value() {int green} {green_value = green;}

	int getblue_value() {return blue_value;}
	void setblue_value() {int blue} {blue_value = blue;}

	void print() { // NOTE: COME BACK TO THIS FUNCTION TO FIX OUTPUT OF VALUES
		cout << "RED VALUE: " << red_value << endl;
		cout << "GREEN VALUE: " << green_value << endl;
		cout << "BLUE VALUE " << blue_value << endl;
	}
};

void print(color);

int main() {
	

	return 0;
}

