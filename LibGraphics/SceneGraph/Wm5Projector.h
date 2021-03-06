// Geometric Tools, LLC
// Copyright (c) 1998-2012
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.1 (2010/10/01)

#ifndef WM5PROJECTOR_H
#define WM5PROJECTOR_H

#include "Wm5GraphicsLIB.h"
#include "Wm5Camera.h"

namespace Wm5
{

class WM5_GRAPHICS_ITEM Projector : public Camera
{
    WM5_DECLARE_RTTI;
    WM5_DECLARE_NAMES;
    WM5_DECLARE_STREAM(Projector);

public:
    // Construction and destruction.  The only difference between this
    // class and the Camera class is that you may specify the depth type
    // explicitly.  The Camera class is forced to use the default depth
    // type (that is consistent with the currently enabled graphics API).
    Projector (DepthType depthType, bool isPerspective = true);
    virtual ~Projector ();

    // The 0-index matrix maps x' = (1+x)/2 and y' = (1-y)/2.  The
    // 1-index matrix maps x' = (1+x)/2 and y' = (1+y)/2.
    static const HMatrix BiasScaleMatrix[2];
};

WM5_REGISTER_STREAM(Projector);
typedef Pointer0<Projector> ProjectorPtr;

}

#endif
