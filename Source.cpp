#include <iostream>
#include <string>
#include <Windows.h>

#include "Shortest_Path_2.h"

using namespace std;

int main() {

	//playfield scope
	int x = 20;
	int y = 40;

	Shortest_Path_2 path(x, y);	

	cout << "A point bellow" << endl;
	cout << "x: "; 
	cin >> x; 
	cout << "y: "; 
	cin >> y;
	path.set_A(x, y);
	cout << endl;

	cout << "B point bellow" << endl;
	cout << "x: "; 
	cin >> x; 
	cout << "y: "; 
	cin >> y;
	path.set_B(x, y);


	do
	{
		system("cls");
		cout << path.run();
		Sleep(150);
	} while (path.temp_one() != path.real_one());

	return 0;
}