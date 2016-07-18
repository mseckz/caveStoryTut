
#include "input.h"

/**
 * Input class
 * Keeps track of keyboard state
 */

/**
 * This function gets called at the beginning of each new frame
 * to reset the keys that are no longer relevant
 */
void Input::beginNewFrame() {
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();
}

/**
 * This gets called when a key has been pressed
 */
void Input::keyDownEvent(const SDL_Event& event) {
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;
}

/**
 * This gets called when a key is released
 */
void Input::keyUpEvent(const SDL_Event& event){
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

/**
 * check if key is pressed during the current frame
 */
bool Input::wasKeyPressed(SDL_Scancode key) {
	return this->_pressedKeys[key];
}

/**
 * check if key is released during the current frame
 */
bool Input::wasKeyReleased(SDL_Scancode key) {
	return this->_releasedKeys[key];
}

/**
 * check if key is currently held during the current frame
 */
bool Input::isKeyHeld(SDL_Scancode key) {
	return this->_heldKeys[key];
}
