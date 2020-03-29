/*
	* Include: Useful Macros (u-macros.inc)
	* Author: Alex
	* Date: 30th March
	* Copyright (C) 2020
*/

#include <a_samp>

// IsPlayerConnected = CONNECTED playerid || !IsPlayerConnected = CONNECTED !playerid
#define CONNECTED%0\10; if (IsPlayerConnected(%0))

// randomEx(2, 6);
#define randomEx(%0,%1) random((%1 - %0 + 1)) + %0

// error This is error message || error "This is error message" || error "Error %s", error
#define error%0\10;%9 printf("Error: %s", (#%0));

// debug This is debug message || debug "This is debug message" || debug "Debug %s", debug
#define debug%0\10;%9 printf("Debug: %s", (#%0));

// CreateLabel("text", 0xFFFFFFAA, 0.0, 0.0, 0.0, <30.0>, <30.0>); // with streamer
// CreateLabel("text", 0xFFFFFFAA, 0.0, 0.0, 0.0, <30.0>); // without streamer
#if defined _streamer_included
	#define CreateLabel(%0,%1,%2,%3,%4,<%5>,<%6>) \
		CreateDynamic3DTextLabel(%0, %1, %2, %3, %4, %5, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, -1, -1, -1, %6, -1, 0)
#else
	#define CreateLabel(%0,%1,%2,%3,%4,<%5>) \
		Create3DTextLabel(%0, %1, %2, %3, %4, %5, 0, 0)
#endif

#if !defined _inc_y_iterate
	// PlayerLoop::<i> { ... }
	#define PlayerLoop::<%0> for(new %0 = 0; %0 < MAX_PLAYERS; ++%0)
#endif

// Loop::i<20> { print("This message will be displayed 20 times."); }
#define Loop::%0<%1> for(new %0 = 0; %0 < %1; ++%0)

// function::%0<%1> { ... }
#define function::%0<%1> \
	forward %0(%1); public %0(%1)
