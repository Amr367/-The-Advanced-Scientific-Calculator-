#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void addition();         // Function for addition operation
void subtraction();     // Function for subtraction operation
void Multiplication();  // Function for multiplication operation
void division();        // Function for division operation
void squaring();        // Function for squaring operation
void squareRoot();      // Function for square root operation
void isEven();          // Function to check if a number is even or odd
void power();           // Function for power operation
void table_items();     // Function to display a menu for table operations
void determinant();     // Function to display a menu for determinant operations



int main()
{
    int operation;
    do
    {
        cout << "\nPress Any Key to Start The Program!\n";
        getch();
        cout << "\nSelect the operation using a number: ";
        cout <<
        "\n1- Addition"
        "\n2- Subtraction"
        "\n3- Multiplication"
        "\n4- Division"
        "\n5- Squaring"
        "\n6- Square Root"
        "\n7- Even or not"
        "\n8- Power"
        "\n9- Table of contents"
        "\n10- Determinant"
        "\n11- Exit";
        cout << "\n=====================\n";
        cout << "Choose A number: ";
        cin >> operation;
        cout << "=====================\n";

        switch(operation)
        {
        case 1:
            addition();   // Function for addition operation
            break;

        case 2:
            subtraction();   // Function for subtraction operation
            break;

        case 3:
            Multiplication(); // Function for multiplication operation
            break;

        case 4:
            division();   // Function for division operation
            break;

        case 5:
            squaring();     // Function for squaring operation
            break;

        case 6:
            squareRoot();   // Function for square root operation
            break;

        case 7:
            isEven();    // Function to check if a number is even or odd
            break;

        case 8:
            power();   // Function for power operation
            break;

        case 9:
            table_items();   // Function to display a menu for table operations
            break;

        case 10:
            determinant();    // Function to display a menu for determinant operations
            break;

        case 11:
            exit(0);

        default:
            cout << "====================\n";
            cout << "Enter a listed number !!\n";
            cout << "====================\n";
            main();
            break;
        }



    }while(operation != 11);

    return 0;
}


void addition()                     // Function for addition operation
{
    int num_of_numbers ;
    float num , sum = 0;
    cout << "Enter the number of numbers: \n";
    cout << "====================\n";
    cin >> num_of_numbers;
    cout << "====================\n";

    for (int i = 1 ; i <= num_of_numbers ; i++)
    {
        cout << "Enter Number " << i << ": " << endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "====================\n";
    cout << "The Sum of the " << num_of_numbers << " numbers "<< " = " << sum;
    cout << "\n====================\n";
}

void subtraction()               // Function for subtraction operation
{
    float num1 , num2 , result;

    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    result = num1 - num2 ;
    cout << "======================================\n";
    cout << "The subtraction of " << num1 << " - " << num2
    << " = " << result << endl;
    cout << "======================================\n";
}


void Multiplication()       // Function for multiplication operation
{
    float num , numOfNumbers , multi = 1;
    cout << "Enter the number of numbers: \n";
    cin >> numOfNumbers;

    for(int i = 1 ; i <= numOfNumbers ; i++)
    {
        cout << "Enter Number " << i << ": \n" ;
        cin >> num;
        multi = multi * num;
    }

    cout << "======================================\n";
    cout << "The multiplication of the " << numOfNumbers << " numbers = " << multi << endl;
    cout << "======================================\n";
}


void division()      // Function for division operation
{
    float num1 , num2 , result;

    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;

    if (num2 == 0)
    {
        cout << "=================================\n";
        cout << "Division by zero is incorrect!!\n";
        cout << "=================================\n";
    }
    else
    {
        result = num1 / num2 ;
        cout << "======================================\n";
        cout << "The Division of " << num1 << " / " << num2
        << " = " << result << endl;
        cout << "======================================\n";
    }

}

void squaring()     // Function for squaring operation
{
    float num , result;
    cout << "Enter the number to be squared: \n";
    cout << "===================================\n";
    cin >> num;
    cout << "===================================\n";
    result = num * num;
    cout << "===================================\n";
    cout << "The square of " << num << " = " << result;
    cout << "\n===================================\n";
}


void squareRoot()    // Function for square root operation
{
    float num , result;
    cout << "Enter the number you want to find its sqrt: \n";
    cout << "===================================\n";
    cin >> num;
    cout << "===================================\n";
    result = sqrt(num);
    cout << "===================================\n";
    cout << "The square root of " << num << " = " << result;
    cout << "\n===================================\n";


}

// ----------------------NO 404-----------------------------------------------------

void isEven()       // Function to check if a number is even or odd
{
    int num;
    cout << "Enter the number to check: \n";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "===================================\n";
        cout << num << " is even ";
        cout << "\n===================================\n";
    }

    else
    {
        cout << "===================================\n";
        cout << num << " is odd ";
       cout << "===================================\n";
    }


}

void power()    // Function for power operation
{
    float num , power;
    cout << "Enter the number: \n";
    cin >> num;
    cout << "Enter the power: \n";
    cin >> power;

    cout << "===================================\n";
    cout << num << " ^ " << power << " = " << pow(num , power);
    cout << "\n===================================\n";
}




void table_items()    // Function to display a menu for table operations
{
    void table_numbers();    
    // Function for displaying a table of numbers
    void table_strings();    
    // Function for displaying a table of strings

    int choice;
    do
    {
        cout << "Enter the type of data: "
        "\n1- Integers"
        "\n2- Strings"
        "\n3- Exit\n";
        cout << "choose a number: \n";
        cin >> choice;
        switch(choice)
        {
        case 1:
            table_numbers();     // Function for displaying a table of numbers
            break;

        case 2:
            table_strings();     // Function for displaying a table of strings
            break;

        case 3:
            main();
            break;

        default:
            cout << "enter a valid number!\n";
            table_items();
            break;

        }
    }while(choice != 3);


}


void table_numbers()  // Function for displaying a table of numbers
{
    int numOfNumbers;
    cout << "Enter the number of numbers: \n";
    cin >> numOfNumbers;
    float numbers[numOfNumbers];

    for (int i = 1 ; i <= numOfNumbers ; i++)
    {
        cout << "Enter number " << i << ": " << endl;
        cin >> numbers[i-1];
    }

    cout << "Table of numbers"
            "\n----------------\n";

    for (int i = 0 ; i < numOfNumbers ; i++)
    {
        cout << "- " << numbers[i] << endl;
    }
}

void table_strings()   // Function for displaying a table of strings
{
    int numOfStrings;
    cout << "Enter the number of Strings: \n";
    cin >> numOfStrings;
    float strings[numOfStrings];

    for (int i = 1 ; i <= numOfStrings ; i++)
    {
        cout << "Enter String " << i << ": " << endl;
        cin >> strings[i-1];
    }

    cout << "Table of Strings"
            "\n----------------";

    for (int i = 0 ; i < numOfStrings ; i++)
    {
        cout << i+1 << "- " << strings[i] << endl;
    }
}


void determinant()             // Function to display a menu for determinant operations
{
    void determinant_2D();   
       // Function for calculating the determinant of a 2D matrix
    void determinant_3D();    
    // Function for calculating the determinant of a 3D matrix

    int choice;
    cout << "determine whether 2D or 3D: "
    "\n1- 2D"
    "\n2- 3D\n";
    cout << "choose a number: \n";
    cin >> choice;

    switch(choice)
    {
    case 1:
        determinant_2D();     // Function for calculating the determinant of a 2D matrix
        break;

    case 2:
        determinant_3D();   // Function for calculating the determinant of a 3D matrix
        break;

    default:
        cout << "Enter a listed number!\n";
        determinant();
        break;
    }


}
void determinant_2D()     // Function for calculating the determinant of a 2D matrix
{
    float elem1 , elem2 , elem3 , elem4 , result;

    cout << "Enter the first row"
    "\nFirst number: \n";
    cin >> elem1;
    cout << "\nSecond number: \n";
    cin >> elem2;
//---------------------------------------------------
    cout << "Enter the second row"
    "\nFirst number: \n";
    cin >> elem3;
    cout << "\nSecond number: \n";
    cin >> elem4;
//-----------------------------------------------------
    result = elem1 * elem4 - elem2 * elem3;

    cout << " | " << elem1 << "  " << elem2 << " | \n";
    cout << " | " << elem3 << "  " << elem4 << " | ";
    cout << " = " << result;


}

void determinant_3D()     // Function for calculating the determinant of a 3D matrix
{

    float elem1 , elem2 , elem3 , elem4 , elem5
    , elem6 , elem7 ,elem8 , elem9 , x , y , z;

    cout << "Enter the first row"
    "\nFirst number: \n";
    cin >> elem1;
    cout << "\nSecond number: \n";
    cin >> elem2;
    cout << "\nThird number: \n";
    cin >> elem3;
 // -----------------------------------------------------

    cout << "Enter the second row"
    "\nFirst number: \n";
    cin >> elem4;
    cout << "\nSecond number: \n";
    cin >> elem5;
    cout << "\nThird number: \n";
    cin >> elem6;

//--------------------------------------------------------------------

    cout << "Enter the Third row"
    "\nFirst number: \n";
    cin >> elem7;
    cout << "\nSecond number: \n";
    cin >> elem8;
    cout << "\nThird number: \n";
    cin >> elem9;
//--------------------------------------------------------------------------
    x =  elem1 * (elem5 * elem9 - elem6 * elem8);
    y = -elem2 * (elem4 * elem9 - elem6 * elem7);
    z = elem3 * (elem4 * elem8 - elem5 * elem7);

    cout << "|  " << elem1 << "  " << elem2 << "  " << elem3 << "  |  " << endl ;
    cout << "|  " << elem4 << "  " << elem5 << "  " << elem6 << "  |  " << endl ;
    cout << "|  " << elem7 << "  " << elem8 << "  " << elem9 << "  |  " << endl ;

    cout << "==================\n";
    cout << " = " << x + y + z;
    cout << "\n==================\n";

}


