#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
// class for all functions
class calculator
{
    void add();
    void sub();
    void multiply();
    void division();
    void sqr();
    void srt();
    void exit();
};

// declaring sum function
void calculator::add()
{
    int n, sum = 0, i, number;
    cout << "how many numbers you want to add : ";
    cin >> n;
    cout << "please enter the  number one by one : ";
    for (i = 1; i < n; i++)
    {
        cin >> number;
        sum = sum + number;
    }
    cout << "\n sum of the numbers is : " << sum;
}
void calculator::sub()
{
    int z, num1, num2;
    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;
    z = num1 - num2;
    cout << "\n subtraction of the number is : " << z;
}
void calculator::multiply()
{
    int num1, num2, mul;
    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;
    mul = num1 * num2;
    cout << "the  multiplication of two number is : " << mul;
}
void calculator::division()
{
    int num1, num2, div = 0;
    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;
    while (num2 == 0)
    {
        cout << "the divisor cannot be divided by 0 ";
        cin >> num2;
    }
    div = num1 / num2;
    cout << "\n the divison of two number are : " << div;
}
void calculator::sqr()
{
    int num1;
    float sq;
    cout << "/n enter a number you want to print : ";
    cin >> num1;
    sq = num1 * num1;
    cout << "the square of the number is : " << sq;
}
void calculator::srt()
{
    float q;
    int num1;
    cout << "enter the number you want to print : ";
    cin >> num1;
    q = sqrt(num1);
    cout << "\n the square rooot of the number is : " << q;
}
int main()
{
   
    int opr;
    do
    {
        cout << "select any operation you want to perform : ";
        "\n1 = Addition"
        "\n2 = Subtraction"
        "\n3 = Multiplication"
        "\n4 = Division"
        "\n5 = Square"
        "\n6 = Square Root"
        "\n7 = Exit"
        "\n \n Make a choice: ";
        cin >> opr;

        switch(opr)
        {
        case 1:
            add();
            break;
        case 2:
        sub();
            break;
        case 3:
            multiply();
            break;
        case 4:
            division();
            break;
        case 5:
            sqr();
            break;
        case 6:
            srt();
            break;
        case 7:
            exit(0);
        default:
            cout << "something is wrong";
            break;
        }
    }while(opr!=7);
    getch()
}
