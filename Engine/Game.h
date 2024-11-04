/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Poo.h"
#include "Dude.h"
#include <random>
#include "Rect.h"
#include "Meter.h"
#include "Lives.h"
#include "FrameTimer.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
    /*  User Functions              */
	void drawGameOver(int x, int y);
	void drawTitle(int x, int y);


	
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/*
	int x = 200;
	int y = 200;

	int width = 150;
	int height = 150;

	Color c = Colors::Green;*/

	std::random_device rd;
	std::mt19937 rng;
	std::uniform_real_distribution<float> xDist;
	std::uniform_real_distribution<float> yDist;

	std::uniform_real_distribution<float> vDist;

	static int constexpr npoos = 10;
	Poo poos[npoos];

	Dude dude;

	std::uniform_int_distribution<int> rDist;
	std::uniform_int_distribution<int> gDist;
	std::uniform_int_distribution<int> bDist;

	Rect rect;
	Meter meter;
	Lives lives;
	FrameTimer frameTimer;

	float dt;
	
	int xGameOver = 370;
	int yGameOver = 260;

	int xTitle = 310;
	int yTitle = 225;

	bool isGameOver = false;
	bool isStarted = false;
	
	/********************************/
};