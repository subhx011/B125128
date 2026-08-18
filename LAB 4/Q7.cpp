#include <iostream>
using namespace std;
class Player
{
private:
string name;
int health;
int score;
int level;
public:
void accept()
{
cout<<"Enter player name: ";
cin>>name;
cout<<"Enter health: ";
cin>>health;
cout<<"Enter score: ";
cin>>score;
cout<<"Enter level: ";
cin>>level;
}
friend class GameManager;
};
class GameManager
{
public:
void displayDetails(Player p)
{
    cout << "Player Name: " << p.name << endl;
    cout << "Health: " << p.health << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
}

void checkAlive(Player p)
{
    if (p.health > 0)
    cout<<"Player is Alive."<<endl;
    else
    cout<<"Player is Dead."<<endl;
}
void displayLevelScore(Player p)
{
    cout<<"Current Level:"<<p.level<<endl;
    cout<<"Current Score:"<<p.score<<endl;
}
};
int main()
{
    Player p;
    GameManager g;
    p.accept();
    g.displayDetails(p);
    g.checkAlive(p);
    g.displayLevelScore(p);
    return 0;
}