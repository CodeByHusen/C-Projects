#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


void addittion();
void subtraction();
void multiolication();
void division();
void squaring();
void square_Root();
void Even_or_not();
void power();
void Table_of_contents();
void determinant();

int main()
{
    int operation;

    do
    {
        cout << "Press Any Key to start the Program!\n";
       _getch();
        cout << "\nSelect the operation using a number: ";
        cout << "\n1-Adition"
            "\n2- Subtraction"
            "\n3- Multiolication"
            "\n4- Division"
            "\n5- Squaring"
            "\n6- Square Root"
            "\n7- Even or not"
            "\n8- Power"
            "\n9- Table of contents"
            "\n10- Determinant"
            "\n11- Exit";
        cout << "\n==========================\n";
        cout << "Chose A number: ";
        cin >> operation;
        cout << "==========================\n";


        switch (operation)
        {
        case 1:
            addittion();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiolication();
            break;
        case 4:
            division();
            break;
        case 5:
            squaring();
            break;
        case 6:
            square_Root();
            break;
        case 7:
            Even_or_not();
            break;
        case 8:
            power();
            break;
        case 9:
            Table_of_contents();
            break;
        case 10:
            determinant();
            break;
        case 11:
            exit(0);
        default :
            cout << "==========================\n";
            cout << "Enter a listed number !!\n";
            cout << "==========================\n";
            main();
            break;

        }
    } while (operation != 11);






    return 0;
}

void addittion()
{
    float num_of_numbers, num, sum = 0;
    cout << "Enter the number of numbers: ";

    cin >> num_of_numbers;
    cout << "==========================\n";
    for (int i = 1; i <= num_of_numbers; i++)
    {
        cout << "Enter number " << i << ": " << endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "==========================\n";
    cout << "The Sum of the " << num_of_numbers << " numbers" << " = " << sum << endl;
    cout << "==========================\n";

}


void subtraction()
{
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "The Subtraction of " << number1 << " - " << number2 << " = " << number1 - number2;
    cout << "\n=======================================\n";
}

void multiolication()
{
    float num, numOfNumbers, multi = 1;
    cout << "Enter the number of numbers: \n";
    cin >> numOfNumbers;
    for (int i = 1; i <= numOfNumbers; i++)
    {
        cout << "Enter Number " << i << ": ";
        cin >> num;
        multi = multi * num;
    }
    cout << "=======================================\n";
    cout << "The Multiplication of the " << numOfNumbers << " numbers = " <<multi;
    cout << "\n=======================================\n";
    
}


void division()
{
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    if (number2 == 0)
    {
        cout << "=======================================\n";
        cout << "Division by zero is incorrect!!!";
        cout << "\n=======================================\n";
    }
    else {
        cout << "The Division of " << number1 << " / " << number2 << " = " << number1 / number2;
    }
    
    cout << "\n=======================================\n";
}



void squaring()
{
    float num, result;
    cout << "Enter the number to be squared: ";
    cin >> num;
    result = num * num;
    cout << "The square of " << num << " = " << result;
    cout << "\n=======================================\n";
}


void square_Root()
{
    float num,result;
    cout << "Enter number you want to find its square Root: ";
    cin >> num;

    result = sqrt(num);
    cout << "The square Root of " << num << " = " << result;
    cout << "\n===================================\n";

}

void Even_or_not()
{
    int num, result;
    cout << "Enter a number to check Even or Odd: ";
    cin >> num;
    result = num % 2;
    if (result == 0)
    {
        cout << "The number " << num << " is Even\n";
        cout << "============================\n";
    }
    else
    {
        cout << "The number " << num << " is odd\n";
        cout << "============================\n";
    }
}

void power()
{
    float num, p, result;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the Power: ";
    cin >> p;
    result = pow(num, p);
    cout << num << "^"<< p << " = " << result;
    cout << "\n=================================\n";
}

void Table_of_contents()
{
    void table_numbers();
    void table_string();

    int choice;
    do
    {
        cout << "Enter the type of data: "
            "\n1- Integers"
            "\n2- String"
            "\n3- Exit\n";
        cout << "chose a number: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            table_numbers();
            break;
        case 2:
            table_string();
        case 3:
            main();
            break;
        default:
            cout << "Enter a Valid number!!\n";
            Table_of_contents();
            break;
        }
        

    } while (choice != 3);






}

void table_numbers()
{
    int numOfNumbers;
    cout << "Enter the number of numbers; ";
    cin >> numOfNumbers;
    float *numbers = new float[numOfNumbers];

    for (int i = 1; i <= numOfNumbers; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> numbers[i-1];
    }
    cout << "Table of numbers"
        "--\n--------------\n";
    for (int i = 0; i < numOfNumbers; i++)
    {
        cout << "- " << numbers[i]<<endl;
    }
}


void table_string()
{
    int numOfStrings;
    cout << "Enter the number of Strings; ";
    cin >> numOfStrings;
    string *strings = new string[numOfStrings];

    for (int i = 1; i <= numOfStrings; i++)
    {
        cout << "Enter Strings " << i << ": ";
        cin >> strings[i - 1];
    }
    cout << "Table of Strings"
        "--\n--------------\n";
    for (int i = 0; i < numOfStrings; i++)
    {
        cout<<i+1 << "- " << strings[i] << endl;
    }

}

void determinant()
{
    void determinant_2D();
    void determinant_3D();
    int choice;
    cout << "determine whether 2D or 3D: "
        "\n1- 2D"
        "\n2- 3D\n";
    cout << "Chose a number: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        determinant_2D();
        break;
    case 2:
        determinant_3D();
        break;
    default:
        cout << "Enter a listed number!!\n";
        determinant();
        break;
    }




}

void determinant_2D()
{
    float elem1, elem2, elem3, elem4, result;
    cout << "Enter the first row: "
        "\nFirst number: ";
    cin >> elem1;
    cout << "Second number: ";
    cin >> elem2;

    cout << "Enter the Second row: "
        "\nFirst number: ";
    cin >> elem3;

    cout << "Second number: ";
    cin >> elem4;
    result = elem1 * elem4 - elem2 * elem3;

    cout << " | " << elem1 << " " << elem2 << " | \n";
    cout << " | " << elem3 << " " << elem4 << " | \n";
    cout << " = " << result << endl;



}

void determinant_3D()
{
    float elem1, elem2, elem3, elem4, elem5, elem6, elem7, elem8, elem9, x,y,z;
    cout << "Enter the first row: "
        "\nFirst number: ";
    cin >> elem1;
    cout << "Second number: ";
    cin >> elem2;
    cout << "Third number: ";
    cin >> elem3;


    cout << "Enter the Second row: "
        "\nFirst number: ";
    cin >> elem4;
    cout << "Second number: ";
    cin >> elem5;
    cout << "Third number: ";
    cin >> elem6;

    cout << "Enter the Third row: "
        "\nFirst number: ";
    cin >> elem7;
    cout << "Second number: ";
    cin >> elem8;
    cout << "Third number: ";
    cin >> elem9;

    x = elem1 * (elem5 * elem9 - elem6 * elem8);
    y = -elem2 * (elem4 * elem9 - elem6 * elem7);
    z = elem3 * (elem4 * elem8 - elem5 * elem7);

    cout << "|  " << elem1 << "  " << elem2 << "  " << elem3 << "  |  " << endl;
    cout << "|  " << elem4 << "  " << elem5 << "  " << elem6 << "  |  " << " \n";
    cout << "|  " << elem7 << "  " << elem8 << "  " << elem9 << "  |  " << endl;

    cout << "=======================================\n";
    cout << " = " << x + y + z;
    cout << "\n=======================================\n";
 
}