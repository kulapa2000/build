#include"Ground.h"



void obstacle::render() 
{
	DrawRectangle(pos.x, pos.y, width, height, ORANGE);
}

obstacle::obstacle(Vector2 pos, int width, int height)
{
	obstacle::pos = pos;
	obstacle::width = width;
	obstacle::height = height;
	obstacle::obstacle_hitbox = { pos.x,pos.y,width*1.0f,height*1.0f };
}




void Ground::add_boundary() 
{
	obstacle ob1(Ground::pos, 100, 10);   //up
	obstacle_pool.push_back(ob1);

	ob1 = { { Ground::pos.x - 10,Ground::pos.y + 10 }, 10, 100 };//left
	obstacle_pool.push_back(ob1);

	ob1 = { { Ground::pos.x,Ground::pos.y + 110 }, 100, 10 }; //down
	obstacle_pool.push_back(ob1);

	ob1 = { { Ground::pos.x + 100,Ground::pos.y + 10 }, 10, 100 };//right
	obstacle_pool.push_back(ob1);

}

void Ground::render() 
{
	std::vector<obstacle>::iterator it;
	for (it = obstacle_pool.begin(); it != obstacle_pool.end();it++) 
	{
		(*it).render();
	}
}

Ground::Ground(Vector2 pos) 
{
	Ground::pos = pos;
}


	

	//(player.player_pos.x - player.radius >= limit.x) && (player.player_pos.x + player.radius <= limit.x + side_length)
	//((player.player_pos.y-player.radius>=limit.y)&&(player.player_pos.y+player.radius<=limit.y+side_length))