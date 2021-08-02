
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;
 
int NUM_TRY=3;
int checkGuess (char, string, string&);
void main_menu();
string message = "Play!";
 
 
int main(int argc, char *argv[])
{
	string name;
	char letter;
	string vasavi;
	
 
    string vasavis[] =
	{
		 
		"chetanya",
		"manasa",
		"wajeed",
		"arshed",
		"rohini",
		"renuka",
		"sathvik",
		"victor",
		"january",    
		"february",
		"march",
		"april",
		"may",
		"june",
		"july",
		"august",
		"september",
		"october",
		"november",
		"december",
		
	};
	
	srand(time(NULL));
	int n=rand()% 20;
	vasavi=vasavis[n];
    
	
	string hide_m(vasavi.length(),'X');
 
	
    
	
	while (NUM_TRY!=0)
	{
		main_menu();
		cout << "\n\n\t\t\t\t" << hide_m;
		cout << "\n\n\t\t\t\tGuess a letter: ";
		cin >> letter;
		
		if (checkGuess(letter, vasavi, hide_m)==0)
		{
			message = "Incorrect letter.";
			NUM_TRY = NUM_TRY - 1;
		}
		else
		{
			message = "NICE! You guess a letter";
		}
 
 
		
		if (vasavi==hide_m)
		{
			message = "Congratulations! You got it!";
			main_menu();
			cout << "\n\t\t\t\tThe word is : " << vasavi << endl;
			break;
		}
	}
	if(NUM_TRY == 0)
	{
		message = "NOOOOOOO!...you've been hanged.";
		main_menu();
		cout << "\n\t\t\t\tThe WORD was : " << vasavi << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
 
 
int checkGuess (char guess, string secretvasavi, string &guessvasavi)
{
	int i;
	int matches=0;
	int len=secretvasavi.length();
	for (i = 0; i< len; i++)
	{
		
		if (guess == guessvasavi[i])
			return 0;
		
		if (guess == secretvasavi[i])
		{
			guessvasavi[i] = guess;
			matches++;
		}
	}
	return matches;
}
 
void main_menu()
{
	 system("color 05");
                system("cls");
                 cout<<"\t\t\t\t*\t*";
 
  cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t*\t*";
 
 cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  WELCOME TO THE MINI HANGMAN GAME BY WAJEED OF VASAVI COLLEGE \n";
                cout<<"\n\t\t\t\tHangman Game!";
				cout << "\n\t\tYou have " << NUM_TRY << " tries to try and guess the WORD.";
				cout<<"\n\n\t\t\t\t"+message;
 cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
 
}
