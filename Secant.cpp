#include <iostream>
#include <cmath>

using namespace std;


/**
*   Function for evauation
**/
double f(double x)
{
    return x*x*x*x-x-10;
}

int main()
{

    /**
    *   Initial Guass x0 and x1 
    **/
    double x0 = 1, x1 = 2, x2 = 0,temp,i=2;
    cout.precision(15);

    /**
    *   Enter the value of x0 and x1 ;
    **/

    cout << "Enter value of x0 : ";
    cin >> x0 ;
    cout << "Enter value of x1 : ";
    cin >> x1 ;

    cout<<"x0 = " << x0 <<endl<< " | x1 = " << x1<<endl ;

    /**
    *   Running the do while loop till that abs (X(i+1) -xi) is not greater than epsilon
    **/
    do {
        x2 = x0 - f(x0) * (x0 - x1) / (f(x0) - f(x1));

        x0 = x1;
        x1 = x2;

        cout <<" | x"<<i++<<" = " << x2<<endl ;
        temp=abs(f(x2));
        
    }while(temp > 0.0000000001);


    return 0;
}