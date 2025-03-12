// Name:Cynthia Kabati
//Registration number:BSCIT-05-0087/2024
#include <iostream>
using namespace std;

struct Player{
	string Name;
	int Score;
	int Level;
};

void displayPlayer(const Player &p){
	cout <<"Player Name: "<<p.Name<<endl;
	cout <<"Player Score: "<<p.Score<<endl;
	cout <<"Player Level: "<<p.Level<<endl;
}

int main () {
	Player Player1 = {"Moses",50,"stricker"};
	Player Player2 = {"Jacob",45,"Midfielder"};
	
	displayPlayer(PLayer1);
	displayPlayer(Player2);
	
	return 0;
} 