#include "Dude.h"
#include "Graphics.h"

Dude::Dude(const Vec2& loc_in)
{
	location = loc_in;
}

void Dude::ClampToScreen()
{
	const float right = location.x + width;
	if( location.x < 0 )
	{
		location.x = 0;
	}
	else if( right >= float( Graphics::ScreenWidth ) )
	{
		location.x = float( Graphics::ScreenWidth - 1 ) - width;
	}

	const float bottom = location.y + height;
	if( location.y < 0 )
	{
		location.y = 0;
	}
	else if( bottom >= float( Graphics::ScreenHeight ) )
	{
		location.y = float( Graphics::ScreenHeight - 1 ) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	const int x_int = int( location.x );
	const int y_int = int( location.y );

	gfx.PutPixel( 7 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 8 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 9 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 10 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 12 + x_int,0 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,1 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,1 + y_int,0,0,0 );
	gfx.PutPixel( 7 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,1 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,1 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,1 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,2 + y_int,0,0,0 );
	gfx.PutPixel( 4 + x_int,2 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 14 + x_int,2 + y_int,254,221,88 );
	gfx.PutPixel( 15 + x_int,2 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,2 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,3 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 14 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 15 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,3 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,3 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,4 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 14 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 15 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,4 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,4 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 4 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 12 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 13 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,5 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,5 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,6 + y_int,255,255,255 );
	gfx.PutPixel( 4 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,6 + y_int,255,255,255 );
	gfx.PutPixel( 12 + x_int,6 + y_int,255,255,255 );
	gfx.PutPixel( 13 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,6 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,6 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,7 + y_int,255,255,255 );
	gfx.PutPixel( 3 + x_int,7 + y_int,255,255,255 );
	gfx.PutPixel( 4 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,7 + y_int,255,255,255 );
	gfx.PutPixel( 12 + x_int,7 + y_int,255,255,255 );
	gfx.PutPixel( 13 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,7 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,7 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 3 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 4 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 5 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 12 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 13 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 14 + x_int,8 + y_int,255,255,255 );
	gfx.PutPixel( 15 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,8 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,8 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 2 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 4 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 12 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 13 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,9 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,9 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,10 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 2 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 14 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 15 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,10 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,10 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,11 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 2 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 7 + x_int,11 + y_int,20,14,18 );
	gfx.PutPixel( 8 + x_int,11 + y_int,18,11,14 );
	gfx.PutPixel( 9 + x_int,11 + y_int,18,12,14 );
	gfx.PutPixel( 10 + x_int,11 + y_int,18,12,14 );
	gfx.PutPixel( 11 + x_int,11 + y_int,21,13,16 );
	gfx.PutPixel( 12 + x_int,11 + y_int,24,11,15 );
	gfx.PutPixel( 13 + x_int,11 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 15 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,11 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,11 + y_int,0,0,0 );
	gfx.PutPixel( 0 + x_int,12 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 2 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 6 + x_int,12 + y_int,23,9,23 );
	gfx.PutPixel( 7 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 8 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 9 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 10 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 11 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 12 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 13 + x_int,12 + y_int,135,26,68 );
	gfx.PutPixel( 14 + x_int,12 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 16 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,12 + y_int,254,221,88 );
	gfx.PutPixel( 19 + x_int,12 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,13 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,13 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,13 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,13 + y_int,254,221,88 );
	gfx.PutPixel( 5 + x_int,13 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 7 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 8 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 9 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 10 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 11 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 12 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 13 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 14 + x_int,13 + y_int,135,26,68 );
	gfx.PutPixel( 15 + x_int,13 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,13 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,13 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,13 + y_int,0,0,0 );
	gfx.PutPixel( 1 + x_int,14 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,14 + y_int,254,221,88 );
	gfx.PutPixel( 3 + x_int,14 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,14 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 6 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 7 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 8 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 9 + x_int,14 + y_int,251,192,224 );
	gfx.PutPixel( 10 + x_int,14 + y_int,251,192,224 );
	gfx.PutPixel( 11 + x_int,14 + y_int,251,192,224 );
	gfx.PutPixel( 12 + x_int,14 + y_int,251,192,224 );
	gfx.PutPixel( 13 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 14 + x_int,14 + y_int,135,26,68 );
	gfx.PutPixel( 15 + x_int,14 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,14 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,14 + y_int,254,221,88 );
	gfx.PutPixel( 18 + x_int,14 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,15 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,15 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,15 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,15 + y_int,135,26,68 );
	gfx.PutPixel( 6 + x_int,15 + y_int,135,26,68 );
	gfx.PutPixel( 7 + x_int,15 + y_int,135,26,68 );
	gfx.PutPixel( 8 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 9 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 10 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 11 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 12 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 13 + x_int,15 + y_int,251,192,224 );
	gfx.PutPixel( 14 + x_int,15 + y_int,135,26,68 );
	gfx.PutPixel( 15 + x_int,15 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,15 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,15 + y_int,0,0,0 );
	gfx.PutPixel( 2 + x_int,16 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,16 + y_int,254,221,88 );
	gfx.PutPixel( 4 + x_int,16 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,16 + y_int,135,26,68 );
	gfx.PutPixel( 6 + x_int,16 + y_int,135,26,68 );
	gfx.PutPixel( 7 + x_int,16 + y_int,135,26,68 );
	gfx.PutPixel( 8 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 9 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 10 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 11 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 12 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 13 + x_int,16 + y_int,251,192,224 );
	gfx.PutPixel( 14 + x_int,16 + y_int,135,26,68 );
	gfx.PutPixel( 15 + x_int,16 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,16 + y_int,254,221,88 );
	gfx.PutPixel( 17 + x_int,16 + y_int,0,0,0 );
	gfx.PutPixel( 3 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 4 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 7 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 8 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 9 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 10 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 12 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 13 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 15 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 16 + x_int,17 + y_int,0,0,0 );
	gfx.PutPixel( 5 + x_int,18 + y_int,0,0,0 );
	gfx.PutPixel( 6 + x_int,18 + y_int,0,0,0 );
	gfx.PutPixel( 7 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 8 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 9 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 10 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 11 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 12 + x_int,18 + y_int,254,221,88 );
	gfx.PutPixel( 13 + x_int,18 + y_int,0,0,0 );
	gfx.PutPixel( 14 + x_int,18 + y_int,0,0,0 );
	gfx.PutPixel( 7 + x_int,19 + y_int,0,0,0 );
	gfx.PutPixel( 8 + x_int,19 + y_int,0,0,0 );
	gfx.PutPixel( 9 + x_int,19 + y_int,0,0,0 );
	gfx.PutPixel( 10 + x_int,19 + y_int,0,0,0 );
	gfx.PutPixel( 11 + x_int,19 + y_int,0,0,0 );
	gfx.PutPixel( 12 + x_int,19 + y_int,0,0,0 );
}

void Dude::Update( const Keyboard & kbd,float dt )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		location.x += speed * dt;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		location.x -= speed * dt;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		location.y += speed * dt;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		location.y -= speed * dt;
	}
}

Vec2 Dude::GetLocation()const
{
	return location;
}

/*float Dude::GetX() const
{
	return location.x;
}

float Dude::GetY() const
{
	return location.y;
}
*/
float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
