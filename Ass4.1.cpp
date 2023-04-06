#include <iostream>

using namespace std;

int main()
{
    int num; //decalring a variable of type int

    cout << "Enter an integer between 1 and 99: "; //prompting the user to enter the number 

    cin >> num; //getting input from the user

    if (num >= 1 && num <= 99) //checking if the number is in range
    {
        if (num > 9) {  //checking if the number has 2 digits
            cout << "Number is positive and has 2 digits"; //prinitng that the number has two digits
        }
        else {  //checking if the number has 1 digit
            cout << "Number is positive and has 1 digit";  //printing that the number has 1 digit
        }
    }
    else { //checking if the input is out of range or invalid
        cout << "Number is invalid"; //priniting that the input is out of range or invalid
    }
    return 0;
}
