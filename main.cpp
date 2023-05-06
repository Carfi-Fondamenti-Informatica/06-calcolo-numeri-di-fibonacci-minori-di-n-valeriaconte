#include <iostream>
using namespace std;

int main() {
    int n=0;
    cout << "inserire un numero intero\n";
    cin >> n;
    int c=0, a=1, b=1;
    if (n>=2){
        cout << a << endl;
        cout << b << endl;

        while (c<(n-2)) {
            c++;
            int f;
            f = a + b;
            if (f <= n) {
                cout << f << endl;
            }
                else {
                    break;
                }
                a = b;
                b = f;
            }
            } else {
            cout << "1" << endl;
            cout << "1" << endl;
        }
    return 0;
}
