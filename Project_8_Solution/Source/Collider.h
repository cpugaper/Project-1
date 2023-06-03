#ifndef __COLLIDER_H__
#define __COLLIDER_H__

#include "SDL/include/SDL_Rect.h"

class Module;

struct Collider
{
	enum Type
	{
		NONE = -1,
		WALL,
		PLAYER,
		SOLDIER,
		TANK,
		TANK_SHOT,
		PLAYER_SHOT,
		ENEMY_SHOT,
		PICKUPS,
		BLUEDIAMOND,
		LIFE,
		HELICOPTER,
		HELICOPTER_SHOT,
		FINALBOSS,
		BOSS_SHOT,
		EXPLOSION,
		BOX,
		BARRELS,
		MELEE,

		MAX
	};

	//Methods
	Collider(SDL_Rect rectangle, Type type, Module* listener = nullptr);

	void SetPos(int x, int y);

	bool Intersects(const SDL_Rect& r) const;

	//Variables
	SDL_Rect rect;
	bool pendingToDelete = false;
	Type type;
	Module* listener = nullptr;
};


#endif // !__COLLIDER_H__

