#include "power.hpp"

/**
	C++ 11
	\file power.cpp

	\author Adrien BOURGEOIS
	\version 0.1
	\date 02 december 2015
	\copyright Billy's prod
*/

/**
	\brief Initialise the table of unlocked power to false.
	\return \b 0 no error is possible.
*/
int Power::init_unlock() {
	is_unlock[0] = true;
	for (int i = 1; i < 5; ++i)
		is_unlock[i] = false;
	return 0;
}

/**
	\param key the power to unlock.

	key goes from 0 to 4. If key is different
	then an error code will be returned (-1).\n If the player can't use it then another error code
	is returned (-2)

	\return \li \b key if the power properly was properly.
			\li \b -1 if the power doesn't exist.
			\li \b -2 if it is impossible to use the power.
*/
int Power::use_active_power(int key) {
	if (0 <= key && key < 5) {
		if (is_unlock[key])
			return key;
		else
			return -2;
	} else
		return -1;
}

int Power::use_passive_power(int key) {
	if (0 <= key && key < 5)
		if (is_unlock[key])
			return key;
		else
			return -2;
	else
		return -1;
}

/**
	\param key the power to unlock.

	key goes from 0 to 4. If key is different then an error code will be returned (-1).

	\return \li \b key if the power has been unlock.
			\li \b -1 if the power doesn't exist.
*/
int Power::unlock_power(int key) {
	if (0 <= key && key < 5) {
		is_unlock[key] = true;
		return key;
	}
	return -1;
}