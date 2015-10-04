#include <iostream>
#include <cmath>

using namespace std;


/**
*   Function for evaluation
**/
double f(double x);


        int main()
        {

            /**
            *   Initial Guess x0 and x1
            **/
            double x0 , x1 , x2 = 0,temp,i=2;
            cout.precision(15);

            /**
            *   Enter the value of x0 and x1 ;
            **/

            cout << "Enter the First guess for the root of f : ";
            cin >> x0 ;
            cout << "Enter the Second guess for the root of f : ";
            cin >> x1 ;

            cout<<"x0 = " << x0 <<endl<< "x1 = " << x1<<endl ;

            /**
            *   Running the do while loop till that abs (X(i+1) -xi) is not greater than epsilon
            **/
            do
            {
                x2 = x0 - ((f(x0) * (x0 - x1)) / (f(x0) - f(x1)));

                x0 = x1;
                x1 = x2;

                cout <<"x"<<i++<<" = " << x2<<endl ;
                temp=abs(f(x2));

            }while(temp > 0.0000000001);

            cout<< "Approximate root is : " << x2 ;

            return 0;
        }

/**
*   Function for evaluation
**/
double f(double x)
{
    return x*x*x*x-x-10;
}
