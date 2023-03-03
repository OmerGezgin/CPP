//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>

using namespace std;

int main()
{
    int kt=0 , tk, process, x,y=0; //Degiskenleri tanimladim.

    for(int i=0;i<=100;i++){ //Döngüye aldim.
        x=i*i;
        y=i+y;
        tk=y*y;
        kt=kt+ x;
        process=tk-kt; //islemleri yaptirdim.

    }
    cout<<"Sonuc :"<<process;//Sonucu yazdirdim.

    return 0;
}


