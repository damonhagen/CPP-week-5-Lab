#include <iostream>
#include <fstream>
#include <math.h> // Enabled math library
using namespace std;


int main() {

int a;
int b; //integers declared
int c;



cout << "Please enter 2 numbers that represent sides of a right triangle" << endl;

cin >> a >> b;//getting 2 sides of the triangle added by the user


c= pow(a,2)+pow(b,2);// c is the sum of a and b squared

auto d=sqrt(c);// d is the square root of c

ofstream myfile;
myfile.open ("text.txt");
myfile << "The triangle has 3 sides that are:" << a <<"cm and " << b << "cm and " << d <<"cm" ; 
myfile.close();














    return 0;
}