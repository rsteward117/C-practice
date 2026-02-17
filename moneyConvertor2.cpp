//Randy
//program to convert dollars to euros and vice versa

#include <iostream>
using namespace std;

int main() {
    // declare variables for dollars and euros
	double dollars = 0, euros = 0;
    double rate = 0.84227;

    // gets the user input
    cout << "please enter the dollars to convert: " << endl;
    cin >> dollars;

    // go from dollars to euros
    euros = dollars * rate;
        cout << "Converted amount in euros: " << euros << endl;

    // go from euros to dollars
    dollars = euros / rate;
        cout << "Converted amount in dollars: " << dollars << endl;
    return 0;
}
