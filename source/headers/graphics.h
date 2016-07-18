#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <map>
#include <string>

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	Graphics();
	~Graphics();

	/**
	 * Loads an image into the _spriteSheets map if it doesn't already exists
	 * as a result, each image will only ever be loaded once
	 * Returns the image from the map regardless of wether or not it was just loaded
	 */
	SDL_Surface* loadImage(const std::string &filepath);

	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);
private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif
