#include <iostream>

using namespace std;

int main() {
    int a;

     //input data
     cout<< "masukan nilai:";
     cin>>a;

    //pengkondisian
    if(a>=90) {
        cout<< "Selamat!Anda mendapatkan nilai a"<<endl;
    }
    else if(a>=80&&a<=89) {
        cout<< "Anda mendapatkan nilai B"<<endl;
    }
    else if(a>=70&&a<=79) {
        cout<< "Anda mewndapatkan nilai C"<<endl;
    }
    else if(a>=60&& a<=69) {
        cout<< "Anda mendapatkan nilai D"<<endl;
    }
    else if (a<60) {
        cout<< "Anda mendapatkan nilai E"<<endl;

    }

    return 0;
}
