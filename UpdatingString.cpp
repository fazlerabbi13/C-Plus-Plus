#include <iostream>
using namespace std;

int main() {
    string str1 = "Geeks";
    string str2 = "Gueks";
    cout << str1 << endl;
    cout << str2 << endl;
    
    // Updating string
    str1 = "Geeky";
    str2[1] = 'e';
    cout << str1<<endl;
    cout << str2<<endl;

    return 0;
}