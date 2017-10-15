#pragma once

#include <string>
#include <stdio.h>

using namespace std;

typedef enum State {
	start,
	identidier,
	newline,
	inthemidleline,
	endofline,
	str,
	intnum,
	realnum,
	startnum,
	midlenum,
	endnum,
	isdot,
	isexp,
	operators,
	intheword,
	endword,
};
