#include"Physics.h"



/*
backup:

	if (player_pos.x-Player::hitbox<=obstacle::pos.x+width)
	{
		should_move.left = false;
	}

	if (player_pos.x + Player::hitbox >= obstacle::pos.x)
	{
		should_move.right = false;
	}

	if (player_pos.y - Player::hitbox <= obstacle::pos.y)
	{
		should_move.up = false;
	}

	if (player_pos.x + Player::hitbox >= obstacle::pos.y + height)
	{
		should_move.down = false;
	}
*/