#include <iostream>
#include <cmath>
using namespace std;

/**
*   Function for evaluation 
**/
float f (float x)
{
    return  tan(x)-x-1 ;
}


int main()
{
    /**
    *   x1 , b are the initial guesses
    **/ 
    float x1,b,c;
    cout.precision(15);

    /**
    *   count for counting number of iteration done after every execution of loop
    *   iter is , how much iteration user want  
    **/
    int count=0,iter;

    /**
    *   Enter the initial guess x1;
    **/
    cout <<"Enter x1 = ";
    cin >> x1;

    /**
    *   Enter the initial guess b ;
    **/
    cout <<"Enter b = ";
    cin >> b;

    /**
    *   Enter the number iteration for execution of program
    **/
    cout <<"Enter number of iterations : ";
    cin >> iter;

    /**
    *   execute the do while loop till that abs(x1 - b) is greater than epsilon and
    *   f at c is equal to zero ;
    **/
    do
    {
        /**
        *   Checking the user given iteration number is equal to count number or not  if true break
        **/
        if(count == iter)
        {
            break;
        }


        c = x1 - (f(x1)*((x1 - b) /( f(x1) - f(b))));

        cout <<"x1=" << x1 <<"   b="<< b <<"   c=" << c <<"   " << "  f(x1)=" << f(x1) << "    f(b)=" << f(b) << "    f(c)=" << f(c) << endl << endl;


        if( f(x1) * f(c) < 0 )
        {
            b = c;
        }
        else
        {
            x1 = c;
        }
        count++;
    }while (  abs(x1 - b) > 0.00000000001 || f(c) ==0);

}