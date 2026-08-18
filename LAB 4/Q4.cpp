#include <iostream>
using namespace std;

class Song
{
private:
    string name;
    string artistname;
    float duration;
public:
    void accept()
    {
        cout << "Enter song name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter artist name: ";
        getline(cin, artistname);

        cout << "Enter duration in minutes: ";
        cin >> duration;
    }

    friend void compare(Song s1, Song s2);
};

void compare(Song s1, Song s2)
{
    if (s1.duration > s2.duration)
        cout << s1.name << " is longer." << endl;
    else if (s2.duration > s1.duration)
        cout << s2.name << " is longer." << endl;
    else
        cout << "Both songs have the same duration." << endl;
}

int main()
{
    Song s1, s2;
    cout << "Enter details of Song 1:"<<endl;
    s1.accept();
    cout << "Enter details of Song 2:"<<endl;
    s2.accept();
    compare(s1, s2);
    return 0;
}