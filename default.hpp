#ifndef DEFAULT_HPP
#define DEFAULT_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <assert.h>
#include <SDL2/SDL.h>

/**
	\file default.hpp

	\author Adrien BOURGEOIS
	\version 0.1
	\date 02 december 2015
	\copyright Billy's prod

	\def INIT_HP
		Provide the maximum amount of hp.

	\def SPEED_PLAYER_PER_SEC
		Provide the amount of pixels traveled in a second.

	\def GRAVITY
		Provide the velocity while falling.

	\def SPEED_THUNDER
		Provide the speed of a thunder attack
*/
		
#define INIT_HP 1000
#define SPEED_PLAYER_PER_SEC 180
#define GRAVITY 1
#define SPEED_THUNDER 180

#endif