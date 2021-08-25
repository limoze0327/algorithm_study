#include <iostream>
#include <cstring>
#include <stack>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(void) {

    while (1) {
        stack<char> s;
        int i;
        char str[101];
        int check = 1;

        cin.getline(str, 101);
        int len = strlen(str);

        if (str[0] == '.') break;

        for (i = 0; i < len; i++) {
            if (str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    check = 0;
                    break;
                }
            }
            else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    check = 0;
                    break;
                }
            }
        }

        if (check && s.empty()) {
            cout << "yes\n"; }
        else { 
            cout<< "no\n"; }
    }
}
