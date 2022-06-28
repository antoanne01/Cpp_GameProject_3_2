#pragma once
#include <string>

using namespace std;

class Shortest_Path_2
{
private:
	int x = 0;
	int y = 0;
	pair<pair<int, int>, pair<int, int>> real;
	pair<int, int> temp;

public:
	Shortest_Path_2(int x, int y);
	void Shortest_P_barrier();
	void set_A(int x, int y);
	void set_B(int x, int y);
	string run();
	pair<int, int> temp_one();
	pair<int, int> real_one();

};