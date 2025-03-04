//including the input output library
#include <iostream>

//using the standard namespace
using namespace std;

int main() {
    //declaring variable to store user input
    int num;

    //promting user to enter a number
    cout << "Enter an number: ";
    //reading user input and storing it in num variable
    cin >> num;

    // checking if the number is even or odd
    //if num is divisible by 2 with no remainder, its even
    if(num % 2 == 0){
        //printing the output
        cout << num << " is an even number." << endl;
    }
    //if num is not divisible by 2 and has remainder, its odd
    else{
        //printing the output
        cout << num << " is an odd number." << endl;
    }
//returning 0 to end the program
    return 0;
}