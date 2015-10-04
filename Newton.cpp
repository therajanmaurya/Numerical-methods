#include <iostream>
#include <cmath>

using namespace std;


/**
*   Function to evaluate the given function for finding the root .
**/
double f(double x) {

    return pow(x ,4) - x - 10;

}

/**
* Diff of Function f ;
**/
double fdiff(double x) {

    return 4* pow(x ,3) - 1;

}

double epsilon = 0.0000000001 ;

int main() {

    /**
    * Let initial approximation  x0,
    * temp is abs(x1 -x0) for comparing with epsilon
    **/
    double x0 = 0, x1 = 0, temp, i = 1;

    /**
    *   Initial approximation for the root x0
    **/
    cout << "Enter the First guess for the root x0 : ";
    cin >> x0;

    cout << "x0 = " << x0 << endl;

    /**
    *   Running the do while loop till that abs(x1 - x0) is not greater than epsilon ;  
    **/
    do {
        x1 = x0 - ( f(x0) / fdiff(x0) );
        temp = abs(x1 - x0);
        x0 = x1;
        cout << "x" << i++ << " = " << x0 << endl;

    } while (temp > epsilon);

    return 0;
}