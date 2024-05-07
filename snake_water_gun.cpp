#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string> // for strcpy
#include <time.h>
using namespace std;

int main()
{
    int num = 3;
    int user_points = 0, bot_points = 0;
    string gameVar, gameVar2;
    srand(time(0));

    int user, bot, n;
    cout << "Welcome to Snake Water and Gun Game Let's play it...\n"
         << endl;
    while (true)
    {
        cout << "Please select an option\n1.Snake\n2.Water\n3.Gun\n0.Quit\n_____ ";
        cin >> user;
        bot = 1 + (rand() % num);
        // cout << user << " " << bot;
        if (bot == 1)
        {
            gameVar = "Snake";
        }
        else if (bot == 2)
        {
            gameVar = "Water";
        }
        else
        {
            gameVar = "Gun";
        }

        if (user == 1)
        {
            gameVar2 = "Snake";
        }
        else if (user == 2)
        {
            gameVar2 = "Water";
        }
        else
        {
            gameVar2 = "Gun";
        }

        if (user == bot)
        {
            cout << "Oh Sorry Match is draw!!!"
                 << endl;
        }
        else if (user == 1 && bot == 2 || user == 2 && bot == 3 || user == 3 && bot == 1)
        {
            cout << "Congrats You won the match!!!"
                 << endl;
            user_points += 10;
        }
        else
        {
            cout << "Oh Sorry you lose the match!!!"
                 << endl;
            bot_points += 10;
        }
        cout << "You choose : " << gameVar2 << " Bot choose : " << gameVar << endl;
        cout << "Your points : " << user_points << " Bot points : " << bot_points << endl
             << endl;
    }

    return 0;
}
