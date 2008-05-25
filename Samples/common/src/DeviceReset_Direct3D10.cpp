/***********************************************************************
    filename:   DeviceReset_Direct3D10.cpp
    created:    25/5/2008
    author:     Paul D Turner
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2008 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#ifdef HAVE_CONFIG_H
#   include "config.h"
#endif

#ifdef CEGUI_SAMPLES_USE_DIRECTX_10

#include "CEGUI.h"
#include "RendererModules/directx10GUIRenderer/d3d10renderer.h"

//----------------------------------------------------------------------------//
// The following function is basically a nasty hack; we just needed to do the
// preD3DReset call, the actual device reset, and then the postD3DReset call -
// the issue is that much of the information is not readily available here to us
// so we jump through a couple of hoops to obtain that information (and in the
// case of the D3DPRESENT_PARAMETERS recreate it from scratch).
//
// The reason this is in it's own file is that we need to be able to handle
// multiple different versions of this function for the D3D versions that the
// sample framework supports, though we can only include one main d3d header
// at a time, so these funcs live in their own files.
//----------------------------------------------------------------------------//

//----------------------------------------------------------------------------//
void DeviceReset_Direct3D10(HWND window, CEGUI::Renderer* renderer)
{
    CEGUI::Logger::getSingleton().logEvent(
        "Unimplemented internal helper function 'DeviceReset_Direct3D10' was "
        "called.");
}

//----------------------------------------------------------------------------//

#endif
