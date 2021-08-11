#include<iostream>

using namespace std;

long long a[91]; // 90번째 계산했을 때 값이 너무 커서 int 대신 long long 으로 수정 


long long fibonacci(int n) {
    a[0] = 0;
    a[1] = 1;
    for (int i = 0; i < n; i++) {
        a[i + 2] = a[i + 1] + a[i];
    }
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << "\n";

}
