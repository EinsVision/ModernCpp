#pragma once
#include <string>
#include "m10_2_position2D.h"

class Monster
{
private:
	std::string m_name;
	Position2D location;
	/*int m_x;
	int m_y;*/ // sub-class는 빠르게 만들수록 좋다.

public:
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), location(pos_in)
	{}
	void moveTo(const Position2D& pos_target)
	{
		location.set(pos_target);
		
	}
	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.location;
		return out;
	}

}; 