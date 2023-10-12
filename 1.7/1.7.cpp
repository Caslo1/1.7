#include <iostream>

using namespace std;

int main()
{
	unsigned int Color{ 0x04F1A2u };

	unsigned short Red = (Color >> 16) & 0xFF ;
	unsigned short Green = (Color >> 8) & 0xFF;
	unsigned short Blue = (Color) & 0xFF;

	cout << "Red " << Red << endl;
	cout << "Green " << Green << endl;
	cout << "Blue " << Blue << endl;

	cout << "Red " << hex << Red << endl;
	cout << "Green " << hex << Green << endl;
	cout << "Blue " << hex << Blue << endl;

	return 0;
}