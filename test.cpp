#include "chara.hpp"
#include "power.hpp"
using namespace std;

int main() {

	Character* wb = new Weatherboy();
	Character* tb = new Timeboy();
	cout << wb;
	cout << tb;
	cout << wb->use_power(true, 1) << endl;
	delete wb;
	delete tb;
	return 0;
}