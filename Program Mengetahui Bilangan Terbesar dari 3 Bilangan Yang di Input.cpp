#include<iostream>
using namespace std;
int main(){
int b1,b2,b3,terbesar;

cout<<"PROGRAM MENCARI BILANGAN TERBESAR DARI 3 BILANGAN YANG DI INPUTKAN"<<endl;
cout<<"Masukan Bilangan Pertama : ";
cin>>b1;
cout<<"Masukan Bilangan Kedua : ";
cin>>b2;
cout<<"Masukan Bilangan Ketiga : ";
cin>>b3;
{
if(b1>b2)
terbesar = b1;
else
terbesar = b2;
if(b3>terbesar)
terbesar = b3;
cout<<endl;
cout<<"Nilai Terbesar = "<<terbesar;
cout<<endl;

}
return 0;
}
