#include <iostream>
using namespace std;

// inline function 
inline int cube (int s){
    return s*s*s;
}
int main (){
    int s;
    cout << "Enter the value of s " << endl;
    cin >> s;

    cout << "The cube of " << s << " is " << cube(s) << endl;
    return 0;
}