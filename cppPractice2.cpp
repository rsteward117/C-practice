#include <iostream>
using namespace std;

int main() {

    // int
    int number;
    // this sends output to the console
    cout << "Enter a number: ";
    // this gets input from the user
    cin >> number;

    if(number <= 0){
        cout << "Please enter a number greater than 0." << endl;
    }else{
        // this outputs the value to the console
    cout << "You entered: " << number << " this is greater than 0." << endl;
    }



    return 0;
}
