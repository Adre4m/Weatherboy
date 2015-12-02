#ifndef CHARA_HPP
#define CHARA_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <assert.h>
#include "power.hpp"
#include "default.hpp"
using namespace std;


/**
	\file chara.hpp

	\author Adrien BOURGEOIS
	\version 0.1 
	\date 02 december 2015
	\copyright Billy's prod
*/

class Character {
protected:
	string name;
	int hp;
	SDL_Point pos;
	Power powers;
public:
	virtual int move(int dir) = 0;
	virtual int use_power(bool is_active, int key) = 0;
	virtual string to_string() = 0;
	friend std::ostream & operator << (std::ostream& ost, Character* c);
	Character() : name(""), hp(INIT_HP), pos({0, 0}) {};
	Character(string _name) : name(_name), hp(INIT_HP), pos({0, 0}) {};
	Character(string _name, Power _powers) : name(_name), hp(INIT_HP), pos({0, 0}), powers(_powers) {};
	virtual ~Character() {};
	void set_hp(int _hp);
	SDL_Point get_pos();
	int get_pos_x();
	int get_pos_y();
	void set_pos(int x, int y);
};

class Weatherboy : public Character {
public:
	int move(int dir);
	int use_power(bool is_active, int key);
	string to_string();
	Weatherboy() : Character("Weatherboy") {};
	Weatherboy(Power _powers) : Character("Weatherboy", _powers) {};
	~Weatherboy() {};
};

class Timeboy : public Character {
public:
	int move(int dir);
	int use_power(bool is_active, int key);
	string to_string();
	Timeboy() : Character("Timeboy") {};
	Timeboy(Power _powers) : Character("Timeboy", _powers) {};
	~Timeboy() {};
};

#endif