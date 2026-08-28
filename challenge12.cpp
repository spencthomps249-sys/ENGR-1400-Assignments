// Challenge 12

#include <iostream>
using namespace std;

int main()
{
    //intializing variables
    int acre = 43560,
        totalSqFt = 391876,
        numAcres;

    // Calculation
    numAcres = totalSqFt/acre;
    //output
    cout << "Your " << totalSqFt << " SqFt is " << numAcres << " acres";

    return 0;
}
