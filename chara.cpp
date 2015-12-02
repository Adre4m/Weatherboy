#include "chara.hpp"
#include <sstream>

/**
	\file chara.cpp

	\author Adrien BOURGEOIS
	\version 0.1
	\date 02 december 2015
	\copyright Billy's prod
*/

/**
	\brief override of operator <<
	\param ch the character to be displayed.

	It's a simple console display, it will provide information like :
	\li character's name
	\li position on the screen
	\li ...

	\return ost the file to write in, essentially console.
*/
std::ostream & operator<< (std::ostream& ost, Character* ch)
{
	ost << ch->to_string();
	ost << " is at : (";
	ost << ch->get_pos_x();
	ost << ", ";
	ost << ch->get_pos_y();
	ost << ")" << endl;
	return ost;
}

void Character::set_hp(int _hp) {
	hp = _hp;
}

SDL_Point Character::get_pos() {
	return pos;
}

int Character::get_pos_x() {
	return pos.x;
}
int Character::get_pos_y() {
	return pos.y;
}

/**
	\brief move the player on the screen.
	\param dir provide in which direction you will move.

	Dir goes from \b 1 to \b 4, 1 to move left, \b 2 right, \b 3 up, \b 4 down.\n If dir is different
	then an error code will be returned (\b -1).\n If the player can't move then another error code
	is returned (\b -2, such as you are on the left border, you can't go left. Or you are on the
	floor you can't go any lower)

	\return \li \b dir if the player moved properly.
			\li \b -1 if the direction doesn't exist.
			\li \b -2 if the movevement is impossible.
*/
int Weatherboy::move(int dir) {
	//TODO
	cout << dir << endl;
	return 0;
}

/**
	\brief use the power of index key.
	\param is_active provide how the power should be used. Key provide which power should be used
	\return \li \b key if the power properly was properly.
			\li \b -1 if the power doesn't exist.
			\li \b -2 if it is impossible to use the power.
*/
int Weatherboy::use_power(bool is_active, int key) {
	return (is_active) ? powers.use_active_power(key) : powers.use_passive_power(key);
}

string Weatherboy::to_string() {
	stringstream ss;
	ss << name;
	string ts;
	ss >> ts;
	return ts;
}

/**
	\brief move the ennemy on the screen.
	\param dir provide in which direction Timeboy will move.

	Dir goes from \b 1 to \b 4, 1 to move left, \b 2 right, \b 3 up, \b 4 down.\n If dir is different
	then an error code will be returned (\b -1).\n If ennemy can't move then another error code
	is returned (\b -2, such as you are on the left border, you can't go left. Or you are on the
	floor you can't go any lower).

	\return \li \b dir if ennemy moved properly.
			\li \b -1 if the direction doesn't exist.
			\li \b -2 if the movevement is impossible.
*/
int Timeboy::move(int dir) {
	//TODO
	cout << dir << endl;
	return 0;
}

/**
	\brief use the power of index key.
	\param is_active provide how the power should be used. Key provide which power should be used
	\return \li \b key if the power properly was properly.
			\li \b -1 if the power doesn't exist.
			\li \b -2 if it is impossible to use the power.
*/
int Timeboy::use_power(bool is_active, int key) {
	return (is_active) ? powers.use_active_power(key) : powers.use_passive_power(key);
}

string Timeboy::to_string() {
	stringstream ss;
	ss << name;
	string ts;
	ss >> ts;
	return ts;
}