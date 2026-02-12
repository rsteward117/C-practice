//Randy
//program to convert dollars to euros and vice versa

#include <iostream>
using namespace std;

int main() {
    // declare variables for dollars and euros
	double dollars = 0, euros = 0;

    euros = .84227; //1 dollar to euro

    // gets the user input
    cout << "please enter the dollars to convert: " << endl;
    cin >> dollars;

    // process the conversion
    dollars = dollars * euros;
        cout << "Converted amount in euros: " << dollars << endl;

        // go from euros to dollars
        dollars = euros / .84227;
        cout << "Converted amount in dollars: " << dollars << endl;
    return 0;
}
