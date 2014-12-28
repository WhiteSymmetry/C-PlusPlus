#include <iostream>
using namespace std;
int x,a;
unsigned int b;
int main ()
{a=10;
b=6;
cout<<"Topla a+b: "<<a+b<<"\n";
cout<<"Çıkart a-b: "<<a-b<<"\n";
cout<<"Çarp a*b: "<<a*b<<"\n";
cout<<"Böl a/b: "<<a/b<<"\n";
cout<<"Modülü/Kalan : "<<a%b<<"\n";
cout<<"Küçükten Çıkart b-a: "<<b-a<<"\n";
cout<<"a'yı bir arttır ++a : "<<++a<<"\n";
cout<<"a: "<<a<<"\n";
cout<<"a'ya iki ekle a+2 : "<<a+2<<"\n";
cout<<"a++: "<<a++<<"\n" /* a++: a nın değerini gösterir fakat kendisinden sonra 1 artırır. ++a ise a nın değerini işlemden önce arttıtır.*/ ;
cout<<"a: "<<a<<"\n";
cout<<"a+a++: "<<a+a++<<"\n";
return 0;
}
