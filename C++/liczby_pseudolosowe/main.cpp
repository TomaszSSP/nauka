#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj, pomyslalem sobie liczbe 1...100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zgadnij jaka(To Twoja "<<ile_prob<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
        cout<<"Trafiles! Wygrywasz w "<<ile_prob<<" probie:"<<endl;

        else if(strzal>liczba)
        cout<<"Pudlo! Za duzo"<<endl;

        else if(strzal<liczba)
        cout<<"Pudlo! Za malo"<<endl;

    }

    getchar(); getchar();


    return 0;
}
