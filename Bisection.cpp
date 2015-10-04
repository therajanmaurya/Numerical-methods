#include <iostream>
#include <cmath>

using namespace std;


/**
*Function definition ;
*
**/
float f(float x);
float epsilon = 0.0001;

        int main() {

            /**
            * a and b are the interval like [a,b] and c is the mid point between a and b.
            * Abs is the absolute value of (a-b) ;
            **/
            float a, b, c, Abs;

            /**
            *count is for counter for counting the number of iteration
            **/
            int count = 1;


            /**
            *Taking the user input for interval.
            *Enter the value a and b or interval [a,b]
            */
            cout << "Enter the value of 'a' of interval [a,b] : ";
            cin >> a;
            cout << "Enter the value of 'b' of interval [a,b] : ";
            cin >> b;
            cout << "Finding Root in interval [" << a << "," << b << "]" << " using Bisection method" << endl;

            /**
             *  SetPrecision is the function to set maximum of digit to cout of any value
             */
            cout.precision(10);


            /**
             * Sign of f at a
             */
            double sfa = f(a);
            /**
            *Running the do while loop till that
            * 1. abs(a-b) > epsilon
            * 2. f(c) = 0 where c is any point between [a,b]
            * these are two termination condition
            **/
            do {



                /**
                *	mid point of interval [a,b] and again so on
                **/
                c = (a + b) / 2;


                /**
                * Checking abs value and epsilon and value of f at c if equal to zero than exit
                **/

                if(abs(b-a) < 2*epsilon || f(c) == 0)
                {
                    cout << "the root is : " << c << " Iteration " << count << endl         ;
                    break;
                }

                /**
                 * Sign of f at c
                 */
                float sfc = f(c) ;

                cout << "Iteration Number : " << count << endl;
                cout << "[a,b] :" << "[" << a << "," << b << "] " <<" c :" << c << endl;
                cout << "value of f(a) * f(b) : " << f(a) * f(b) << " and f(c) : " << f(c) << endl;

                /**
                * Checking the f(a)*f(c) < 0;
                * if yes than root lie between a and c ;
                * if No  than root lie between c and b ;
                **/
                if (sfa * sfc < 0) {
                    b = c;
                }
                else {
                    a = c;
                    sfa = sfc ;
                }

                /**
                * Count for basically for counting the number of count ;
                **/
                count++;
            }while (true);

        }

/**
*Function to evaluate the given function for finding the root .
*
**/
float f(float x)
{
    return pow(x, 4) - x - 10;
}