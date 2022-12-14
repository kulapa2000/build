#pragma once
#include<vector>
#include"Physics.h"



class obstacle  //a rectangle;
{
public:
	Vector2 pos;
	float width;
	float height;
	Rectangle obstacle_hitbox ; 
	
	void render();
	obstacle(Vector2 pos,int width,int height);


};





class Ground 
{
public:

	Vector2 pos;
	std::vector<obstacle> obstacle_pool;

	void render();
	void add_boundary();
	void add_obstacle(Vector2 pos);

	Ground(Vector2 pos);
};


