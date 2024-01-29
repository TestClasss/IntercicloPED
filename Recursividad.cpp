#include <iostream>
using namespace std;

int factorial(int);
int factorialRecursiva(int);


int main()
{  
    cout<<factorial(5);
    cout<<factorialRecursiva(5);
    return 0;
}

int factorial(int num)
{
    int total = 1;
    for (int i = 1; i <= num; i++)
    {
        total *= i;
    }
    return total;
}

int factorialRecursiva(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return num * factorialRecursiva(num - 1);
}
