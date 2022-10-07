#include "node.h"

using namespace std;

int main() {
    int n;
    cout << "******************parking lot management system****************" << endl;
    cout << endl;
    cout << "*****************Parking lot management system descriptions:" << endl;
    cout << "*****************1.when parking full, waiting in queue;" << endl;
    cout << "*****************2.price:5 yuan per hour;" << endl;
    cout << "*****************3.free to wait in queue;" << endl;
    cout << endl;
    Start:
    cout << "*****************please enter the total parking places number:" << endl;
    cin >> n;
    if (cin.good() != 1 || n <= 0) {
        cout << "wrong! enter again:" << endl;
        cin.clear();
        cin.sync();
        goto Start;
    }

    cout << endl;
    cout << "*******************************let get start" << endl;
    cout << endl;
    cout << "*******************************operations" << endl;
    cout << endl;
    cout << "****************************car in sign for 1;" << endl;

    cout << "***************************car out sign for 2;" << endl;

    cout << "**************************query parking for 3;" << endl;

    cout << "*********************query free parking for 4;" << endl;

    cout << "**************************************exit: 0;" << endl;

    cout << "=========================================================================" << endl;
    cout << endl;
    while (true) {
        cout << "PARKING lOGS:";
        Query_Empty(n);
        cout << endl;
        cout << "*************************************************************************" << endl;
        cout << "now please make a choice to do operation" << endl;
        cout << endl;
        cin.clear();
        cin.sync();
        int t;
        cin >> t;
        if (t == 1)
            Push_Car(n);
        else if (t == 2)
            Pop_Car(n);
        else if (t == 3)
            Query_Parking(n);
        else if (t == 4)
            Query_Empty(n);
        else if (t == 0)
            break;
        else
            cout << "wrong! please enter again" << endl;
        cout << endl;
        cout << "*************************************************************************" << endl;
        cout << endl;
    }
    return 0;
}
