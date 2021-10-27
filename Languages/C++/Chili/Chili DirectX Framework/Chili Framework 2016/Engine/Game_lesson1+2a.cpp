/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/


#include "MainWindow.h"
#include "Game.h"

//this file covers lessons 1 - and solves the assignment
//to move the cross hair to the lower right portion of the screen
// To run this you would have to rename it as Game.cpp
// or do something else
// tutorial video is at:
//www.youtube.com/watch?v=qqlUztlgNA4

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	//lesson 1 - making a dot
	//PutPixe(int x, int y, int red, int green, int blue) 
	// x-max 800; y-max = 600
	//  
	//increase in x = rigthward move
	//increase in y = downward move
		
	// top vertical at x = 300, y starts at 413 
	gfx.PutPixel(700, 446, 255, 255, 255);
	gfx.PutPixel(700, 447, 255, 255, 255);
	gfx.PutPixel(700, 448, 255, 255, 255);
	gfx.PutPixel(700, 449, 255, 255, 255);
	gfx.PutPixel(700, 450, 255, 255, 255);
	gfx.PutPixel(700, 451, 255, 255, 255);
	gfx.PutPixel(700, 452, 255, 255, 255);
	gfx.PutPixel(700, 453, 255, 255, 255);
	gfx.PutPixel(700, 454, 255, 255, 255);
	gfx.PutPixel(700, 455, 255, 255, 255);
	gfx.PutPixel(700, 456, 255, 255, 255);
	
	// right horizontals at y = 458; x starts at 304
	gfx.PutPixel(704, 458, 255, 255, 255);
	gfx.PutPixel(705, 458, 255, 255, 255);
	gfx.PutPixel(706, 458, 255, 255, 255);
	gfx.PutPixel(707, 458, 255, 255, 255);
	gfx.PutPixel(708, 458, 255, 255, 255);
	gfx.PutPixel(709, 458, 255, 255, 255);
	gfx.PutPixel(710, 458, 255, 255, 255);
	gfx.PutPixel(711, 458, 255, 255, 255);
	gfx.PutPixel(712, 458, 255, 255, 255);
	gfx.PutPixel(713, 458, 255, 255, 255);
	gfx.PutPixel(714, 458, 255, 255, 255);

	//lower verticals  at x = 700	
	gfx.PutPixel(700, 460, 255, 255, 255);
	gfx.PutPixel(700, 461, 255, 255, 255);
	gfx.PutPixel(700, 462, 255, 255, 255);
	gfx.PutPixel(700, 463, 255, 255, 255);
	gfx.PutPixel(700, 464, 255, 255, 255);
	gfx.PutPixel(700, 465, 255, 255, 255);
	gfx.PutPixel(700, 466, 255, 255, 255);
	gfx.PutPixel(700, 467, 255, 255, 255);
	gfx.PutPixel(700, 468, 255, 255, 255);
	gfx.PutPixel(700, 469, 255, 255, 255);
	gfx.PutPixel(700, 470, 255, 255, 255);


	// left horizontal at y = 458, x starts at 696 backwards
	gfx.PutPixel(696, 458, 255, 255, 255);
	gfx.PutPixel(695, 458, 255, 255, 255);
	gfx.PutPixel(694, 458, 255, 255, 255);
	gfx.PutPixel(693, 458, 255, 255, 255);
	gfx.PutPixel(692, 458, 255, 255, 255);
	gfx.PutPixel(691, 458, 255, 255, 255);
	gfx.PutPixel(690, 458, 255, 255, 255);
	gfx.PutPixel(689, 458, 255, 255, 255);
	gfx.PutPixel(688, 458, 255, 255, 255);
	gfx.PutPixel(687, 458, 255, 255, 255);
	gfx.PutPixel(686, 458, 255, 255, 255);

}
