#include <iostream>
using namespace std;

int main() {
    int n, f, a=1, b=1;
    cout << "inserire un numero intero\n";
    cin >> n;
    if (n<2){
        cout << "errore\n";
    }
    else {

        int c=0;
        cout << a << endl;
        cout << b << endl;
        while (c<(n-2)){
            c++;
            f=a+b;
            if (f<=n) {
                cout << f << endl;
                a = b;
                b = f;
            }
        }
    }
    return 0;
}
