#include <iostream>
#include <cstdlib>
#include <ctime>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int comp,a;
    int c_score=0;
    int y_score=0;
    int d=1;

    while(d<4)
    {
    system("cls");
    cout<<"************************THREE ROUND MATCH**********************";
    srand(time(NULL));
    cout<<"\n";
    cout<<"\n------------ROCK,PAPER,SCISSORS,LIZARD,SPOCK GAME---------";
    cout<<"\n1.ROCK";
    cout<<"\n2.PAPER";
    cout<<"\n3.SCISSORS";
    cout<<"\n4.LIZARD";
    cout<<"\n5.SPOCK";
    cout<<"\nenter your choice:";
    cin>>a;
    comp=rand()%5+1;
    switch(a)
    {
    case 1:
        cout<<"\nyou:rock";
        if (comp==2)
        {
        cout<<"\ncomputer:paper";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
        }
       else if (comp==3)
       {
        cout<<"\ncomputer:scissors";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
       }
      else if (comp==4)
        {
            cout<<"\ncomputer:lizard";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
        }
      else if(comp==5)
        {
               cout<<"\ncomputer:spock";
        cout<<"\ncomputer win!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
        }
      else if(comp==1)
        {
        cout<<"\ncomputer:rock";
        cout<<"\nIts a tie";
        cout<<"\ncomputer score:"<<++c_score;
        cout<<"\nyour score:"<<++y_score;
    }
    break;

     case 2:
        cout<<"\nyou:paper";
    if(comp==1)
    {
        cout<<"\ncomputer:rock";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
    }
   else if(comp==3){
             cout<<"\ncomputer:scissors";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
    }
    else if(comp==4)
        {
        cout<<"\ncomputer:lizard";
        cout<<"\ncomputer win!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
    }
    else if(comp==5)
    {
        cout<<"\ncomputer:spock";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
    }
    else if(comp==2){
        cout<<"\ncomputer:paper";
        cout<<"\nIts a tie";
        cout<<"\ncomputer score:"<<++c_score;
        cout<<"\nyour score:"<<++y_score;
    }
    break;

    case 3:
        cout<<"\nyou:scissors";
    if (comp==1)
       {
        cout<<"\ncomputer:rock";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
       }
    else if(comp==2)
       {
        cout<<"\ncomputer:paper";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
       }
    else if(comp==4)
        {
        cout<<"\ncomputer:lizard";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
    }
    else if(comp==5)
               {
        cout<<"\ncomputer:spock";
        cout<<"\ncomputer win!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
               }
    else if(comp==3)
    {
        cout<<"\ncomputer:scissors";
        cout<<"\nIts a tie";
        cout<<"\ncomputer score:"<<++c_score;
        cout<<"\nyour score:"<<++y_score;
    }
    break;

    case 4:
        cout<<"\nyou:lizard";
        if (comp==1)
       {
           cout<<"\ncomputer:rock";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
       }
    else if(comp==3)
            {
                cout<<"\ncomputer:scissors";
        cout<<"\ncomputer win!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
            }
    else if(comp==2)
           {
            cout<<"\ncomputer:paper";
        cout<<"\ncomputer win!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
           }
    else if(comp==5)
              {
            cout<<"\ncomputer:spock";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
              }
    else if(comp==4)
        {
        cout<<"\ncomputer:lizard";
        cout<<"\nIts a tie";
        cout<<"\ncomputer score:"<<++c_score;
        cout<<"\nyour score:"<<++y_score;
    }
    break;

    case 5:
        cout<<"\nyou:spock";
    if (comp==1)
     {
        cout<<"\ncomputer:rock";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
     }
   else if (comp==2)
       {
        cout<<"\ncomputer:paper";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
       }
    else if (comp==4)
           {
        cout<<"\ncomputer:lizard";
        cout<<"\ncomputer wins!!!";
        cout<<"\nyour score:"<<y_score;
        cout<<"\ncomputer score:"<<++c_score;
           }
    else if (comp==3)
             {
        cout<<"\ncomputer:scissors";
        cout<<"\nyou win!!!";
        cout<<"\nyour score:"<<++y_score;
        cout<<"\ncomputer score:"<<c_score;
             }
    else if (comp==5)
        {
            cout<<"\ncomputer:spock";
        cout<<"\nIts a tie";
        cout<<"\ncomputer score:"<<++c_score;
        cout<<"\nyour score:"<<++y_score;
    }
    break;

    default:
        cout<<"wrong choice";
        d--;
        break;
    }
    d++;
    cout<<"\npress any key!!!!";
    getch();
    }
     system("cls");
    if(c_score>y_score){
        cout<<"\nCOMPUTER WINS";
    }
    else if(c_score==y_score){
        cout<<"MATCH DRAW";
    }
    else {
        cout<<"\nYOU WIN";
    }
    return 0;
}
