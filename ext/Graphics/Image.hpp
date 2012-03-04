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

#ifndef GRAPHICS_IMAGE_HPP
#define GRAPHICS_IMAGE_HPP

#include <ruby.h>
#include <rbSFML.hpp>

#include <SFML/Graphics/Image.hpp>

namespace rbImage
{
#if defined( GRAPHICS_IMAGE_CPP )
    VALUE Class;
#else
    extern VALUE Class;
#endif

#if defined( RBSFML_GRAPHICS )
    void Init( VALUE SFML );
#endif

#if defined( GRAPHICS_IMAGE_CPP )
    // Image#initialize
	// Image#initialize(filename)
	// Image#initialize(width, height, color = SFML::Color::Black)
	// Image#initialize(width, height, pixels)
    static VALUE Initialize( int argc, VALUE* args, VALUE aSelf );

    // Image#initialize_copy(image)
    static VALUE InitializeCopy( VALUE aSelf, VALUE anImage );
	
	// Image#create(width, height, color = SFML::Color::Black)
	// Image#create(width, height, pixels)
	static VALUE Create( int argc, VALUE* args, VALUE aSelf );
	
	// Image#load_from_file(filename)
	static VALUE LoadFromFile( VALUE aSelf, VALUE aFilename );
	
	// Image#load_from_memory(data)
	static VALUE LoadFromMemory( VALUE aSelf, VALUE someData );
	
	// Image#load_from_stream(stream)
	static VALUE LoadFromStream( VALUE aSelf, VALUE aStream );
	
	// Image#save_to_file(filename)
	static VALUE SaveToFile( VALUE aSelf, VALUE aFilename );
	
	// Image#width
	static VALUE GetWidth( VALUE aSelf );
	
	// Image#height
	static VALUE GetHeight( VALUE aSelf );
	
	// Image#create_mask_from_color(color, alpha=0)
	static VALUE CreateMaskFromColor( int argc, VALUE* args, VALUE aSelf );
	
	// Image#copy(image, dest_x, dest_y, source_rect = nil, apply_alpha = false)
	static VALUE Copy( int argc, VALUE* args, VALUE aSelf );
	
	// Image#set_pixel(x, y, color)
	static VALUE SetPixel( VALUE aSelf, VALUE anX, VALUE anY, VALUE aColor );
	
	// Image#get_pixel(x, y)
	static VALUE GetPixel( VALUE aSelf, VALUE anX, VALUE anY );
	
	// Image#pixels()
	static VALUE GetPixelsPtr( VALUE aSelf );
	
	// Image#flip_horizontally
	static VALUE FlipHorizontally( VALUE aSelf );
	
	// Image#flip_vertically
	static VALUE FlipVertically( VALUE aSelf );
	
    // Image#marshal_dump
    static VALUE MarshalDump( VALUE aSelf );

    // Image#==(other)
    static VALUE Equal( VALUE aSelf, VALUE anOther );

    // Image#inspect
    // Image#to_s
    static VALUE Inspect( VALUE aSelf );

    // Image#memory_usage
    static VALUE GetMemoryUsage( VALUE aSelf );
#endif
}

#endif // GRAPHICS_IMAGE_HPP
