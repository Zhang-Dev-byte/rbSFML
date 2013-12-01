/* rbSFML
 * Copyright (c) 2012 Henrik Valter Vogelius Hansson - groogy@groogy.se
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

#ifndef EXTRA_VERTEX_LAYOUT_HPP
#define EXTRA_VERTEX_LAYOUT_HPP

#include <ruby.h>

#include "../rbSFML.hpp"

namespace rbVertexLayout
{
#if defined( EXTRA_VERTEX_LAYOUT_CPP )
    VALUE Class;
#else
    extern VALUE Class;
#endif

#if defined( RBSFML_EXTRA )
    void Init( VALUE SFML );
#endif

#if defined( EXTRA_VERTEX_LAYOUT_CPP )
    // VertexLayout#initialize
    static VALUE Initialize( VALUE aSelf );
	
	// VertexLayout#<<
	static VALUE Append( VALUE aSelf, VALUE anAttribute );
#endif

}

#endif // EXTRA_VERTEX_LAYOUT_HPP
