#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //variables
    int rows;
    int asterisks;

    //outer loop says number of rows is less than 7, keep increasing value by 1 until reaches 7
    for (int rows = 0; rows < 7; rows++) {
        //inner loop says one asterisk printed, then value increased, repeat until value reaches 2^rows
        for (int asterisks = 0; asterisks < pow(2, rows); asterisks++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
