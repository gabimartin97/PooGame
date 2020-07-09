#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
public:
	void Init( Vec2 loc_in, Vec2 velocity_in );
	void Update( float dt );
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vec2 location;
	Vec2 velocity;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};