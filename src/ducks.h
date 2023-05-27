#ifndef DUCKS_H
#define DUCKS_H

#include <tice.h>
#include <graphx.h>

/* Enemies information */
struct enemies_t
{
	// position of duck
	int x;
	int y;

	// is bird dead / alive or not active.
	bool active;
	bool shot;
	bool fly_away;

	// Determines the amount of points
	int points;

	// predetermined based on  level
	int speed;

	// used for movement (animations)
	int gotoX;
	int gotoY;

	// custom number
	int cnum;

	// determines sprites angle
	int angle;

	// "mode" of enemies
	int type;

	// animation timer
	int animate;

	gfx_sprite_t *back_buffer;
};
extern struct enemies_t enemies[5];

/**
 * @brief Renders enemies information
 * 
 */
void draw_enemies(void);

/**
 * @brief Updates enemies information
 * 
 */
void update_enemies(void);

/**
 * @brief Initialise enemies
 * 
 * @param amount amount of enemies you want to Initialise
 */
void init_enemies(uint8_t amount);

#endif