#include"Level.h"

void Level::create_map()
{
	Ground g1({ 0,0 });
	g1.add_boundary();
	ground_pool.push_back(g1);
	g1 = { {200,0} };
	g1.add_boundary();
	ground_pool.push_back(g1);

}

void Level::render()
{
	for (int i = 0; i < ground_pool.size (); i++)
	{
		ground_pool[i].render();
	}

	player1.render();
}

void Level::update()
{
	for (int i = 0; i < ground_pool.size(); i++)
	{
		for (int x = 0; x < ground_pool[i].obstacle_pool.size(); x++)
		{
			player1.check_collide(ground_pool[i].obstacle_pool[x]);
		}
	}
	player1.move();
}