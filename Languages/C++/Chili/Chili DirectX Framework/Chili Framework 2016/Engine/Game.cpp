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

 //covers tutorial 4 - 4.3 
//gives us loops, classes and objects 
// that way we can move our reticles

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

int Game::getX()
{	
	return x;
}

int Game::getY()
{	
	return y;
}

void Game::setX(int increment)
{
	if (x >= 799)
	{
		x = 795;
		increment = 0;
	}

	if (x <= 1)
	{
		x = 5;		
	}
	x += increment;
}

void Game::setY(int increment)
{
	if (y >= 599)
	{
		y = 598;
		increment = 0;
	}
	y += increment;
}

void Game::UpdateModel()
{
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		if (inhibitKeyPress)
		{

		}
		else
		{
			setX(increment);
			++vx;
			inhibitKeyPress = true;
		}
	}
	else
	{
		//reset the keyPress inhibition
		inhibitKeyPress = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		if (inhibitKeyPress)
		{
			//do nothing
		}
		else
		{
			setX(-increment);
			--vx;
			inhibitKeyPress = false;
		}
	}
	else
	{
		inhibitKeyPress = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		if (inhibitKeyPress)
		{
			//do nothing
		}
		else
		{
			setY(increment);
			++vy;
			inhibitKeyPress = false;
		}
	}
	else
	{
		inhibitKeyPress = false;
	}

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		if (inhibitKeyPress)
		{
			//do nothing
		}
		else
		{
			setY(-increment);
			--vy;
			inhibitKeyPress = false;
		}
	}
	else
	{
		inhibitKeyPress = false;
	}

	x = x + vx;
	y = y + vy;
	shapeIsChanged = wnd.kbd.KeyIsPressed(VK_SHIFT);
	colorIsChanged = wnd.kbd.KeyIsPressed(VK_CONTROL);
}

void Game::ComposeFrame()
{
	int dx = getX();
	int dy = getY();		

		if (colorIsChanged)
		{
			gb = 0;
		}
		else
		{
			gb = 255;
		}

		if (shapeIsChanged) //i.e. if Shift key is pressed
		{
			gfx.PutPixel(-5 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(-5 + dx, -4 + dy, 255, gb, gb);
			gfx.PutPixel(-5 + dx, -3 + dy, 255, gb, gb);
			gfx.PutPixel(-4 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(-3 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(-5 + dx, 5 + dy, 255, gb, gb);
			gfx.PutPixel(-5 + dx, 4 + dy, 255, gb, gb);
			gfx.PutPixel(-5 + dx, 3 + dy, 255, gb, gb);
			gfx.PutPixel(-4 + dx, 5 + dy, 255, gb, gb);
			gfx.PutPixel(-3 + dx, 5 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, -4 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, -3 + dy, 255, gb, gb);
			gfx.PutPixel(4 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(3 + dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, 5 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, 4 + dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, 3 + dy, 255, gb, gb);
			gfx.PutPixel(4 + dx, 5 + dy, 255, gb, gb);
			gfx.PutPixel(3 + dx, 5 + dy, 255, gb, gb);
		}
		else
		{
			gfx.PutPixel(-5 + dx, dy, 255, gb, gb);
			gfx.PutPixel(-4 + dx, dy, 255, gb, gb);
			gfx.PutPixel(-3 + dx, dy, 255, gb, gb);
			gfx.PutPixel(3 + dx, dy, 255, gb, gb);
			gfx.PutPixel(4 + dx, dy, 255, gb, gb);
			gfx.PutPixel(5 + dx, dy, 255, gb, gb);
			gfx.PutPixel(dx, -5 + dy, 255, gb, gb);
			gfx.PutPixel(dx, -4 + dy, 255, gb, gb);
			gfx.PutPixel(dx, -3 + dy, 255, gb, gb);
			gfx.PutPixel(dx, 3 + dy, 255, gb, gb);
			gfx.PutPixel(dx, 4 + dy, 255, gb, gb);
			gfx.PutPixel(dx, 5 + dy, 255, gb, gb);
		}
	
}
