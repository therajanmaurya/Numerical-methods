# Assignment - Root Finding Methods
#### Rajan Maurya (72004)
###### *V.1 - Algorithms for Computational Mathematics: Numerical Methods*
###### *B. Tech. (Information Technology and Mathematical Innovations)*
###### *Cluster Innovation Centre, University of Delhi*

## Bisection Method

    /**
     - Program to find root of a polynomial using Bisection method.
     *
     - @author Rajan Maurya
     - @created 21-08-2015
     - @modified 27-08-2015
     */


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
            * a and b are the interval like [a,b] and c is 
            * the mid point between a and b.
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
            cout << "Finding Root in interval [" << a << "," << b << "]" 

            << "  using Bisection method" << endl;

            /**
             *  SetPrecision is the function to 
             *  set maximum of digit to cout of any value
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
                *   mid point of interval [a,b] and again so on
                **/
                c = (a + b) / 2;


                /**
                * Checking abs value and epsilon and value of f at c if equal 
                * to zero than exit
                **/

                if(abs(b-a) < 2*epsilon || f(c) == 0)
                {
                    cout << "the root is : " << c << " Iteration " 
                    << count << endl ;
                    break;
                }

                /**
                 * Sign of f at c
                 */
                float sfc = f(c) ;

                cout << "Iteration Number : " << count << endl;
                cout << "[a,b] :" << "[" << a << "," 
                << b << "] " <<" c :" << c << endl;
                cout << "value of f(a) * f(b) : " 
                << f(a) * f(b) << " and f(c) : " << f(c) << endl;

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

#### Output

![Bisection Method](/home/rajan/Pictures/Bisection.png)

## Regula Falsi Method

    /**
     - Program to find root of a polynomial using Regula Falsi (False Position) method.
     *
     - @author Rajan Mauyra
     - @created 27-08-2015
     - @modified 27-08-2015
     */

    #include <iostream>
    #include <cmath>

    using namespace std;
    /**
    *Function definition ;
    *
    **/
    float f(float x);
    float epsilon = 0.0001;
    float  c1 ;

        int main() {

            /**
            * a and b are the interval like [a,b] and 
            * c is the mid point  between a and b.
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
            cout << "Finding Root in interval [" << a << "," 
            << b << "]" << " using Bisection method" << endl;

            /**
             *  SetPrecision is the function to set 
             *   maximum of digit to cout of any value
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
            * 3. c1 = c consecutive value of c is equal
            **/
            do {

                /**
                *   x intersection of function f
                **/
                c = b  - ((f(b)*(b-a))/(f(b) -f(a)));

                /**
                * Checking abs value and epsilon 
                *  and value of f at c if equal to zero than exit
                **/
                if(abs(b-a) < 2*epsilon || f(c) == 0 || c1 ==  c)
                {
                    cout << "the root is : " << c 
                    << " Iteration " << count << endl         ;
                    break;
                }

                /**
                 * Sign of f at c
                 */
                float sfc = f(c) ;

                cout << "Iteration Number : " << count << endl;
                cout << "[a,b] :" << "[" 
                << a << "," << b << "] " <<" c :" << c << endl;
                cout << "value of f(a) * f(b) : " 
                << f(a) * f(b) << " and f(c) : " << f(c) << endl;

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
                c1 = c;

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

#### Output

![Regula Falsi Method](/home/rajan/Pictures/falsi.png)

## Newton-Raphson Method

    /**
     + Program to find root of a polynomial using Newton-Raphson method.
     *
     + @author Rajan Maurya
     + @created 04-09-2015
     + @modified 04-09-2015
     */
      
    #include<iostream>
    #include<cmath>

    using namespace std;

    /**
    -   Function to evaluate the given function for finding the root .
    **/
    double f(double x) ;

    /**
    - Diff of Function f ;
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
            *   Running the do while loop till that abs(a1 - a0) is not 
            *   greater than epsilon ;
            **/
            do
            {
                a1 = a0 - ( f(a0) / fdiff(a0) );
                Abs = abs(a1 - a0);
                a0 = a1;
                cout << "a" << i++ << " = " << a0 << endl;

            } while (Abs > epsilon);
            cout << "Root Is : " << a0 ;

            return 0;
        }

    /**
    *   Function to evaluate the given function for finding the root .
    **/
    double f(double x) {

    return pow(x ,4) - x - 10;

    }

    /**
    -   Function derivative
    **/
    double fdiff(double x) {

    return 4* pow(x ,3) - 1;

    }

#### Output

![Newton-Raphson Method](/home/rajan/Pictures/newton.png)

## Secant Method

    /**
     - Program to find root of a polynomial using Bisection method.
     *
     - @author Rajan Maurya
     - @created 28-09-2015
     - @modified 28-09-2015
     */

    #include <iostream>
    #include <cmath>

    using namespace std;

    /**
    -   Function for evaluation
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
            *   Running the do while loop till that abs (X(i+1) -xi) 
            *   is not greater than epsilon
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
    -   Function for evaluation
    **/
    double f(double x)
    {
        return x*x*x*x-x-10;
    }


#### Output

![Secant Method](/home/rajan/Pictures/secant.png)

**THE END.**
