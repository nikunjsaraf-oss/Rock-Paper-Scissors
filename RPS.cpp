#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
void home();
void game();
void menu();
int main()
{
    home();
    return 0;
}
void home()
{
    int n;
    system("CLS");
    cout<<"\t\t\t\t\t I --------------------------------------- I \t\t\t\t\n";
    cout<<"\t\t\t\t\t I      Welcome to Rock Paper Scissors     I \t\t\t\t\n";
    cout<<"\t\t\t\t\t I --------------------------------------- I \t\t\t\t\n";
    cout<<"\n";
    cout<<"\t\t\t\t\t I --------------------------------------- I \t\t\t\t\n";
    cout<<"\t\t\t\t\t I       Press RETURN key to continue      I \t\t\t\t\n";
    cout<<"\t\t\t\t\t I --------------------------------------- I \t\t\t\t\n";
    while(n=cin.get())
    {
        if(n==(int)'\n')
        {
            menu();
        }
    }
}
int ch;
void menu()
{
    system("CLS");
    cout<<"\t\t\t\t I ---------------------------------------------------------- I \t\t\t\t";
    cout<<"\t\t\t\t I   Choose number of times you want to play with computer    I \t\t\t\t";
    cout<<"\t\t\t\t I ---------------------------------------------------------- I \t\t\t\t\n";
    cout<<"\t\t\t\t\t\t\t\t";
    cin>>ch;
    srand(time(0));
    game();
}
void game()
{
	system("CLS");
	int comp_choice=1, user_ch,score=0;
    for(int i=1;i<=ch;i++)
    {
		comp_choice=(rand()%3)+1;
        if(comp_choice>3)
        {
        	comp_choice%=4;
		}
		else if(comp_choice==0)
		{
			comp_choice+=1;
		}
		cout<<"\t\t\t\t I -------------------------- I \t\t\t\t\n";
	    cout<<"\t\t\t\t I Press 1 for ROCK           I \t\t\t\t\n";
	    cout<<"\t\t\t\t I Press 2 for PAPER          I \t\t\t\t\n";
	    cout<<"\t\t\t\t I Press 3 for SCISSOR        I \t\t\t\t\n";
	    cout<<"\t\t\t\t I -------------------------- I \t\t\t\t\n";
	    cin>>user_ch;
	    switch (user_ch)
	    {
	    	case 1: cout<<"You Chose \t ROCK \n";
					if(comp_choice==1)
	    			{
	    				cout<<"Computer chose \t ROCK";
	    				cout<<"\nTherefore it is a draw!!! \n";
	                    break;
					}
					else if(comp_choice==2)
					{
						cout<<"Computer chose \t PAPER";
						cout<<"\nTherefore You LOSE!!! \n";
						break;
					}
					else
					{
						cout<<"Computer chose \t SCISSORS";
						cout<<"\nTherefore you WIN!!! \n";
						score+=10;
						break;
					}
					break;
			case 2: cout<<"You chose \t PAPER\n";
					if(comp_choice==1)
	    			{
	    				cout<<"Computer chose \t ROCK";
	    				cout<<"\nTherefore you WIN!!! \n";
	    				score+=10;
	                    break;
					}
					else if(comp_choice==2)
					{
						cout<<"Computer chose \t PAPER";
						cout<<"\nTherefore it is a DRAW!!! \n";
						break;
					}
					else
					{
						cout<<"Computer chose \t SCISSORS";
						cout<<"\nTherefore you LOSE!!! \n";
						break;
					}
					break;
			case 3: cout<<"You chose \t SCISSORS \n";
					if(comp_choice==1)
	    			{
	    				cout<<"Computer chose \t ROCK";
	    				cout<<"\nTherefore you LOSE !!! \n";
	                    break;
					}
					else if(comp_choice==2)
					{
						cout<<"Computer chose \t PAPER";
						cout<<"\nTherefore You WIN!!! \n";
						score+=10;
						break;
					}
					else
					{
						cout<<"Computer chose \t SCISSORS";
						cout<<"\nTherefore it is a draw!!! \n";
						break;
					}
					break;
			default:cout<<"Enter correct choice\n ";
					game();
					break;
		}
    }
            cout<<"\t\t\t\t I ----------------- I \t\t\t\t\n";
            cout<<"\t\t\t\t I Your Score is :   I \t\t\t\t\n";
            cout<<"\t\t\t\t I        "<<score<<"          I \t\t\t\t"<<endl;
            cout<<"\t\t\t\t I ----------------- I \t\t\t\t\n";
            cout<<"\n\n";
            int x;
            cout<<"\t\t\t\t I ------------------------- I \t\t\t\t\n";
            cout<<"\t\t\t\t I THANK YOU FOR PLAYING !!! I \t\t\t\t\n";
            cout<<"\t\t\t\t I ------------------------- I \t\t\t\t\n";
            exit(0);
}
