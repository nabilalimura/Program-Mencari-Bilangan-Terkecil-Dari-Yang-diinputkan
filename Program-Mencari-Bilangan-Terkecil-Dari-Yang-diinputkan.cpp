#include <iostream>
#include <conio.h>
using namespace std;
void bilangan ()
{
    int i,n;
    float max,min,bilangan;
    cout<<" Masukkan Jumlah Bilangan      = "; cin>>n;
    cout<<" Masukkan Bilangan Ke-1        = "; cin>>max;
    min=max;

    for(i=2;i<=n;i++){
    cout<<" Masukkan Bilangan Ke-"<<i<< " = "; cin>>bilangan;
    if (bilangan > max){
            max=bilangan;
    }
    if (bilangan < min){
            min=bilangan;
    }
}
cout<<"\nNilai Terbesar Dari Ke-"<<n<<" Bilangan Tersebut Adalah = " <<max;
cout<<"\nNilai Terkecil Dari Ke-"<<n<<" Bilangan Tersebut Adalah = " <<min;
}
int main ()
{
    bilangan ();
    getch ();
    return 0;
}
