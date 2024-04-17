#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
    int number, guess, opt ,n;
    static int count;

    srand(time(0));
    number = 1+ (rand()%50);
    //cout<<number;
    cout<<"*******Wele]come to number guessing game******"<<endl;
    cout<<"Guess a number between 1 to 100";
    while(true)
    {

    cout<<"\nDifficulty levels"<<endl;
    cout<<"1.Easy : infinite tries \n";
    cout<<"2.Difficult : limited tries \n  OR \nPress 0 to end the game"<<endl;
    cout<<"Enter the difficulty level : ";
    cin>>opt;
    
    if(opt==1)
    {
        cout<<"Easy level :"<<endl;
     do {
        cout<<"\nEnter your guess : ";
        cin>>guess;
        count++;

        if(guess==number)  {
            cout<<"Congratulatios!! \n You have guessed the correct answer within "<<count<<" tries";
            cout<<"\nThank you for playing\n"<<endl;
        }
        else if(guess>number)  {
           cout<<"Oops...it's too high\n";
        }
        else {
            cout<<"Oops...it's too low\n";
        }
     }  while(number!=guess);
    }
    else if(opt==2)
    {
        cout<<"Enter your desired number of tries : ";
        cin>>n;
        int chances=n-1;
        for(int i=1;i<=n;i++) {
           
           cout<<"\nEnter your guess : ";
           cin>>guess;
           
           if(guess==number)  {
              cout<<"Congratulatios!! \n You have guessed the correct answer within "<<i<<"tries\n";
              cout<<"Thank you for playing\n"<<endl;
              break;
            }
           else if(guess>number)  {
           cout<<"Oops...it's too high\n";
           cout<<"Chances left : "<<chances;
            }
           else {
            cout<<"Oops...it's too low\n";
            cout<<"Chances left : "<<chances<<endl;
           }
          
          
           if(chances==0) {
           cout<<"\nYour chances are over.\nThe actual number is "<<number<<".Better luck next time!!\n";
           }
         chances--; 
        }
    }
    else if(opt==0) {
     break;
     exit(0); }
    else {
      cout<<"Enter correct option";
    }
    }
 return 0;
}