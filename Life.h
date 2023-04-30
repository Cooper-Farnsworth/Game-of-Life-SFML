#pragma once
#include <SFML/Graphics.hpp>
#include <thread>
using namespace std;

const int Sx = 110;
const int Sy = 110;
short lifeT[Sx][Sy] = { 0 };
short life[Sx][Sy] = { 0 };
int pz = 0;
sf::CircleShape shape[Sx][Sy];

class Game
{
public:
	chrono::milliseconds mil = chrono::microseconds(pz);
	int fl = 1;
	Game();
	int CalculateTmp(int i, int x, int y);
	void Game_Start();
	void Calculate();
	void Draw();
};