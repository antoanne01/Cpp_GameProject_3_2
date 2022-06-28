#include "Shortest_Path_2.h"
#include <sstream>


void Shortest_Path_2::Shortest_P_barrier()
{
	if ((temp.first == 6) && (temp.second == 1 || temp.second <= 14))
	{
		(temp.second)++;
	}
	else if (temp.first > real.second.first)
	{
		(temp.first)--;
	}
	else if (temp.first < real.second.first)
	{
		(temp.first)++;
	}
	else
	{
		if (temp.second > real.second.second)
		{
			(temp.second)--;
		}
		else if (temp.second < real.second.second)
		{
			(temp.second)++;
		}
	}
}

Shortest_Path_2::Shortest_Path_2(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Shortest_Path_2::set_A(int x, int y)
{
	real.first.first = x;
	real.first.second = y;
}

void Shortest_Path_2::set_B(int x, int y)
{
	real.second.first = x;
	real.second.second = y;
	temp = real.first;
}

string Shortest_Path_2::run()
{
	Shortest_P_barrier();
	stringstream ss;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			if (i == temp.first && j == temp.second)
			{
				ss << "x";
			}
			else if (i == real.first.first && j == real.first.second)
			{
				ss << "A";
			}
			else if (i == real.second.first && j == real.second.second)
			{
				ss << "B";
			}
			else if ((i == 7) && (j == 1 || j <= 14))
			{
				ss << "?";
			}
			else
			{
				ss << "-";
			}
		}
		ss << endl;
	}
	return ss.str();
}

pair<int, int> Shortest_Path_2::temp_one()
{
	return temp;
}

pair<int, int> Shortest_Path_2::real_one()
{
	return real.second;
}