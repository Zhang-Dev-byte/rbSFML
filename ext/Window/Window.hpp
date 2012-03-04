/* rbSFML
 * Copyright (c) 2010 Henrik Valter Vogelius Hansson - groogy@groogy.se
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

#ifndef WINDOW_WINDOW_HPP
#define WINDOW_WINDOW_HPP

#include <ruby.h>
#include <rbSFML.hpp>
#include <System/SFML.hpp>
#include <System/Vector2.hpp>
#include <Window/ContextSettings.hpp>
#include <Window/Event.hpp>
#include <Window/VideoMode.hpp>

#include <SFML/Window/Window.hpp>

namespace rbWindow
{
#if defined( WINDOW_WINDOW_CPP )
    VALUE Class;
#else
    extern VALUE Class;
#endif
    
#if defined( RBSFML_WINDOW )
    void Init( VALUE SFML );
#endif
    
#if defined( WINDOW_WINDOW_CPP )
    // Window#initialize(...)
    static VALUE Initialize( int argc, VALUE args[], VALUE aSelf );
    
    // Window#marshal_dump
    static VALUE MarshalDump( VALUE aSelf );
    
    // Window#create(...)
    // Window#Create(...)
    static VALUE Create( int argc, VALUE args[], VALUE aSelf );
    
    // Window#close
    // Window#Close
    static VALUE Close( VALUE aSelf );
    
    // Window#opened?
    // Window#IsOpened
    // Window#open?
    static VALUE IsOpen( VALUE aSelf );
    
    // Window#width
    // Window#GetWidth
    static VALUE GetWidth( VALUE aSelf );
    
    // Window#height
    // Window#GetHeight
    static VALUE GetHeight( VALUE aSelf );
    
    // Window#settings
    // Window#GetSettings
    static VALUE GetSettings( VALUE aSelf );
    
    // Window#poll_event
    // Window#PollEvent
    // Window#poll_event(event)
    // Window#PollEvent(event)
    static VALUE PollEvent( int argc, VALUE argv[], VALUE aSelf );
    
    // Window#wait_event
    // Window#WaitEvent
    // Window#wait_event(event)
    // Window#WaitEvent(event)
    static VALUE WaitEvent( int argc, VALUE argv[], VALUE aSelf );
    
    // Window#each_event
    static VALUE EachEvent( VALUE aSelf );
    
    // Window#vertical_sync=(enabled)
    // Window#EnableVerticalSync(enabled)
    // Window#vertical_sync(enabled)
    static VALUE EnableVerticalSync( VALUE aSelf, VALUE anEnabled );
    
    // Window#mouse_cursor=(show)
    // Window#ShowMouseCursor(show)
    // Window#mouse_cursor(show)
    static VALUE ShowMouseCursor( VALUE aSelf, VALUE aShow );
    
    // Window#position(x, y)
    // Window#Position(x, y)
    static VALUE SetPosition( VALUE aSelf, VALUE anX, VALUE anY );
    
    // Window#position=(vector2)
    static VALUE SetPosition2( VALUE aSelf, VALUE aVector2 );
    
    // Window#size(width, height)
    // Window#Size(width, height)
    static VALUE SetSize( VALUE aSelf, VALUE aWidth, VALUE aHeight );
    
    // Window#size=(vector2)
    static VALUE SetSize2( VALUE aSelf, VALUE aVector2 );
    
    // Window#title=(title)
    // Window#SetTitle(title)
    // Window#title(title)
    static VALUE SetTitle( VALUE aSelf, VALUE aTitle );
    
    // Window#show=(show)
    // Window#Show(show)
    // Window#show(show)
    static VALUE Show( VALUE aSelf, VALUE aShow );
    
    // Window#key_repeat=(enabled)
    // Window#EnableKeyRepeat(enabled)
    // Window#key_repeat(enabled)
    static VALUE EnableKeyRepeat( VALUE aSelf, VALUE anEnabled );
    
    // Window#icon(width, height, pixels)
    // Window#SetIcon(width, height, pixels)
    static VALUE SetIcon( VALUE aSelf, VALUE aWidth, VALUE aHeight, VALUE aPixels );
    
    // Window#active(active=true)
    // Window#SetActive(active=true)
    // Window#active=(active=true)
    static VALUE SetActive( int argc, VALUE argv[], VALUE aSelf );
    
    // Window#display(active)
    // Window#Display(active)
    static VALUE Display( VALUE aSelf );
    
    // Window#framerate=(limit)
    // Window#SetFramerateLimit(limit)
    // Window#framerate(limit)
    // Window#framerate_limit=(limit)
    // Window#framerate_limit(limit)
    // Window#fps=(limit)
    static VALUE SetFramerateLimit( VALUE aSelf, VALUE aLimit );
    
    // Window#frame_time
    // Window#GetFrameTime
    // Window#time
    static VALUE GetFrameTime( VALUE aSelf );
    
    // Window#joystick_threshold=(threshold)
    // Window#SetJoystickThreshold(threshold)
    // Window#joystick_threshold(threshold)
    static VALUE SetJoystickThreshold( VALUE aSelf, VALUE aThreshold );
    
    // Window#system_handle
    // Window#GetSystemHandle
    // Window#handle
    static VALUE GetSystemHandle( VALUE aSelf );
    
    // Window#inspect
    // Window#to_s
    static VALUE Inspect( VALUE aSelf );

    // Window#memory_usage
    static VALUE GetMemoryUsage( VALUE aSelf );
#endif
}

#endif // WINDOW_WINDOW_HPP