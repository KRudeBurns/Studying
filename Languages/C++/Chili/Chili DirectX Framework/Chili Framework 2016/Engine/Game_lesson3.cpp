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
#include <random>
#include <random>
#include <chrono>
#include <functional>

 //this file covers lessons 3 - Conditionals
// I did a lot of messing around with it.
// I changed shapes etc. pretty good programs

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
	//PutPixe(int x, int y, int red, int green, int blue) 
	// x-max 800; y-max = 600	
	//increase in x = rigthward move
	//increase in y = downward move

	//set values for x and y
	const int x = 700;
	const int y = 458;
	int dx = x, dy = y;
	//lets create movement for the cross hair
	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		dx = x + 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		dx = x - 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		dy = y - 100;
	}

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		dy = y + 100;
	}
	//set a conditional to make crosshair appear if the UP key or 8 is pressed
	const bool cond = wnd.kbd.KeyIsPressed(VK_SHIFT);
	const bool cond_2 = wnd.kbd.KeyIsPressed('8');

	if (cond || cond_2) {
		gfx.PutPixel(dx, dy - 11, 50, 168, 82);
		gfx.PutPixel(dx, dy - 10, 50, 168, 82);
		gfx.PutPixel(dx, dy - 12, 50, 168, 82);
		gfx.PutPixel(dx, dy - 9, 50, 168, 82);
		gfx.PutPixel(dx, dy - 8, 50, 168, 82);
		gfx.PutPixel(dx, dy - 7, 50, 168, 82);
		gfx.PutPixel(dx, dy - 6, 50, 168, 82);
		gfx.PutPixel(dx, dy - 5, 50, 168, 82);
		gfx.PutPixel(dx, dy - 4, 50, 168, 82);
		gfx.PutPixel(dx, dy - 3, 50, 168, 82);
		gfx.PutPixel(dx, dy - 2, 50, 168, 82);

		// right horizontals at y = 458; x starts at 304
		gfx.PutPixel(dx + 4, dy, 50, 168, 82);
		gfx.PutPixel(dx + 5, dy, 50, 168, 82);
		gfx.PutPixel(dx + 6, dy, 50, 168, 82);
		gfx.PutPixel(dx + 7, dy, 50, 168, 82);
		gfx.PutPixel(dx + 8, dy, 50, 168, 82);
		gfx.PutPixel(dx + 9, dy, 50, 168, 82);
		gfx.PutPixel(dx + 10, dy, 50, 168, 82);
		gfx.PutPixel(dx + 11, dy, 50, 168, 82);
		gfx.PutPixel(dx + 12, dy, 50, 168, 82);
		gfx.PutPixel(dx + 13, dy, 50, 168, 82);
		gfx.PutPixel(dx + 14, dy, 50, 168, 82);

		//lower verticals  at x = 700	
		gfx.PutPixel(dx, dy + 2, 50, 168, 82);
		gfx.PutPixel(dx, dy + 3, 50, 168, 82);
		gfx.PutPixel(dx, dy + 4, 50, 168, 82);
		gfx.PutPixel(dx, dy + 5, 50, 168, 82);
		gfx.PutPixel(dx, dy + 6, 50, 168, 82);
		gfx.PutPixel(dx, dy + 7, 50, 168, 82);
		gfx.PutPixel(dx, dy + 8, 50, 168, 82);
		gfx.PutPixel(dx, dy + 9, 50, 168, 82);
		gfx.PutPixel(dx, dy + 10, 50, 168, 82);
		gfx.PutPixel(dx, dy + 11, 50, 168, 82);
		gfx.PutPixel(dx, dy + 12, 50, 168, 82);


		// left horizontal at y = y, x starts at 696 backwards
		gfx.PutPixel(dx - 4,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 5,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 6,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 7,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 8,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 14, dy,  50, 168, 82);
		gfx.PutPixel(dx - 9,  dy, 50, 168, 82);
		gfx.PutPixel(dx - 10, dy,  50, 168, 82);
		gfx.PutPixel(dx - 11, dy,  50, 168, 82);
		gfx.PutPixel(dx - 12, dy,  50, 168, 82);
		gfx.PutPixel(dx - 13, dy,  50, 168, 82);
	}
	else if (wnd.kbd.KeyIsPressed(VK_SPACE) || wnd.kbd.KeyIsPressed('9'))
	{
		//fill the screen with 1000 randomly placed dots
		// filled with random colors

		//first set up a random seed generator
		//requires <random> library	   
		//setup my random seeds requires <chrono> library
		//std::bind is part of <functional> library

		namespace sc = std::chrono;
		using std::mt19937_64;
		auto seed = sc::high_resolution_clock::now().time_since_epoch().count();
		auto real_xRand = std::bind(std::uniform_real_distribution<double>(1, 799), mt19937_64(seed));
		auto real_yRand = std::bind(std::uniform_real_distribution<double>(1, 599), mt19937_64(seed));
		auto real_rgbRand = std::bind(std::uniform_real_distribution<double>(0, 255), mt19937_64(seed));

		//create an array for x, y and rgb
		const int SIZE = 1000;
		int xDots[SIZE], yDots[SIZE], rColor[SIZE], gColor[SIZE], bColor[SIZE];
		
		//fill in the arrays with the relevant values
		for (int i = 0; i < SIZE; ++i)
		{
			xDots[i] = real_xRand();
			yDots[i] = real_yRand();
			rColor[i] = real_rgbRand();
			gColor[i] = real_rgbRand();
			bColor[i] = real_rgbRand();
		}

		//now populate the screen with the dots		
		for (int i = 1, c = 1; i <= SIZE && c <= 250; ++i) 
		{
			for (int j = 0; j < SIZE; ++j) {
				//gfx.PutPixel(xDots[i], yDots[j], rColor[c], gColor[c+1], bColor[c-1]);
				gfx.PutPixel(xDots[i], yDots[j], rColor[c], gColor[2+c], bColor[3+c]);
			}
		}
	}
	else  //draw a large big sqare in the middle of the screen
	{
		const int xCenter = 400; //x  at the center
		const int yCenter = 300; //y at the center
		const int colorCode = 255; //rgb limit

		for (int i = 0; i < 250; i++)
		{
			if (yCenter + i > 599)
				break;
			if (xCenter + i > 799)
				break;

			//top (2 halves)
			gfx.PutPixel(xCenter+(1+i), yCenter-100, colorCode-i, colorCode - (i*2), colorCode-(i/3));			
			gfx.PutPixel(xCenter - (1 + i), yCenter-100, colorCode - i, colorCode - (i * 2), colorCode - (i / 3));
			
			
			//left side
			gfx.PutPixel(xCenter-250, (yCenter-100)+(3+i), colorCode-(i), colorCode - (i+3), colorCode-(i*2));
			
			//right side
			gfx.PutPixel(xCenter + 250, (yCenter - 100) + (3 + i), colorCode - (i), colorCode - (i + 3), colorCode - (i * 2));
			
			//bottom (2 halves)
			gfx.PutPixel(xCenter + (1 + i), yCenter+150, colorCode - i, colorCode - (i * 2), colorCode - (i / 3));
			gfx.PutPixel(xCenter - (1 + i), yCenter+150, colorCode - i, colorCode - (i * 2), colorCode - (i / 3));			
		}
	}
}
