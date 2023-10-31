#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    //powitanie
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;
    Sleep(500);
    cout << "Witaj " << imie << " w tescie z JoJo!" << " Odpowiedz na 5 pytan aby sprawdzic swoja wiedze z [anime] JoJo's"<<endl;
    Sleep(4000);
    system("cls");

    //Pytanie 1

    cout << "Pytanie 1"<<endl;

    cout << "Jaka jest pelna nazwa [anime] JoJo's?"<<endl;
    cout << "a) JoJo's Bizarre Adventure"<<endl;
    cout << "b) JoJo On An Adventure"<<endl;
    cout << "c) The Adventure Of JoJo"<<endl;
    cout << "d) JoJo And His Adventure"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle. Poprawna odpowiedzia jest JoJo's Bizarre Adventure";

    }
    Sleep(3000);
    system("cls");

    //Pytanie 2

    cout << "Pytanie 2"<<endl;
    cout << "Czym jest pierwowzor anime JoJo's?"<<endl;
    cout << "a) Historia internetowa"<<endl;
    cout << "b) Light novel"<<endl;
    cout << "c) Manga"<<endl;
    cout << "d) Gra"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle. Poprawna odpowiedzia jest Manga.";

    }
    Sleep(3000);
    system("cls");

    //Pytanie 3

    cout << "Pytanie 3"<<endl;
    cout << "Jak nazywa sie glowny bohater partu 3?"<<endl;
    cout << "a) Jonathan Joestar"<<endl;
    cout << "b) Jhonny Joestar"<<endl;
    cout << "c) Josuke Cujoh"<<endl;
    cout << "d) Jotaro Kujo"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "d")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else if (odp == "a")
    {
        cout << "Zle. Jonathan Joestar jest protagonista partu 1.";

    }
    else if (odp == "b")
    {
        cout << "Zle. Jhonny Joestar jest protagonista partu 7.";

    }
    else
    {
        cout << "Zle. Taka postac nie istnieje.";
    }

    Sleep(3000);
    system("cls");

    //Pytanie 4

    cout << "Pytanie 4"<<endl;
    cout << "Czym jest Stand w JoJo?"<<endl;
    cout << "a) Umiejetnoscia ktorej ucza sie ludzie w JoJo's"<<endl;
    cout << "b) Fizyczna manifestacja energii zyciowej"<<endl;
    cout << "c) Stojakiem na kapelusze"<<endl;
    cout << "d) Nazwa zlej firmy z ktora walcza glowni bohaterowie"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle. Poprawna odpowiedzia jest 'Fizyczna manifestacja energii zyciowej' [Jest tak napisane na oficjalnym wiki]";

    }
    Sleep(3000);
    system("cls");


    //Pytanie 5

    cout << "Pytanie 5"<<endl;
    cout << "Jaka umiejetnosc posiada Stand The World?"<<endl;
    cout << "a) Pozwala widziec w przyszlosc"<<endl;
    cout << "b) Star Finger"<<endl;
    cout << "c) Zatrzymuje czas"<<endl;
    cout << "d) Stwarza nowy swiat"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else if (odp == "a")
    {
        cout << "Zle. Jest to umiejetnosc standu King Crimson";

    }
    else
    {
        cout << "Zle. Odpowiedzia jest zatrzymanie czasu";

    }
    Sleep(3000);
    system("cls");

    //wynik


    cout << "Gratuluje Ci ukonczenia testu z JoJo's!"<<endl;
    cout << "Twoj wynik to " << pkt << " na 5 punktow"<<endl;


    //koniec


    return 0;
}
