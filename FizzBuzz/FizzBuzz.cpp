/*
 Purpose:     This basic program will output numbers from 1 to 100 but for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz, for numbers that are both, print FizzBuzz.
 Author:      Braeden Corr
 Date:        May 13th, 2022
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz\n";
        }
        else 
        {
            cout << i << "\n";
        }
    }    
}
