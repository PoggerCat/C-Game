#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;
bool choiced;
string choicez;
int playerhealth;
int enemyhealth;
string type;
int enemyhealthe;
string enhealth;
string doo;
string choicef;
string hlthe;



int hlt(int h)
{
	if (h <= 5)
	{
		int enemyhealthei = 100;
		return enemyhealthei;
	}
	if (5 < h && h <= 7)
	{
		int enemyhealthei = 200;
		return enemyhealthei;
	}
	if (7 < h && h <= 9)
	{
		int enemyhealthie = 300;
		return enemyhealthie;

	}
	if (h == 10)
	{
		int enemyhealthie = 500;
		return enemyhealthie;
	}
	else
	{
		abort();
	}
}





string gkp(int pp)
{
	if (pp <= 5)
	{
		type = "common";
		enemyhealth = 100;
		return type;
	}
	if (5 < pp && pp <= 7)
	{
		type = "rare";
		enemyhealth = 200;
		return type;
	}
	if (7 < pp && pp <= 9)
	{
		type = "epic";
		enemyhealth = 300;
		return type;
	}
	if (pp == 10)
	{
		type = "legendary";
		enemyhealth = 500;
		return type;

	}
	else
	{
		abort();
	}

}




string enc(int a) {
	if (a == 3)
	{

		string k = gkp(rand() % 10 + 1);
		string q = "You found an " + k + " enemy!";


		return q;
	}
	else
	{
		string w = "You Peacefully walk";
		return w;
	}




}



int main() {
	srand (time(NULL));
	string choice;
	cout << "Would you like to move?: " << endl;
	cin >> choice;
	if (choice == "yes")
	{
		choiced = true;
	}
	while (choiced == true)
	{
		int l = rand() % 10 + 1;
		cout << l << endl;
		string z = enc(l);
		cout << z << endl;
		if (l == 3)

		{
			string choiceb;
			bool y = false;
			int enemyhealthe = hlt(rand() % 10 + 1);
			cout << enemyhealthe << endl;
			choiced = false;
			string hhh;
			hhh = "it has this much health: ";




			cout << hhh << endl;
			cout << "What would you like to do?: " << endl;
			cout << "run away or attack?" << endl;

			cin >> doo;
			while (doo == "attack")
			{
				int chnce = rand() % 4 + 1;
				if (chnce > 3)
				{
					cout << "miss" << endl;
					cout << "try again?" << endl;
					cin >> choicef;
					if (choicef == "yes")
					{
						doo = "attack";
						return 0;

					}
					else
					{
						doo = "run away";
						return 0;

					}



				}
				else
				{
					enemyhealthe = enemyhealthe - 20;

					char abbb[1024];
					snprintf(abbb, sizeof(abbb), "nice hit, the enemy has %d health left", enemyhealthe);

				}
			}





		}
		cout << "would you like to move again?: " << endl;
		cin >> choicez;
		if (choicez == "yes")
		{
			choiced = true;
		}
		if (choicez == "no")
		{
			abort();
		}


	}
	if (choice == "no")
	{
		abort();
	};




	return 0;
}
