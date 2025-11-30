#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Game
{
private:
	string NameX, ClassX, Damage, choice, Enemy, PlayerX, Heal;
	int a, HP, ehp, D, rAttack, eAttack, rDefend, rEffect, Num, rGain;
	int C = 0;

	void Path1()
	{
		while (a != 5722)
		{
			system("cls");

			cout << "# You ran away." << endl;
			cout << "# The demi-human thought you wanted to play with him and ran as fast as he can towards you." << endl;
			cout << "# Realizing you were slower than him, what do you do?." << endl;
			cout << "\t >> Enter '1' to go back to the ship, return to the mainland, and never set foot back to Bones Island again." << endl;
			cout << "\t >> Enter '2' to stop and listen to him." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "1")
			{
				system("cls");

				cout << "# You boarded the ship and set sailed back to mainland." << endl;
				Sea();
				break;
			}
			else if (choice == "2")
			{
				system("cls");

				cout << "Demi-human: Where are you going? We have no time to play. We need to defeat the Bone Lord that has been terrorizing this island for years." << endl;
				cout << "You: You scared me. This is my first time seeing a demi-human. I thought you were going to eat me." << endl;
				cout << "Demi-human: That attitude is no good " << PlayerX << "! As a hero of this island, you have to become strong and valiant."
					<< " With that said, let us go forth towards the Bony Forest where you shall level up and become strong enough to stand before the evil Bone Lord." << endl;
				Forrest();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void Path2()
	{
		while (a != 5722)
		{
			system("cls");

			cout << "Demi-human: Hello " << PlayerX << "! Are you ready to become the hero if this island?" << endl;
			cout << "# What do you say?" << endl;
			cout << "\t >> Enter '1' to say you are not ready and want to back out." << endl;
			cout << "\t >> Enter '2' to say you are ready to defeat the evil Bone Lord." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "1")
			{
				system("cls");

				cout << "You: I am not ready yet. Maybe next time." << endl;
				cout << "\n# You ran towards the ship, boarded it, and set sailed back to mainland." << endl;
				Sea();
				break;
			}
			else if (choice == "2")
			{
				system("cls");

				cout << "Demi-human: Don't be hasty " << PlayerX << ". You are not ready yet. Let us level up first in the Bony Forest to become strong enough to stand before the evil Bone Lord." << endl;
				Forrest();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void Sea()
	{
		while (a != 2002)
		{
			system("cls");

			rEnemy(Enemy);
			cout << "# After a couple of hours later, you noticed something wrong with the ship." << endl;
			cout << "# After looking around, you didn't see any person on the ship." << endl;
			cout << "# What would you like to do?" << endl;
			cout << "\t >> Enter '1' to jump out of the ship." << endl;
			cout << "\t >> Enter '2' to go to sleep and pretend nothing's wrong with the ship." << endl;
			cout << "\t >> Enter '3' to shout and hope someone responds." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "1")
			{
				while (a != 5722)
				{
					system("cls");

					cout << "# You jumped out of the ship and realized you can't swim." << endl;
					cout << "# You drowned." << endl;
					cout << "\t >> Enter '1' to restart your choice." << endl;
					cout << "\t >> Enter '2' to accept death." << endl;
					cout << "\t >> Enter '3' to wake up." << endl;
					cout << "\nEnter your choice: ";
					cin >> choice;
					Command(choice);
					if (choice == "1")
					{
						Sea();
						a = 2002;
						break;
					}
					else if (choice == "2")
					{
						system("cls");

						cout << "# You died. Better luck next life " << PlayerX << "." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
						choice = "Quit";
						Command(choice);
					}
					else if (choice == "3")
					{
						system("cls");

						cout << "# You woke up and got a sigh of relief that it was just a dream." << endl;
						cout << "# You stood up and thought how you felt asleep." << endl;
						cout << "# You suddenly noticed a " << Enemy << " coming at you and initiated an attack." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
						a = 2002;
						break;
					}
					else
					{
						cout << "\nLet's try again." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
					}
				}
			}
			else if (choice == "2")
			{
				system("cls");

				cout << "# As you went to find a place to sleep, you noticed a " << Enemy << " looking at you behind the door." << endl;
				cout << "# You got scared and ran away." << endl;
				cout << "# The " << Enemy << " followed you and initiated an attack." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
				break;
			}
			else if (choice == "3")
			{
				system("cls");

				cout << "# You shouted as loud as you can." << endl;
				cout << "# Someone responded behind the door." << endl;
				cout << "# You got happy and checked who's behind the door." << endl;
				cout << "# You saw a " << Enemy << " and initiated an attack." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void Forrest()
	{
		while (a != 2002)
		{
			system("cls");

			rEnemy(Enemy);
			cout << "# After a couple of hours into the woods, you noticed something wrong with the place." << endl;
			cout << "# After looking around, the Demi-human is gone." << endl;
			cout << "# You got scared and nervous which activated your disease that makes you hungry and sleepy." << endl;
			cout << "# You noticed a mushroom on the ground and thought it was tasty." << endl;
			cout << "# What would you like to do?" << endl;
			cout << "\t >> Enter '1' to eat the mushroom." << endl;
			cout << "\t >> Enter '2' to go to sleep and pretend nothing's wrong with the place." << endl;
			cout << "\t >> Enter '3' to shout and find the Demi-human." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "1")
			{
				while (a != 5722)
				{
					system("cls");

					cout << "# You ate the mushroom." << endl;
					cout << "# After you ate it, you realized that it was poisonous and died." << endl;
					cout << "# You got poisoned." << endl;
					cout << "\t >> Enter '1' to restart your choice." << endl;
					cout << "\t >> Enter '2' to accept death." << endl;
					cout << "\t >> Enter '3' to wake up." << endl;
					cout << "\nEnter your choice: ";
					cin >> choice;
					Command(choice);
					if (choice == "1")
					{
						Forrest();
						a = 2002;
						break;
					}
					else if (choice == "2")
					{
						system("cls");

						cout << "# You died. Better luck next life " << PlayerX << "." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
						choice = "Quit";
						Command(choice);
					}
					else if (choice == "3")
					{
						system("cls");

						cout << "# You woke up and got a sigh of relief that it was just a dream." << endl;
						cout << "# You stood up and thought how you fell asleep." << endl;
						cout << "# You suddenly noticed a " << Enemy << " coming at you and initiated an attack." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
						a = 2002;
						break;
					}
					else
					{
						cout << "\nLet's try again." << endl;
						cout << "\n----------------------Press any key to continue----------------------" << endl;
						_getch();
					}
				}
			}
			else if (choice == "2")
			{
				system("cls");

				cout << "# As you went to find a place to sleep, you noticed a " << Enemy << " looking at you behind the tree." << endl;
				cout << "# You got scared and ran away." << endl;
				cout << "# The " << Enemy << " followed you and initiated an attack." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
				break;
			}
			else if (choice == "3")
			{
				system("cls");

				cout << "# You shouted as loud as you can." << endl;
				cout << "# Someone responded behind the tree." << endl;
				cout << "# You got happy and checked who's behind the tree." << endl;
				cout << "# You saw a " << Enemy << " and initiated an attack." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void Stats(string Enemy)
	{
		cout << "Name: " << NameX << endl;
		cout << "Class: " << ClassX << endl;
		cout << "HP: " << HP << endl;
		cout << "Damage: " << Damage << "\n" << endl;
		cout << "Enemy: " << Enemy << endl;
		cout << "HP: " << ehp << "\n\n" << endl;
	}
	void RandomHP()
	{
		srand((unsigned)time(NULL));
		ehp = 50 + (rand() % 51);
	}
	void RandomAttack()
	{
		srand((unsigned)time(NULL));
		rAttack = D + (rand() % 21);
	}
	void eRandomA()
	{
		srand((unsigned)time(NULL));
		eAttack = 1 + (rand() % 20);
	}
	void RandomDefend()
	{
		srand((unsigned)time(NULL));
		rDefend = 1 + (rand() % 5);
	}
	void Luck()
	{
		srand((unsigned)time(NULL));
		Num = 1 + (rand() % 4);
		if (Num == 4)
		{
			cout << "# You got lucky and survived. Your luck made you a powerful for a second and killed the enemy." << endl;
			cout << "\n----------------------Press any key to continue----------------------" << endl;
			_getch();
		}
		else
		{
			cout << "# No luck." << endl;
			cout << "# You died. Better luck next life " << PlayerX << "." << endl;
			cout << "\n----------------------Press any key to continue----------------------" << endl;
			_getch();
			choice = "Quit";
			Command(choice);
		}
	}
	void RandomGain()
	{
		srand((unsigned)time(NULL));
		if (ClassX == "Warrior")
		{
			rGain = 30 + (rand() % 41);
		}
		else if (ClassX == "Mage")
		{
			rGain = 30 + (rand() % 21);
		}
		else
		{
			cout << "Error.	Please report this to the programmer." << endl;
			exit(1);
		}
	}
public:
	void rEnemy(string& Enemy)
	{
		int rNum;

		srand((unsigned)time(NULL));
		rNum = 1 + (rand() % 5);
		if (rNum == 1)
		{
			Enemy = "Vampire";
		}
		else if (rNum == 2)
		{
			Enemy = "Slime";
		}
		else if (rNum == 3)
		{
			Enemy = "Ghost";
		}
		else if (rNum == 4)
		{
			Enemy = "Troll";
		}
		else
		{
			Enemy = "Minion";
		}
	}
	void Command(string choice)
	{
		while (a != 5722)
		{
			if (choice == "Quit")
			{
				system("cls");

				cout << "Thank you for playing." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
				exit(0);
			}
			else if (choice == "Help")
			{
				system("cls");

				cout << "Are you lost my child? Let me help you.\n" << endl;
				cout << "When replying with letters (word), the first letter must always be uppercased while the others are not." << endl;
				cout << "Example: Y / Yes / Yeah / Yep / N / No / Nope / Nah\n" << endl;
				cout << "Well, I guess that's all I could help." << endl;
				cout << "\t >> Type 'Help' for help." << endl;
				cout << "\t >> Type 'Quit' to quit the game." << endl;
				cout << "\t >> Type anything to continue." << endl;
				cout << "\n Enter your choice: ";
				cin >> choice;
			}
			else
			{
				break;
			}
		}
	}
	void Class()
	{
		while (a != 5722)
		{
			system("cls");

			cout << "Select a class:" << endl;
			cout << "\t >> Warrior" << endl;
			cout << "\t >> Mage" << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "Warrior")
			{
				ClassX = "Warrior";
				HP = 100;
				Damage = "10 - 30";
				Heal = "30 - 70";
				D = 10;
				break;
			}
			else if (choice == "Mage")
			{
				ClassX = "Mage";
				HP = 50;
				Damage = "30 - 50";
				D = 30;
				Heal = "30 - 50";
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void ClassRetry()
	{
		while (a != 5722)
		{
			system("cls");

			cout << "You have chosen " << ClassX << endl;
			cout << "\nHere are its attributes: " << endl;
			cout << "\t >> HP: " << HP << endl;
			cout << "\t >> Damage: " << Damage << endl;
			cout << "\t >> Healing: " << Heal << endl;
			cout << "\nDo you want to choose another class?" << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "Yes" || choice == "Y" || choice == "Yep" || choice == "Yeah" || choice == "Yah")
			{
				Class();
				break;
			}
			else if (choice == "No" || choice == "N" || choice == "Nope" || choice == "Nah" || choice == "Nay")
			{
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
	}
	void Name()
	{
		system("cls");

		cout << "What is your name, " << ClassX << "?" << endl;
		cout << "\nName: ";
		cin >> NameX;
	}
	void NameRetry(string& PlayerX)
	{
		while (a != 5722)
		{
			system("cls");

			cout << "Is your name " << NameX << "?" << endl;
			cout << "\nAnswer: ";
			cin >> choice;
			Command(choice);
			if (choice == "Yes" || choice == "Y" || choice == "Yep" || choice == "Yeah" || choice == "Yah")
			{
				break;
			}
			else if (choice == "No" || choice == "N" || choice == "Nope" || choice == "Nah" || choice == "Nay")
			{
				Name();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
		PlayerX = ClassX + " " + NameX;
	}
	void Battle(string& Enemy)
	{
		system("cls");
		RandomHP();
		if (Enemy == "Bone Lord")
		{
			ehp = ehp + 50;
		}
		else if (C == 0)
		{
			ehp = ehp - 30;
		}
		else if (C == 1)
		{
			ehp = ehp - 20;
		}
		else if (C == 2)
		{
			ehp = ehp - 10;
		}
		cout << "# You noticed that the " << Enemy << " has " << ehp << " hp." << endl;
		cout << "\n----------------------Press any key to continue----------------------" << endl;
		_getch();
		while (ehp > 0 && HP > 0)
		{
			system("cls");

			Stats(Enemy);
			cout << "# What would you like to do?" << endl;
			cout << "\t >> Attack" << endl;
			cout << "\t >> Defend" << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "Attack")
			{
				system("cls");

				RandomAttack();
				ehp = ehp - rAttack;
				cout << "# You attacked and damaged " << rAttack << " to the " << Enemy << "." << endl;
				cout << "# You noticed that the " << Enemy << " has " << ehp << " left." << endl;
				eRandomA();
				if (C == 0)
				{
					eAttack = eAttack + 5;
				}
				else if (C == 1)
				{
					eAttack = eAttack + 7;
				}
				else if (C == 2)
				{
					eAttack = eAttack + 9;
				}
				else
				{
					eAttack = eAttack + 12;
				}
				HP = HP - eAttack;
				cout << "# The " << Enemy << " attacked you and dealt " << eAttack << " damage." << endl;
				cout << "# You only have " << HP << " HP left." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
			else if (choice == "Defend")
			{
				system("cls");

				RandomDefend();
				eRandomA();
				rEffect = eAttack - rDefend;
				if (rEffect > 0)
				{
					HP = HP - rEffect;
					cout << "# The " << Enemy << " attacked you and dealt " << eAttack << " damage." << endl;
					cout << "# You only have " << HP << " HP left." << endl;
					cout << "\n----------------------Press any key to continue----------------------" << endl;
					_getch();
				}
				else
				{
					cout << "# You got lucky and blocked all damaged." << endl;
					cout << "# With your luck, you even attacked back." << endl;
					RandomAttack();
					ehp = ehp - rAttack;
					cout << "# You attacked and damaged " << rAttack << " to the " << Enemy << "." << endl;
					cout << "# You noticed that the " << Enemy << " has " << ehp << " left." << endl;
					cout << "\n----------------------Press any key to continue----------------------" << endl;
					_getch();
				}
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
		if (HP <= 0)
		{
			system("cls");

			cout << "# You died." << endl;
			cout << "# You realized how sad your life was." << endl;
			cout << "# The " << Enemy << " even felt sad for you." << endl;
			cout << Enemy << ": I am so sorry " << PlayerX << ". With your power, you don't stand a chance against me." << endl;
			cout << "# You got angry and channelled your inner luck." << endl;
			Luck();

			system("cls");

			cout << Enemy << ": What? How?" << endl;
			cout << "\n----------------------Press any key to continue----------------------" << endl;
			_getch();
		}
		system("cls");

		cout << "# You defeated the " << Enemy << "." << endl;
		RandomGain();
		cout << "# You were rewarded by the gods with " << rGain << " HP." << endl;
		HP = HP + rGain;
		cout << "# You now have " << HP << " HP." << endl;
		cout << "\n----------------------Press any key to continue----------------------" << endl;
		_getch();
		C++;
	}
	void Story(string& Enemy1)
	{
		while (a != 5722)
		{
			system("cls");

			cout << "# You arrived at the port." << endl;
			cout << "# A demi-human started to walk towards you." << endl;
			cout << "# What would you like to do?" << endl;
			cout << "\t >> Enter '1' to run away." << endl;
			cout << "\t >> Enter '2' to talk to him." << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
			Command(choice);
			if (choice == "1")
			{
				Path1();
				break;
			}
			else if (choice == "2")
			{
				Path2();
				break;
			}
			else
			{
				cout << "\nLet's try again." << endl;
				cout << "\n----------------------Press any key to continue----------------------" << endl;
				_getch();
			}
		}
		Enemy1 = Enemy;
	}
};

int main()
{
	Game game;

	string input, Player, EnemyX;
	string Boss[3] = { "Bone Lord: It's not over yet!",
		"Bone Lord: These guys are useless. The next one is the most powerful.",
		"Bone Lord: Also useless. Fine. I'll kill you myself!!!" };

	cout << "Welcome to Bones!!!" << endl;
	cout << "\n \t >> Type 'Help' for help.";
	cout << "\n \t >> Type anything to continue." << endl;
	cout << "\nAnswer: ";
	cin >> input;
	game.Command(input);

	system("cls");

	cout << "Without further ado, let's choose your class." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	game.Class();
	game.ClassRetry();

	system("cls");

	cout << "Great job, umh..." << endl;
	cout << "Hmmm, let's get your name next." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	game.Name();
	game.NameRetry(Player);

	system("cls");

	cout << "Well, I think you're all ready " << Player << "." << endl;
	cout << "Let's get going then." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();

	system("cls");

	cout << "Welcome to Bones, " << Player << "." << endl;
	cout << "This is an island where the evil Bone Lord governs." << endl;
	cout << "Your task is to become the rightful King of the island." << endl;
	cout << "Thus, you must become strong, plow through the Bone army, and defeat the evil Bone Lord." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	game.Story(EnemyX);

	system("cls");

	cout << "Listen up " << Player << "." << endl;
	cout << "This is your first battle in your life." << endl;
	cout << "I'll put your Name, Class, HP, and Damage at the top with the Enemy's name and HP after you." << endl;
	cout << "Hope this helps you." << endl;
	cout << "Good Luck!!!" << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	game.Battle(EnemyX);

	system("cls");

	cout << "# After killing the " << EnemyX << ", a portal opened in front of you." << endl;
	cout << "# The Bone Lord appeared with his army." << endl;
	cout << "Bone Lord: Hello " << Player << "! Thank you for killing that " << EnemyX << ". Now that he's gone, I can finally open a portal. "
		<< "He has been suppressing my portal powers for years. Let us now battle, " << Player << "!" << endl;
	for (int x = 0; x <= 2; x++)
	{
		game.rEnemy(EnemyX);
		cout << "# The Bone Lord sent " << EnemyX << " to attack you." << endl;
		cout << "\n----------------------Press any key to continue----------------------" << endl;
		_getch();
		game.Battle(EnemyX);

		system("cls");

		cout << "# After killing the " << EnemyX << "..." << endl;
		cout << Boss[x] << endl;
	}
	EnemyX = "Bone Lord";
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	game.Battle(EnemyX);

	system("cls");

	cout << "# The Bone Lord has been defeated miraculously by you." << endl;
	cout << "\n# Congratulation " << Player << ". You have freed the Island from the Bone Lord without anyone knowing about it since you are all alone in the middle of nowhere with no one."
		<< " Nonetheless, you have finished the game." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();

	return 0;
}