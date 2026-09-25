
#include <iostream>
#include <stack>
using namespace std;

int main() {
    system("cls");
    stack<int> tumpukan;
    int input;

    while(cin >> input) {
        tumpukan.push(input);
    }

    while(tumpukan.size() != 0) {
        cout << tumpukan.top() << " ";
        tumpukan.pop();
    }

    cout << endl;
    system("pause");
    return 0;
}