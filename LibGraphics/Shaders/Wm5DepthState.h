// Geometric Tools, LLC
// Copyright (c) 1998-2012
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.1 (2010/10/01)

#ifndef WM5DEPTHSTATE_H
#define WM5DEPTHSTATE_H

#include "Wm5GraphicsLIB.h"
#include "Wm5Object.h"

namespace Wm5
{

class WM5_GRAPHICS_ITEM DepthState : public Object
{
    WM5_DECLARE_RTTI;
    WM5_DECLARE_NAMES;
    WM5_DECLARE_STREAM(DepthState);

public:
    // Construction and destruction.
    DepthState ();
    virtual ~DepthState ();

    enum WM5_GRAPHICS_ITEM CompareMode
    {
        CM_NEVER,
        CM_LESS,
        CM_EQUAL,
        CM_LEQUAL,
        CM_GREATER,
        CM_NOTEQUAL,
        CM_GEQUAL,
        CM_ALWAYS,
        CM_QUANTITY
    };

    bool Enabled;         // default: true
    bool Writable;        // default: true
    CompareMode Compare;  // default: CM_LEQUAL
};

WM5_REGISTER_STREAM(DepthState);
typedef Pointer0<DepthState> DepthStatePtr;

}

#endif
