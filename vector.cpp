// THE VECTOR -> syntax, boilerplate and stuff
#include <iostream>
#include <vector>

using namespace std;

int main () {

    //Luther int type 
    cout << endl;

    vector <int> Luther = { 0, 1, 2, 3 };
    for (int value : Luther) {
        cout << value << " ";
    }

    cout << endl;
    cout << " -> Size of Luther is: " << Luther.size();
    Luther.push_back(4);

    cout << endl;
    cout << " -> Pushed 4 in Luther array." << endl;

    for (int value : Luther) {
        cout << value << " ";
    }
    
    cout << endl;
    cout << " -> Size of new Luther is: " << Luther.size();

    cout << endl << endl;

    //Bibek char type
    vector <char> Bibek = { 'a', 'b', 'c', 'd', 'e' };
    for (char value : Bibek) {
        cout << value << " ";
    }
    Bibek.push_back('f');
    cout << endl;

    cout << " -> Pushed f in Bibek array." << endl;

    for (char value : Bibek) {
        cout << value << " ";
    }
    cout << endl;

    cout << " -> Size of Bibek is: " << Bibek.size();

    cout << endl << endl;

    //Aman bull type
    vector <bool> Aman = { false, true, 0, 1};
    for (bool value : Aman) {
        cout << value << " ";
    }

    return 0;
}
