/*John is a math enthusiast who loves to create programs that perform various mathematical operations.
 He recently decided to write a program to calculate the square, modulus, and division of numbers. 
 He created three functions with the same name, "calc," each serving a different purpose.

Firstly, John implemented the function for calculating the square. 
Whenever he passes an integer argument to this function, it performs the necessary 
calculations and returns the square of that number as an integer value.

Next, John developed the function for calculating the modulus. 
This function takes in two integer arguments and calculates the modulus of the first
 number divided by the second number. It then returns the modulus as an integer value.


Lastly, John implemented the function for performing division.
 This function takes in two floating-point arguments and performs the division operation on them.
  It returns the result as a float value.

John's program allows users to perform these mathematical operations by simply calling the "calc"
 function with appropriate arguments, making it easier for them to obtain the desired results without writing extensive code.



Note: This is a sample question asked in an Infosys interview.

Input Format
The input consists of a single line input that has 2 integer values and 2 floating-point values, separated by a space.



Note: First input for Square function, first and second inputs for modulus function, and last two inputs for division function.

Output Format
The output displays the result of the operations in separate lines.



Refer to the sample output for formatting specifications.

Sample Input Sample Output
2 5 6.3 5.2
Square of 2: 4
Modulus of 2, 5: 2
Quotient of 6.3, 5.2: 1.21
Sample Input Sample Output
-8 -6 -5 2.0365
Square of -8: 64
Modulus of -8, -6: -2
Quotient of -5, 2.0365: -2.46*/
#include<iostream>
#include<iomanip>
using namespace std;
void calc(int x){
	cout<<"Square of "<<x<<" is: "<<x*x<<"\n";
}
void calc(int x,int y){
	cout<<"Modulus of "<<x<<","<<y<<" is: "<<x%y<<"\n";
}
void calc(float x,float y){
	cout<<"qutient of "<<x<<","<<y<<" is: "<<fixed<<setprecision(2)<<x/y<<"\n";
}
int main(){
	int a,b;
	float x,y;
	cout<<"enter the values: \n";
	cin>>a>>b>>x>>y;
	calc(a);
	calc(a,b);
	calc(x,y);
	return 0;
}
