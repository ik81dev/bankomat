#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "podaj login: ";
    cin >> login;
    cout << "podaj haslo: ";
    cin >> haslo;
    if((login == "kamilko") && (haslo == "tak"))
    {
        cout << "login i haslo poprawne, witamy";
    }
    else
    {
        cout << "nie udalo sie zalogowac";
    }
    return 0;
}
