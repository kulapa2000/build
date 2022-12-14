#pragma once
#include"Physics.h"
#include"Ground.h"


struct should_move 
{
	bool up;
	bool down;
	bool left;
	bool right;
};

class Player
{
public:
	void render();
	void check_collide(obstacle obstacle);
	void move();

	should_move should_move ;
	Vector2 player_pos = { -20,-20 };
	float radius = 6;

	int moving_speed = 3;


};