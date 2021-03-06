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

#ifndef RBSFML_RBMOUSE_HPP
#define RBSFML_RBMOUSE_HPP

#include <SFML/Window/Mouse.hpp>
#include "class.hpp"
#include "object.hpp"

class rbMouse;

typedef rb::Module<sf::Mouse> rbMouseModule;

class rbMouse
{
public:
	static void defineModule(const rb::Value& sfml);

	static rb::Value getPosition(const std::vector<rb::Value>& arguments);
	static rb::Value setPosition(const std::vector<rb::Value>& arguments);

private:
	static rbMouseModule ourDefinition;
};

namespace rb
{
	template<>
	sf::Mouse::Button Value::to() const;
	template<>
	sf::Mouse::Wheel Value::to() const;

	template<>
	Value Value::create( sf::Mouse::Button value );
	template<>
	Value Value::create( sf::Mouse::Wheel value );
}

#endif // RBSFML_RBMOUSE_HPP