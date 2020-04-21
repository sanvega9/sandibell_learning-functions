#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

//functions
string GetUserName();
void DisplayIntroduction(string userName);
string ScaryFromUser();

int main()
{
	//title
	cout << "\n\n\t\t **** Untold Scary Stories **** ";
	
	//String that hold userName
	string userName;
	//String that holds scary
	string Scary;
	//function for user name
	userName = GetUserName();
	DisplayIntroduction(userName);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	Scary = ScaryFromUser();
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	// The declaring the string 
	vector <string> inventory;
	// The list item in the room 
	inventory.push_back("\t**lamp**");
	inventory.push_back("\t**rope**");
	inventory.push_back("\t**Sharp glass***");

	//Display list 
	cout << "\n\n\tRoom: " << inventory.size() << "CONTENT\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "You need to choose the option use the Light to look around or the sharp glass for the defends.\n";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "Lamp" || userChoice == "lamp" )
	{
		cout << userName << ": We need to see\n"; 
		cout << "\n kevin: Yes, we can use the lamp to see where we are.";
		cout << "\n Turn the lamp and then saw a book and start to pick up the book. Start to read the book and start to scream.";
		cout << "\n They read that they can't ecapse from the house because they read the book that they try to open the window and door ";
	}
	else if (userChoice == "Sharp glass" || "sharp glass")
	{
		cout << userName << "pick up the sharp glass and safe it for later\n ";
		cout << "found all sudden the lamp and then look around the room\n";
		cout << "found a rope and use it and look at window the heigth. Use the rope to climb down to escape.\n";
	}


	return 0;
}
string GetUserName()
{
	string userName;
	getline(cin, userName);
	return userName;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void DisplayIntroduction(string userName)
{
	cout << "\n What is your name?";
	cin >> userName;
	cout << "\n Wake Up" << userName << "and kevin";
	cout << "\n They don't even know anything.";
	cout << "\n" << userName << ": It's so dark in here";
	cout << "\n" << userName << ": You hear a sound ";
	cout << "\n\t\t Kevin: Yes, I heard a sound. ";
}

string ScaryFromUser()
{
	string scary;
	cout << "\n\n";
	getline(cin, scary);
	return scary;
}


