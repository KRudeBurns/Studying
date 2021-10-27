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

 //this file covers lessons 2 - and solves the assignment
 //to move the cross hair to the lower right portion of the screen
 // but this time by using only two variables
 //www.youtube.com/watch?v=qqlUztlgNA4

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd)
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
	//lesson 2 - move recticle using x and y variables
	//PutPixe(int x, int y, int red, int green, int blue) 
	// x-max 800; y-max = 600	
	//increase in x = rigthward move
	//increase in y = downward move

	//set values for x and y
	const int x = 700;
	const int y = 458;


	gfx.PutPixel(x, y-12, 255, 255, 255);
	gfx.PutPixel(x, y-11, 255, 255, 255);
	gfx.PutPixel(x, y-10, 255, 255, 255);
	gfx.PutPixel(x, y-9, 255, 255, 255);
	gfx.PutPixel(x, y-8, 255, 255, 255);
	gfx.PutPixel(x, y-7, 255, 255, 255);
	gfx.PutPixel(x, y-6, 255, 255, 255);
	gfx.PutPixel(x, y-5, 255, 255, 255);
	gfx.PutPixel(x, y-4, 255, 255, 255);
	gfx.PutPixel(x, y-3, 255, 255, 255);
	gfx.PutPixel(x, y-2, 255, 255, 255);

	// right horizontals at y = 458; x starts at 304
	gfx.PutPixel(x+4, y, 255, 255, 255);
	gfx.PutPixel(x+5, y, 255, 255, 255);
	gfx.PutPixel(x+6, y, 255, 255, 255);
	gfx.PutPixel(x+7, y, 255, 255, 255);
	gfx.PutPixel(x+8, y, 255, 255, 255);
	gfx.PutPixel(x+9, y, 255, 255, 255);
	gfx.PutPixel(x+10, y, 255, 255, 255);
	gfx.PutPixel(x+11, y, 255, 255, 255);
	gfx.PutPixel(x+12, y, 255, 255, 255);
	gfx.PutPixel(x+13, y, 255, 255, 255);
	gfx.PutPixel(x+14, y, 255, 255, 255);

	//lower verticals  at x = 700	
	gfx.PutPixel(x, y+2, 255, 255, 255);
	gfx.PutPixel(x, y+3, 255, 255, 255);
	gfx.PutPixel(x, y+4, 255, 255, 255);
	gfx.PutPixel(x, y+5, 255, 255, 255);
	gfx.PutPixel(x, y+6, 255, 255, 255);
	gfx.PutPixel(x, y+7, 255, 255, 255);
	gfx.PutPixel(x, y+8, 255, 255, 255);
	gfx.PutPixel(x, y+9, 255, 255, 255);
	gfx.PutPixel(x, y+10, 255, 255, 255);
	gfx.PutPixel(x, y+11, 255, 255, 255);
	gfx.PutPixel(x, y+12, 255, 255, 255);


	// left horizontal at y = y, x starts at 696 backwards
	gfx.PutPixel(x-4, y, 255, 255, 255);
	gfx.PutPixel(x-5, y, 255, 255, 255);
	gfx.PutPixel(x-6, y, 255, 255, 255);
	gfx.PutPixel(x-7, y, 255, 255, 255);
	gfx.PutPixel(x-8, y, 255, 255, 255);
	gfx.PutPixel(x-9, y, 255, 255, 255);
	gfx.PutPixel(x-10, y, 255, 255, 255);
	gfx.PutPixel(x-11, y, 255, 255, 255);
	gfx.PutPixel(x-12, y, 255, 255, 255);
	gfx.PutPixel(x-13, y, 255, 255, 255);
	gfx.PutPixel(x-14, y, 255, 255, 255);

}
