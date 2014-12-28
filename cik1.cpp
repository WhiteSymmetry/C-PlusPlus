#include <iostream>
 using namespace std;
 int main (int argc, char *argv[])
{
char cik;
 cik = '\0';
while (cik != 'a')
{
cout << "Merhaba Dünyâ" << endl;
cout << "Bugün nasılsınız?" << endl;
cout << "\'İyiyiz.\'." << endl;
cout << "Çıkmak için a ya basın." << endl;
cin >> cik;
}
 return 0;
}
