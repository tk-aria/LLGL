/*
 * GLVertexArrayObject.h
 * 
 * This file is part of the "LLGL" project (Copyright (c) 2015 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef __LLGL_GL_VERTEX_ARRAY_OBJECT_H__
#define __LLGL_GL_VERTEX_ARRAY_OBJECT_H__


#include <LLGL/VertexFormat.h>
#include "../OpenGL.h"


namespace LLGL
{


class GLVertexArrayObject
{

    public:

        GLVertexArrayObject();
        ~GLVertexArrayObject();

        void BuildVertexAttribute(const VertexFormat& vertexFormat, unsigned int index);

        //! Returns the ID of the hardware vertex-array-object (VAO)
        inline GLuint GetID() const
        {
            return id_;
        }

    private:

        GLuint id_ = 0; //!< Vertex array object ID.

};


} // /namespace LLGL


#endif



// ================================================================================
