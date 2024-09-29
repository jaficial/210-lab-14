// COMSC-210 | Lab 14 | Jed Aficial
// github link: https://github.com/jaficial/210-lab-14

#include <iostream>
#include <iomanip>

using namespace std;

/* set max values for 0-255 for rgb values incase I'd like
   to edit this program into taking input from console/file*/
const int max_rgb = 255;
const int min_rgb = 0;

/* 'color' class contains 4 private member variables, three
	of the have type int for taking in a RGB value from 0-255.
	The last member is for taking in a string of the color name. */ 
class color {
private:
	int red_value;
	int green_value;
	int blue_value;
	string color_name;

public:
	int getred_value() {return red_value;} // getter returns 
	void setred_value(int red) {red_value = red;}
	
	int getgreen_value() {return green_value;}
	void setgreen_value(int green) {green_value = green;}

	int getblue_value() {return blue_value;}
	void setblue_value(int blue) {blue_value = blue;}

	string getcolor_name() {return color_name;}
	void setcolor_name(string name) {color_name = name;}

	void print() { // NOTE: COME BACK TO THIS FUNCTION TO FIX OUTPUT OF VALUES
		cout << endl << "RGB Values for " << color_name << ":" << endl;
		cout << "---------------------------" << endl;
		cout << setw(18) << "RED VALUE: " << red_value << endl;
		cout << setw(18) << "GREEN VALUE: " << green_value << endl;
		cout << setw(18) << "BLUE VALUE: " << blue_value << endl;
		cout << "---------------------------" << endl;
	}
};

void print(color);

// NOTE: FUNCTION IS NOW PRINTING
int main() {

	color brown;
	brown.setcolor_name("Brown");
	brown.setred_value(150);
	brown.setgreen_value(75);
	brown.setblue_value(0);
	
	brown.print();

	color wine;
	wine.setcolor_name("Wine");
	wine.setred_value(114);
	wine.setgreen_value(47);
	wine.setblue_value(55);
	wine.print();

	color forrest_green;
	forrest_green.setcolor_name("Forrest Green");
	forrest_green.setred_value(20);
	forrest_green.setgreen_value(142);
	forrest_green.setblue_value(20);
	forrest_green.print();

	return 0;
}

