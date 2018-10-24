#ifndef ENTITY_H
#define ENTITY_H

#include <array>
#include <memory>
#include "point.hpp"

using namespace std;

class Dungeon;
class Entity {
public:
	enum Type {
		MOB,
		STAIRS_UP,
		STAIRS_DOWN
	};

	virtual const wstring getSymbol();

protected:
	Dungeon* dungeon;
	Type type;

public:
	Entity(Dungeon* dungeon, Type type);
	Point pos;
};

#endif
