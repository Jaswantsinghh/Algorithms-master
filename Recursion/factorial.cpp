#include <iostream>

using namespace std;
int factorial(int n);
int main()
{
    int num;
    cout << "Enter a number to find factorial." << endl;
    cin >> num;
    printf("%ld",factorial(num));
    return 0;
}
int factorial(int n)
{
    long int fact=0;
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else{
        fact=n*factorial(n-1);
    }
    return fact;
}
