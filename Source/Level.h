#pragma once
#include"Entity.h"
#include"Ground.h"


class Level
{
public:
	std::vector<Ground> ground_pool;
	Player player1;

	void update();
	void create_map();
	void render();
};