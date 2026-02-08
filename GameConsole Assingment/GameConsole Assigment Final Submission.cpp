
#include <iostream>
#include <string>   
#include <iomanip>


using namespace std;
int Menu;
int Class;
int Bonus;
string CharacterName;
int Strength;
int Intelligence;
int Dexterity;
int Constitution;
int Level = 1;
int HP;
int MP;
int AttackPower;
int Defense;
int Check = 0;
bool keepRunning = true;
bool noCharacter = true;
int main()
{
	/*Main Menu Code*/
  do
	{
	cout << "===="<< "GAMESTAT CHARARCTER MANAGER" << "====" << endl;

		cout << "1. Create a NEW character" << endl;

		cout << "2. View Character Stats" << endl;

		cout << "3. Calculate Combat Ratings"<< endl;

		cout << "4. Level Up Character" << endl;

		cout << "5. Exit Program" << endl;

		cout <<  "Enter your Choice: ";

	cin >> Menu;
		cout << endl;
		cout << endl;
		cout << endl;

		
	
	switch(Menu)
	{
	/*Character Creation Option Selected*/

		case 1:/*Character Creation Menu*/
		cout << "Enter Character Name: ";
			cin >> CharacterName;
		cout << endl; 
		cout << "Select Class: " << endl;
		cout << "1. Warrior" << endl;
		cout << "2. Mage" << endl;
		cout << "3. Rouge"<< endl;
		cout << "4. Cleric" << endl;
		cout << "Enter choice (1-4):";
			cin >> Class;
			while (Class < 0 || Class > 4)
			{
				cout << "Input Invalid, Please input a choice between 1 and 4: ";
					cin >> Class;
			}


		/*Base Stats Entry*/
	cout << "Enter Base stats (1-20)" << endl;
	
	/*Strength*/
				cout << "Strength: ";
					cin >> Strength;
						cout << endl;

		while (Strength < 0 || Strength > 21)
{
	cout << "Invalid Input - Please use a number 1 - 20" << endl;
	cin >> Strength;
}

	/*Intellegence*/
				cout << "Intellegence: ";
					cin >> Intelligence;
						cout << endl;

		while (Intelligence < 0 || Intelligence > 21)
{
	cout << "Invalid Input - Please use a number 1 - 20" << endl;
	cin >> Intelligence;
}

	/*Dexterity*/
				cout << "Dexterity: ";
					cin >> Dexterity;
						cout << endl;

		while (Dexterity < 0 || Dexterity > 21)
{
	cout << "Invalid Input - Please use a number 1 - 20" << endl;
	cin >> Dexterity;
}

	/*Constitution*/
				cout << "Constitution: ";
					cin >> Constitution;
						cout << endl;
		while (Constitution < 0 || Constitution > 21)
{
	cout << "Invalid Input - Please use a number 1 - 20" << endl;
	cin >> Constitution;
}

/*Character Successfully created*/
				cout << "Character created Succesfully!" << endl<< endl;
					switch(Class)
	{
		case 1:
		cout << "Warrior class bonus: Strenght +2"<< endl;
		break;

		case 2:
		cout << "Mage class Bonus: Intelligence +2"<< endl;
		break;

		case 3:
		cout << "Rogue class Bonus: Dexterity +2" << endl;
		break;

		case 4:
		cout << "Cleric class Bonus: Constitution +2" << endl;
		break;
	}	
				cout << endl;

noCharacter = false;
		break;
		/*End of Character Creator Screen*/

/********************************************************************************/

	/*Character Stats Viewer Case*/

		case 2:/*Character Stats*/
if(noCharacter)
	{
	cout << "No Character Data found. Please Input 1 to create a character.." << endl;
	}
else
	{

		cout << "=== Character Profile ===" << endl;
		cout << "Name: " << CharacterName << endl;
			switch(Class)
		{
			/*Warrior Class*/
			case 1: 
			cout << "Class: Warrior" << endl;
			break;
			
			/*Mage Class*/
			case 2: 
			cout << "Class: Mage" << endl;
			break;

			/*Rouge Class*/
			case 3: 
			cout << "Class: Rouge" << endl;
			break;

			/*Cleric Class*/
			case 4:
			cout << "Class: Cleric" << endl;
			break;

		}
		cout << "Level: " << Level << endl;
		cout << endl;
		cout << "Base Stats:" << endl;
		switch(Class)
		{
			/*Warrior*/
			case 1:
			cout << "Strength: " << Strength << "(+2 Class Bonus) = " << Bonus << endl;
			cout << "Intelligence: " << Intelligence << endl;
			cout << "Dexterity: " << Dexterity << endl;
			cout << "Constitution: " << Constitution << endl;
			break;

			/*Mage*/
			case 2:
			cout << "Strength: " << Strength << endl;
			cout << "Intelligence: " << Intelligence << "(+2 Class Bonus) = " << Bonus << endl;
			cout << "Dexterity: " << Dexterity << endl;
			cout << "Constitution: " << Constitution << endl;
			break;

			/**/
			case 3:
			cout << "Strength: " << Strength << endl;
			cout << "Intelligence: " << Intelligence << endl;
			cout << "Dexterity: " << Dexterity << "(+2 Class Bonus) = " << Bonus << endl;
			cout << "Constitution: " << Constitution << endl;
			break;
			case 4:
			cout << "Strength: " << Strength << endl;
			cout << "Intelligence: " << Intelligence << endl;
			cout << "Dexterity: " << Dexterity << endl;
			cout << "Constitution: " << Constitution << "(+2 Class Bonus) = " << Bonus << endl;
			break;
		}
	
	
	
		cout << "Combat Stats: " << endl;
		cout << "Health Points: " << HP << endl;
		cout << "Mana Points: " << MP << endl;
		cout << "Attack Power: " << AttackPower << endl;
		cout << "Defense: " << Defense << endl;
	}	 
		break;

/********************************************************************************/
	
	/*Combat Ratings Case*/

		case 3:
if(noCharacter)
	{
	cout << "No Character Data found. Please Input 1 to create a character.." << endl;
	}
else
	{
		cout << "===COMBAT RATINGS==="<< endl;
		cout << endl;

		switch (Class)
		{
		case 1:
		cout << "Health Points: "<< HP << "(Constitution " << Constitution << " * 10 + Warrior Bonus 20 + Level " << Level << "* 5)" << endl; 
		cout << "Mana Points: " << MP << "(Intelligence )" << Intelligence << " * 10 + Level " << Level << "* 3)" << endl;
		cout << "Attack Power: " << AttackPower << "(Intelligence )" << Intelligence << "* 1.3)" << endl;
		break;
		
		case 2:
		cout << "Health Points: "<< HP << "(Constitution " << Constitution << " * 10 + Level " << Level << "* 5)" << endl; 
		cout << "Mana Points: " << MP << "(Intelligence )" << Intelligence << " * 10 + Mage Bonus 30 + Level " << Level << "* 3)" << endl;
		cout << "Attack Power: " << AttackPower << "(Intelligence )" << Intelligence << "* 1.3)" << endl;
		break;

		case 3:
		cout << "Health Points: "<< HP << "(Constitution " << Constitution << " * 10 + Level " << Level << "* 5)" << endl; 
		cout << "Mana Points: " << MP << "(Intelligence )" << Intelligence << " * 10 + Level " << Level << "* 3)" << endl;
		cout << "Attack Power: " << AttackPower << "(Intelligence )" << Intelligence << "* 1.3)" << endl;
		break;

		case 4:
		cout << "Health Points: "<< HP << "(Constitution " << Constitution << " * 10 + Level " << Level << "* 5)" << endl; 
		cout << "Mana Points: " << MP << "(Intelligence )" << Intelligence << " * 10 + Level " << Level << "* 3)" << endl;
		cout << "Attack Power: " << AttackPower << "(Intelligence )" << Intelligence << "* 1.3)" << endl;
		break;
		}
		cout << endl;
		cout << endl;
	}
		break;

/*************************************************************************************/
	/*Level Up Case*/

		case 4:
if(noCharacter)
	{
	cout << "No Character Data found. Please Input 1 to create a character.." << endl;
	}
else
	{
		cout << "=== LEVEL UP ===" << endl;
		if (Level < 10)
		{
			cout << "Current Level: " << Level << endl;
			Level = Level + 1;
			cout << "New Level: " << Level << endl;
			
			cout << "Stats increased by +1!" << endl;

			cout << "Strength: " << Strength;
			Strength = Strength + 1;
			cout << "-> " << Strength << endl;

			cout << "Intelligence: " << Intelligence;
			Intelligence = Intelligence + 1;
			cout << "-> " << Intelligence << endl;

			cout << "Dexterity: " << Dexterity;
			Dexterity = Dexterity + 1;
			cout << "-> " << Dexterity << endl;

			cout << "Constitution: " << Constitution;
			Constitution = Constitution + 1;
			cout << "-> " << Constitution << endl;
			cout << endl;
			cout << "Combat Stats Recalculated" << endl;
			
		}

		/*Level Maxed Out Screen*/

		else
		 {
			cout << "LEVEL MAXED" << endl;
		}

	}
		break;

		/*End of Level Up Screen*/
		
		/*Program Closing Case*/
		case 5:
		cout << "Closing Program..." << endl;
		keepRunning = false;
		break;
		
		/*End of Closing Screen*/

		/*Out of Range Input Screen*/
		default:
		cout << "Invalid input, Please input 1-5" << endl;
		cout << endl;
		break;

	}

	/*Combat Ratings Calculations*/	

					HP = (Constitution * 10) + (Level * 5);
					MP = (Intelligence * 10) + (Level * 3);
					
					/*Switch used for different Class Modifiers*/
					switch(Class)
					{
					/*Warrior Modifier*/
					case 1:
					AttackPower = Strength * 1.5;
					HP = HP + 20;
					Bonus = Strength + 2;
					break;

					/*Mage Modifier*/
					case 2:
					AttackPower = Intelligence * 1.3;
					MP = MP+30;
					Bonus = Intelligence + 2;
					break;

					/*Rouge Modifier*/
					case 3:
					AttackPower = Dexterity * 1.4;
					Bonus = Dexterity + 2;
					break;

					/*Cleric Modifier*/
					case 4:
					AttackPower = (Strength + Intelligence) * 0.8;
					Bonus = Constitution + 2;
					break;
					}

					Defense = (Constitution + Dexterity) / 2;

	/*End of Calculation Section*/
	

	
	
	
	} while (keepRunning);

	return 0;
} 




