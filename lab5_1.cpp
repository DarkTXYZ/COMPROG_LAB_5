#include <iostream>
using namespace std;

int main(){
    int input = -1;
    int cnteven = 0 , cntodd = 0;
    cout << "Enter an integer: ";
    cin >> input;
    while(input){
        if(input % 2 == 0)
            cnteven++;
        else
            cntodd++;
        cout << "Enter an integer: ";
        cin >> input;
    }
    cout << "#Even numbers = " << cnteven << endl;
    cout << "#Odd numbers = " << cntodd << endl;
    return 0;
}
