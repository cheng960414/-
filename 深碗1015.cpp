#include<iostream>
using namespace std;
class GameCharacter
{
public:

	string name;
	int hp;
	int level;
	GameCharacter(string n, int h, int i)
	{
		this->name = n;
		this->hp = h;
		this->level = i;
	}
	void damage(int value) {
		hp=hp - value;
		if (hp < 0) { hp = 0; }
		cout << "damage:" << value << endl;
		cout << "hp:" << hp << endl;
	}
	void heal(int value) {
		hp += value;
		if (hp > 100)hp = 100;
		cout << "hp:" << hp << endl;
	}
	void levelUp() 
	{
		level++;
		hp = 100;
		cout << "level:" << level << endl;
	}
	void show() {
		cout << "name:" << name << endl;
		cout << "hp:" << hp << endl;
		cout << "level:" << level << endl;
	}
};

int main()
{	
	string name;
	int hp;
	int level;
	cin >> name;
	cin >>hp;
	cin >> level;

	cout << "name:" << name << endl;
	cout << "hp:" << hp << endl;
	cout << "level:" << level << endl;
	GameCharacter p1(name,hp, level);
	int n;
	

	while (cin >> n&&n != 0) {
		if (n == 1) {
			p1.damage(30);
		}
		else if (n == 2) {
			int x=0;
			cout << "輸入想回的血";
			cin >> x;
			p1.heal(x);
		}
		else if (n == 3) {
			p1.levelUp();
		}
		else if (n == 4) {
			p1.show();
		}
		else return 0;
	}

	return 0;
}