#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void guesstheNumber()
{
    srand(time(0));
    int guessNumber= rand() % 100 +1;
    int guess =0;

    cout<< "Guess a number between 1 to 100" <<endl;

    while(guess != guessNumber)
    {
        cout<< "Enter your guess: ";
        cin>> guess;

        if(guessNumber > guess)
        {
            cout<< "Number is too low. Try again." <<endl;
        }
        else if( guessNumber < guess)
        {
            cout<< "Number is too high. Try again." <<endl;
        }
        else
        {
            cout<< "Congratulation! Your guess is correct." << endl;
        }
    }
}

int main()
{
    guesstheNumber();
    return 0;
}