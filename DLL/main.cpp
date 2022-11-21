#include<iostream>
#include"calci.h"
using namespace std;
int main()
{
    int a=10;
    int b=5;
    cout << "Sum is: "
         << sumOfTwoNumbers(a, b)
         << endl;
    cout << "Difference is: "
         << diffOfTwoNumbers(a, b)
         << endl;
    cout << "Product is: "
         << ProductOfTwoNumbers(a, b)
         << endl;
    return 0;

}