#include <iostream>
#include<string>
using namespace std;

int main()
{
    string kelime;
    int kelimeHarfSayisi = 0;



    cout << "bir kelime giriniz:";
    cin >> kelime;

    while (kelime[kelimeHarfSayisi] != '\0')
    {
        kelimeHarfSayisi++;
    }
    cout << "girdiginiz kelime: " << kelimeHarfSayisi << " karakterlidir";
}
