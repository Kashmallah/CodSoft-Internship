#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int random_number = rand() % 100 + 1;
    int guess_num;
    bool Guess;

    Guess = false;
    while (!Guess)
    {
        cout << "Please Enter your guess: ";
        cin >> guess_num;

        if (guess_num > random_number)
        {
            cout << "Your guess is too high.\n";
        }
        else if (guess_num < random_number)
        {
            cout << "Your guess is too low.\n";
        }
        else
        {
            cout << "Congratulations, you guessed the number correctly!\n";
            Guess = true;
        }
    }

    return 0;
}