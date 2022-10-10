#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n\n";
    cout << "                   CONVERTING FOR LOOP CODE INTO WHILE LOOP" << endl <<"\n";


    cout <<"                     Objective: To print the Total loops" << endl << "\n";

    cout << "================================================================================" << endl;
    int num, i = 0, sum =0;
    cout << "   Enter a number: ";
    cin>> num;

    while (i <= num ) {
     sum += i;
     ++i;
    }
    cout << "\n\n";

    cout << "  The number you enter is: " <<  num << endl <<endl;
    cout << "  Now You have a total loop of: " << sum << endl << endl;
    cout << "================================================================================" << endl << "\n";
    cout << "                Submitted by: John Clark L. Bernandino" << "\n";
    cout << "                Submitted to: John Dennis Z. Ezpiritu" << "\n";
    return 0;
}
