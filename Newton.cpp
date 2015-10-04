#include <iostream>
#include <cmath>

using namespace std;


/**
*   Function to evaluate the given function for finding the root .
**/
double f(double x) ;

/**
* Diff of Function f ;
**/
double fdiff(double x);

double epsilon = 0.0000000001 ;

        int main()
        {

            /**
            * Let initial approximation  a0,
            * Abs is abs(a1 -a0) for comparing with epsilon
            **/
            double a0 = 0, a1 = 0, Abs, i = 1;

            /**
            *   Initial approximation for the root a0
            **/
            cout << "Enter the First guess for the root of f : ";
            cin >> a0;

            cout << "a0 = " << a0 << endl;

            /**
            *   Running the do while loop till that abs(a1 - a0) is not greater than epsilon ;
            **/
            do
            {
                a1 = a0 - ( f(a0) / fdiff(a0) );
                Abs = abs(a1 - a0);
                a0 = a1;
                cout << "a" << i++ << " = " << a0 << endl;

            } while (Abs > epsilon);

            return 0;
        }

/**
*   Function to evaluate the given function for finding the root .
**/
double f(double x) {

    return pow(x ,4) - x - 10;

}

/**
*   Function derivative
**/
double fdiff(double x) {

    return 4* pow(x ,3) - 1;

}