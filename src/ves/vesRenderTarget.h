/*========================================================================
  VES --- VTK OpenGL ES Rendering Toolkit

      http://www.kitware.com/ves

  Copyright 2011 Kitware, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ========================================================================*/

#ifndef VESRENDERTARGET_H
#define VESRENDERTARGET_H

#include "vesObject.h"

// VES includes
#include "vesGL.h"

// Forward declarations
class vesRenderState;

class vesRenderTarget : public vesObject
{
public:
  vesRenderTarget() :
    m_implementation(FrameBuffer)
  {
  }


  enum ImplementationType
  {
      // Default
      FrameBuffer = 0,
      FrameBufferObject,
      PixelBuffer
  };


  enum AttachmentType
  {
    ColorAttachment0 = GL_COLOR_ATTACHMENT0,
    DepthAttachment  = GL_DEPTH_ATTACHMENT
  };

  virtual ~vesRenderTarget(){}

  virtual void setup (vesRenderState &renderState){}
  virtual void render(vesRenderState &renderState){}


 protected:

   ImplementationType m_implementation;
};


#endif // VESRENDERTARGET_H
