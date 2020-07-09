#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"

class Dude
{
public:
	Dude(Vec2 loc_in);
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd,float dt );
	Vec2 GetLocation()const;
	//float GetX() const;
	//float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 location;
	//float x = 400.0f;
	//float y = 300.0f;
	static constexpr float speed = 1.0f * 60.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};