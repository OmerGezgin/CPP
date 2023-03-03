//C++ PROBLEMİ:
//Bir mühendis planlamış olduğu sistemin matematiksel hesabını yapmaya başlamıştır. Bu hesaplama sonucunda bazı denklemler elde etmiştir. Elde ettiği denklemi ekrana yazdıktan sonra çözüm kümesini ekrana veren c++ kodunu yazınız.
//Gerekli bilgiler:
//Denklemin ikinci dereceden bir denklem olduğu varsayılmaktadır.
//Eksik verilen bilgileri kendiniz yorumlayarak yapınız.

#include <iostream>
#include <math.h>
//Matematiksel iþlem için bunu kullandým.
using namespace std;

int main()
{
    int x1,x2;
    int a,b,c,x,denklem;
    float diskriminant=0;
    //Çözüm kümesinibulmak için bilinmeyen belirledim.

    cout<<"a sayisini giriniz."<<endl;
    cin>>a;

    cout<<"b sayisini giriniz."<<endl;
    cin>>b;

    cout<<"c sayisini giriniz."<<endl;
    cin>>c;
    //Denklem için katsayýlar belirledim.
    diskriminant=(b*b)-4*(a)*(c);
    //Diskriminant alarak "0" dan büyük mü küçük mü yada eþit mi kontrol ettim.
    if(diskriminant<0){

        cout<<"Reel kok yoktur."<<endl;
    return 0;
    }
    //"0" dan küçükse kök yoktur diye if kullandým.
    else(diskriminant>=0);{

        x1=-b+sqrt(diskriminant)/2*a;
        x2=-b-sqrt(diskriminant)/2*a;
        cout<<"Birinci kok = "<<x1<<endl;
        cout<<"Ikinci kok = " << x2<<endl;
    }
    //"0" dan büyük veya eþitse çözüm kümemizi buluyoruz.
    return 0;
}




