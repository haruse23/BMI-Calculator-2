# include <iostream>
# include <cmath>
using namespace std;
int main() {
    
    double Weight {};
    double Height {};


    cout << "Enter your weight (kg): \n";
    cin >> Weight;
    cout << "Enter your height (m): \n";
    cin >> Height;

  
    
    double BMI {Weight/(pow(Height,  2))};
    cout << "Your BMI is: " << BMI << endl;
    
    if (BMI < 18.5) {cout << "You're underweight";}

    else if (BMI >= 18.5 && BMI <= 24.9) {cout << "You're normal";}

    else if (BMI >= 25 && BMI <= 29.9) {cout << "You're overweight";}
    
    else {cout << "You're obese";}



    return 0;
}