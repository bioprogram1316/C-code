#include <iostream>
using namespace std;
int main() {
    double weight, height, BMI;

    cout << "Please enter weight (in pounds): ";
    cin >> weight;
    cout << "Please enter height (in inches): ";
    cin >> height;

    weight=weight*0.453592;
    height=height*0.0254;
    BMI=weight/(height*height);
    if(BMI<18.5)
        cout << "The weight status is: Underweight" << endl;
    else if(BMI>=18.5&&BMI<=25)
        cout << "The weight status is: Normal" << endl;
    else if(BMI<=30&&BMI>25)
        cout << "The weight status is: Overweight" << endl;
    else
        cout << "The weight status is: Obese" << endl;

    return 0;
}
