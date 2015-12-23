/* rbSFML
 * Copyright (c) 2015 Henrik Valter Vogelius Hansson - groogy@groogy.se
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef RBSFML_RBRENDERWINDOW_HPP_
#define RBSFML_RBRENDERWINDOW_HPP_

#include <SFML/Graphics/RenderWindow.hpp>
#include "class.hpp"
#include "rbwindow.hpp"
#include "rbrendertarget.hpp"

class rbRenderWindow;
class rbContextSettings;
class rbEvent;

typedef rb::Class<rbRenderWindow> rbRenderWindowClass;

class rbRenderWindow : public rbWindow, public rbRenderTarget
{
public:
	static void defineClass(const rb::Value& sfml);
	static rbRenderWindowClass& getDefinition();

	rbRenderWindow();
	~rbRenderWindow();

	sf::Vector2u getSize() const;

	rb::Value capture() const;

protected:
    sf::RenderTarget* getRenderTarget();
    const sf::RenderTarget* getRenderTarget() const;

    sf::Window* getWindow();
    const sf::Window* getWindow() const;

    sf::RenderWindow* getRenderWindow();
    const sf::RenderWindow* getRenderWindow() const;

private:
	friend class rb::Value;

	static rbRenderWindowClass ourDefinition;

	sf::RenderWindow myObject;
};

namespace rb
{
	template<>
	rbRenderWindow* Value::to() const;
	template<>
	const rbRenderWindow* Value::to() const;
}

#endif // RBSFML_RBRENDERWINDOW_HPP_