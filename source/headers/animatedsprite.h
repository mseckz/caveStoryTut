#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <map>
#include <string>

#include "sprite.h"

class Graphics;

/**
 * AnimatedSprite class
 * Holds logic for animating sprites
 */

class AnimatedSprite : public Sprite {
public:
	AnimatedSprite();
	AnimatedSprite(Graphics &graphics, const std::string &filepath, int sourceX, int sourceY, int width, int height,
			float posX, float posY, float timeToUpdate);

	/**
	 * void playAnimation
	 * Plays the animation provided if it's not playing
	 */
	void playAnimation(std::string animation, bool once = false);

	/**
	 * void update
	 * Updates the animated sprite (timer)
	 */
	void update(int elapsedTime);

	/**
	 * void draw
	 * Draws the sprite to the screen
	 */
	void draw(Graphics &graphics, int x, int y);

	/**
	 * void setupAnimations
	 * A required function that sets up all animations for a sprite
	 */
	virtual void setupAnimations();

private:
};

#endif
