#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Goal
{
public:
	Goal(Vec2 location_in){
		location = location_in;
	}

	void Draw( Graphics& gfx ) const
	{
		gfx.DrawRectDim( int( location.x ),int( location.y ),int( dimension ),int( dimension ),c );
	}
	bool TestCollision( const Dude& dude ) const
	{
		const float duderight = dude.GetLocation().x + dude.GetWidth();
		const float dudebottom = dude.GetLocation().y + dude.GetHeight();
		const float pooright = location.x + dimension;
		const float poobottom = location.y + dimension;

		return
			duderight >= location.x &&
			dude.GetLocation().x <= pooright &&
			dudebottom >= location.y &&
			dude.GetLocation().y <= poobottom;
	}
	void Respawn( float in_x,float in_y )
	{
		location.x = in_x;
		location.y = in_y;
	}
	void UpdateColor()
	{
		if( colorIncreasing )
		{
			if( c.GetR() >= 253 )
			{
				colorIncreasing = false;
			}
			else
			{
				c = Color( c.GetR() + 2,c.GetG() + 4,c.GetB() + 4 );
			}
		}
		else
		{
			if( c.GetR() <= 127 )
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color( c.GetR() - 2,c.GetG() - 4,c.GetB() - 4 );
			}
		}
	}
private:
	static constexpr float dimension = 20;
	Color c = { 127,0,0 };
	bool colorIncreasing = true;
	Vec2 location;
	
};