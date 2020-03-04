#pragma once

#include <SDL.h>
#undef main

#include <algorithm>
#include <cmath>

const int WIDTH = 320;
const int HEIGHT = 240;

class Zdraw {
public:

	Zdraw();
	~Zdraw();

	bool init(const char* title, int width, int height);
	void update();
	void pollevent();
	void clear();

	inline void putpixel(int x, int y, uint32_t color)
	{
		if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
			fbuf[x + y * WIDTH] = color;
		}
		else {
			return;
		}
	}

public:
	bool aKey = false;
	bool wKey = false;
	bool sKey = false;
	bool dKey = false;
	bool upKey = false;
	bool downKey = false;
	bool leftKey = false;
	bool rightKey = false;


private:
	uint32_t* fbuf = nullptr;

private:
	SDL_Texture* screen_texture;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event event;

};

