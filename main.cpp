// Body Mass Index
// A program that calculates and displays a person's body mass index (BMI). 
// The BMI is often used to determine whether a person with a sedentary 
// lifestyle is overweight or underweight for his or her height. A person's 
// BMI is calculated with the following formula: 
// BMI = weight * 703/height squared
// where weight is measured in pounds and height is measured in inches. The 
// program should display a message indicating whether the person has optimal 
// weight, is underweight, or is overweight. A sedentary person's weight is 
// considered to be optimal if his or her BMI is between 18.5 and 25. If the 
// BMI is less than 18.5, the person is considered to be underweight. If the 
// BMI value is greater than 25, the person is considered to be overweight. 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double weight;
	double height;
	double BMI;

	cout << "How much do you weigh (in pounds)?" << endl;
	cin >> weight;
	cout << "How tall are you (in inches)?" << endl;
	cin >> height;

	BMI = weight * 703 / pow(height, 2);

	cout << fixed << setprecision(2);
	cout << "Your BMI is: " << BMI << endl;

	if (BMI >= 18.5 && BMI <= 25) {
		cout << "You are in the optimal range. Keep doing what you are" << endl;
	}
	else if (BMI < 18.5) {
		cout << "You are underweight! Time to eat more burgers!" << endl;
	}
	else {
		cout << "It is time to start loosing weight." << endl;
	}

	return 0;
}
