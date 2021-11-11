#include <iostream>
using namespace std;
int main() {
    int n=0, x1=0, x2=1, x3=x1+x2;
    cin >> n;
    if (n>=2){
        cout << "1" << endl;
        cout << x2 << endl;
        for(int i=2; i<n; i++){
            x1=x2;
            x2=x3;
            x3=x1+x2;
            cout << x3 << endl;
        }
    }else{
        cout << "errore";
    }
    return 0;
}
