// ET283 Lab3 02212024.cpp
// Valeria De La Cruz, 02212024
//testing a number for being prime or not; number should be relatively small, no more than 100000, for keeping required computation reasonable

#include <iostream>
#include <cassert>


using namespace std;

int main()
{
    int i, Number;
    double Sqr_root;  //actual squareroot
    int Sqr, divisor;  //squareroot will show as Sqr

    cout << "Enter an integer number less than 100,000 to be tested for prime:"; 
    cin >> Number; cout << endl;
    assert((Number > 0) && (Number < 100000));  //to make number positive (checking for integer), and below 100000

    if ((Number % 2 == 0))  //entered number is even
        cout << "The entered number," << Number << "is even, and not prime!" << endl;  //reporting that number entered is not even/prime
    else
    {
        Sqr_root = pow(Number, 0.5); //gives squareroot, (^) does not work here
        i = 0; 
        while (i <= Sqr_root)
            i++;
        Sqr = i - 1;  // !! isnt it + 1 ??
        cout << "Square root converted to integer is:" << Sqr << endl;

        // Find the divisor if any exits.
        i = 3;
        while (((Number % i) != 0) && (i <= Sqr))
            i = i + 2;

        //Think about the following few statements
        if (i <= Sqr)  //found the divisor!

        {
            divisor = Number / i;
            cout << "The entered number is not prime, " << Number << "=" <<
                divisor << "*" << i << endl;
        }
        else  //when it is prime ..
            cout << "The entered number" << Number << " is prime!" << endl;
    }
    return 0;
}
