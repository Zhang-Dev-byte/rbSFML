/* rbSFML - Copyright (c) 2010 Henrik Valter Vogelius Hansson - groogy@groogy.se
 * This software is provided 'as-is', without any express or
 * implied warranty. In no event will the authors be held
 * liable for any damages arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute
 * it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented;
 *    you must not claim that you wrote the original software.
 *    If you use this software in a product, an acknowledgment
 *    in the product documentation would be appreciated but
 *    is not required.
 *
 * 2. Altered source versions must be plainly marked as such,
 *    and must not be misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any
 *    source distribution.
 */
 
#ifndef SFML_RUBYEXT_INPUT_STREAM_HEADER_
#define SFML_RUBYEXT_INPUT_STREAM_HEADER_

#include "ruby.h"
#include <SFML/System/InputStream.hpp>

// Wrapper around a ruby IO object.
class rbInputStream : public sf::InputStream
{
	VALUE myIO;
public:
	rbInputStream( VALUE aIO );
	sf::Int64 Read( char *aDataBuffer, sf::Int64 aSize );
	sf::Int64 Seek( sf::Int64 aPosition );
	sf::Int64 Tell();
	sf::Int64 GetSize();
};

#endif // SFML_RUBYEXT_INPUT_STREAM_HEADER_