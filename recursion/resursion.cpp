#include<iostream>
using namespace std;

int factorial(int n) 
{
    if (n <= 1)  // Base case
        return 1;
  
 return n * factorial(n - 1);  // Recursive call
}

int fibonacci(int n) 
{
    if (n <= 1)  // Base case
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int num;

    cout << "Enter a number for factorial: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;

    cout << "Enter a number for fibonacci: ";
    cin >> num;
    cout << "Fibonacci: " << fibonacci(num) << endl;

    return 0;
}
