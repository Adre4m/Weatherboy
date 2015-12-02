#ifndef POWER_HPP
#define POWER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <assert.h>
#include "default.hpp"

using namespace std;

/**
	\file power.hpp

	\author Adrien BOURGEOIS
	\version 0.1
	\date 02 december 2015
	\copyright Billy's prod
*/

//Thunder will retrieve to target 20% of initial life and restore 0%  of user life
//Rain    will retrieve to target 0%  of initial life and restore 20% of user life
//Snow    will retrieve to target 5%  of initial life and restore 5%  of user life
//Heat    will retrieve to target 10% of initial life and restore 10% of user life

class Power {
	enum power_name {
		NONE = 0,
		THUNDER = 1,
		RAIN = 2,
		SNOW = 3,
		HEAT = 4
	} name;
	string descirption;
	bool is_unlock[5];
public:
	Power() : name(NONE), descirption("") {init_unlock();};
	Power(power_name _name, string _description) : name(_name), descirption(_description) {init_unlock();};
	int use_active_power(int key);
	int use_passive_power(int key);
	int init_unlock();
	int unlock_power(int key);
	~Power() {};

};

#endif