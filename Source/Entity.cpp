#include"Entity.h"



void Player::move()
{

	if (IsKeyDown(87) && should_move.up==true)
	{
		player_pos.y -= moving_speed;
	}
	if (IsKeyDown(65) && should_move.left==true)
	{
		player_pos.x -= moving_speed;
	}
	if (IsKeyDown(83) && should_move.down==true)
	{
		player_pos.y += moving_speed;
	}
	if (IsKeyDown(68) && should_move.right==true)
	{
		player_pos.x += moving_speed;
	}

	should_move.up = true;
	should_move.down = true;
	should_move.left = true;
	should_move.right = true;

}



void Player::render()
{
	DrawCircle(player_pos.x, player_pos.y, radius, BLUE);
}



void Player::check_collide(obstacle obstacle) 
{


	Vector2 temp_pos = player_pos;
	bool is_collide;

	player_pos.x += moving_speed;
	is_collide = CheckCollisionCircleRec(player_pos, radius, obstacle.obstacle_hitbox);
	if (is_collide == true)
	{
		should_move.right = false;
	}
	player_pos = temp_pos;

	player_pos.x -= moving_speed;
	is_collide = CheckCollisionCircleRec(player_pos, radius, obstacle.obstacle_hitbox);
	if (is_collide == true)
	{
		Player::should_move.left = false;
	}
	player_pos = temp_pos;

	player_pos.y += moving_speed;
	is_collide = CheckCollisionCircleRec(player_pos, radius, obstacle.obstacle_hitbox);
	if (is_collide == true)
	{
		Player::should_move.down = false;
	}
	player_pos = temp_pos;

	player_pos.y -= moving_speed;
	is_collide = CheckCollisionCircleRec(player_pos, radius, obstacle.obstacle_hitbox);
	if (is_collide == true)
	{
		Player::should_move.up = false;
	}
	player_pos = temp_pos;
}
