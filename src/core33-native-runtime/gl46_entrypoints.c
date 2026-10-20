/* Generated from Khronos gl.xml and Mesa's static GLAPI symbol table. */
#define GL_GLEXT_PROTOTYPES 1
#include <GL/glcorearb.h>

extern void APIENTRY _dispatch_stub_BindTextureUnit(GLuint unit, GLuint texture);
void APIENTRY glBindTextureUnit(GLuint unit, GLuint texture)
{
   _dispatch_stub_BindTextureUnit(unit, texture);
}

extern void APIENTRY _dispatch_stub_BlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
void APIENTRY glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
   _dispatch_stub_BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

extern GLenum APIENTRY _dispatch_stub_CheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);
GLenum APIENTRY glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
   return _dispatch_stub_CheckNamedFramebufferStatus(framebuffer, target);
}

extern void APIENTRY _dispatch_stub_ClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
void APIENTRY glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data)
{
   _dispatch_stub_ClearNamedBufferData(buffer, internalformat, format, type, data);
}

extern void APIENTRY _dispatch_stub_ClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
void APIENTRY glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data)
{
   _dispatch_stub_ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

extern void APIENTRY _dispatch_stub_ClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
void APIENTRY glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
   _dispatch_stub_ClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil);
}

extern void APIENTRY _dispatch_stub_ClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
void APIENTRY glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value)
{
   _dispatch_stub_ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

extern void APIENTRY _dispatch_stub_ClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
void APIENTRY glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value)
{
   _dispatch_stub_ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

extern void APIENTRY _dispatch_stub_ClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
void APIENTRY glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value)
{
   _dispatch_stub_ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

extern void APIENTRY _dispatch_stub_ClipControl(GLenum origin, GLenum depth);
void APIENTRY glClipControl(GLenum origin, GLenum depth)
{
   _dispatch_stub_ClipControl(origin, depth);
}

extern void APIENTRY _dispatch_stub_CompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
void APIENTRY glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data)
{
   _dispatch_stub_CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

extern void APIENTRY _dispatch_stub_CompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
void APIENTRY glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data)
{
   _dispatch_stub_CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

extern void APIENTRY _dispatch_stub_CompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
void APIENTRY glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data)
{
   _dispatch_stub_CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

extern void APIENTRY _dispatch_stub_CopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
void APIENTRY glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
   _dispatch_stub_CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

extern void APIENTRY _dispatch_stub_CopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void APIENTRY glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
   _dispatch_stub_CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

extern void APIENTRY _dispatch_stub_CopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void APIENTRY glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   _dispatch_stub_CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

extern void APIENTRY _dispatch_stub_CopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void APIENTRY glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
   _dispatch_stub_CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

extern void APIENTRY _dispatch_stub_CreateBuffers(GLsizei n, GLuint *buffers);
void APIENTRY glCreateBuffers(GLsizei n, GLuint *buffers)
{
   _dispatch_stub_CreateBuffers(n, buffers);
}

extern void APIENTRY _dispatch_stub_CreateFramebuffers(GLsizei n, GLuint *framebuffers);
void APIENTRY glCreateFramebuffers(GLsizei n, GLuint *framebuffers)
{
   _dispatch_stub_CreateFramebuffers(n, framebuffers);
}

extern void APIENTRY _dispatch_stub_CreateProgramPipelines(GLsizei n, GLuint *pipelines);
void APIENTRY glCreateProgramPipelines(GLsizei n, GLuint *pipelines)
{
   _dispatch_stub_CreateProgramPipelines(n, pipelines);
}

extern void APIENTRY _dispatch_stub_CreateQueries(GLenum target, GLsizei n, GLuint *ids);
void APIENTRY glCreateQueries(GLenum target, GLsizei n, GLuint *ids)
{
   _dispatch_stub_CreateQueries(target, n, ids);
}

extern void APIENTRY _dispatch_stub_CreateRenderbuffers(GLsizei n, GLuint *renderbuffers);
void APIENTRY glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers)
{
   _dispatch_stub_CreateRenderbuffers(n, renderbuffers);
}

extern void APIENTRY _dispatch_stub_CreateSamplers(GLsizei n, GLuint *samplers);
void APIENTRY glCreateSamplers(GLsizei n, GLuint *samplers)
{
   _dispatch_stub_CreateSamplers(n, samplers);
}

extern void APIENTRY _dispatch_stub_CreateTextures(GLenum target, GLsizei n, GLuint *textures);
void APIENTRY glCreateTextures(GLenum target, GLsizei n, GLuint *textures)
{
   _dispatch_stub_CreateTextures(target, n, textures);
}

extern void APIENTRY _dispatch_stub_CreateTransformFeedbacks(GLsizei n, GLuint *ids);
void APIENTRY glCreateTransformFeedbacks(GLsizei n, GLuint *ids)
{
   _dispatch_stub_CreateTransformFeedbacks(n, ids);
}

extern void APIENTRY _dispatch_stub_CreateVertexArrays(GLsizei n, GLuint *arrays);
void APIENTRY glCreateVertexArrays(GLsizei n, GLuint *arrays)
{
   _dispatch_stub_CreateVertexArrays(n, arrays);
}

extern void APIENTRY _dispatch_stub_DisableVertexArrayAttrib(GLuint vaobj, GLuint index);
void APIENTRY glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
   _dispatch_stub_DisableVertexArrayAttrib(vaobj, index);
}

extern void APIENTRY _dispatch_stub_EnableVertexArrayAttrib(GLuint vaobj, GLuint index);
void APIENTRY glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
   _dispatch_stub_EnableVertexArrayAttrib(vaobj, index);
}

extern void APIENTRY _dispatch_stub_FlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);
void APIENTRY glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
   _dispatch_stub_FlushMappedNamedBufferRange(buffer, offset, length);
}

extern void APIENTRY _dispatch_stub_GenerateTextureMipmap(GLuint texture);
void APIENTRY glGenerateTextureMipmap(GLuint texture)
{
   _dispatch_stub_GenerateTextureMipmap(texture);
}

extern void APIENTRY _dispatch_stub_GetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
void APIENTRY glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name)
{
   _dispatch_stub_GetActiveSubroutineName(program, shadertype, index, bufSize, length, name);
}

extern void APIENTRY _dispatch_stub_GetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
void APIENTRY glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name)
{
   _dispatch_stub_GetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name);
}

extern void APIENTRY _dispatch_stub_GetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
void APIENTRY glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values)
{
   _dispatch_stub_GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

extern void APIENTRY _dispatch_stub_GetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
void APIENTRY glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetCompressedTextureImage(texture, level, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
void APIENTRY glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
void APIENTRY glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params)
{
   _dispatch_stub_GetInternalformati64v(target, internalformat, pname, count, params);
}

extern void APIENTRY _dispatch_stub_GetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
void APIENTRY glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params)
{
   _dispatch_stub_GetInternalformativ(target, internalformat, pname, count, params);
}

extern void APIENTRY _dispatch_stub_GetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params);
void APIENTRY glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params)
{
   _dispatch_stub_GetNamedBufferParameteri64v(buffer, pname, params);
}

extern void APIENTRY _dispatch_stub_GetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params);
void APIENTRY glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params)
{
   _dispatch_stub_GetNamedBufferParameteriv(buffer, pname, params);
}

extern void APIENTRY _dispatch_stub_GetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params);
void APIENTRY glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params)
{
   _dispatch_stub_GetNamedBufferPointerv(buffer, pname, params);
}

extern void APIENTRY _dispatch_stub_GetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
void APIENTRY glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data)
{
   _dispatch_stub_GetNamedBufferSubData(buffer, offset, size, data);
}

extern void APIENTRY _dispatch_stub_GetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
void APIENTRY glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params)
{
   _dispatch_stub_GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

extern void APIENTRY _dispatch_stub_GetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param);
void APIENTRY glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param)
{
   _dispatch_stub_GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

extern void APIENTRY _dispatch_stub_GetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params);
void APIENTRY glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params)
{
   _dispatch_stub_GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

extern GLint APIENTRY _dispatch_stub_GetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name);
GLint APIENTRY glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name)
{
   return _dispatch_stub_GetProgramResourceLocationIndex(program, programInterface, name);
}

extern void APIENTRY _dispatch_stub_GetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
void APIENTRY glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values)
{
   _dispatch_stub_GetProgramStageiv(program, shadertype, pname, values);
}

extern void APIENTRY _dispatch_stub_GetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void APIENTRY glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
   _dispatch_stub_GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

extern void APIENTRY _dispatch_stub_GetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void APIENTRY glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
   _dispatch_stub_GetQueryBufferObjectiv(id, buffer, pname, offset);
}

extern void APIENTRY _dispatch_stub_GetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void APIENTRY glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
   _dispatch_stub_GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

extern void APIENTRY _dispatch_stub_GetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void APIENTRY glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
   _dispatch_stub_GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

extern GLuint APIENTRY _dispatch_stub_GetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name);
GLuint APIENTRY glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name)
{
   return _dispatch_stub_GetSubroutineIndex(program, shadertype, name);
}

extern GLint APIENTRY _dispatch_stub_GetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name);
GLint APIENTRY glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name)
{
   return _dispatch_stub_GetSubroutineUniformLocation(program, shadertype, name);
}

extern void APIENTRY _dispatch_stub_GetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
void APIENTRY glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetTextureImage(texture, level, format, type, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params);
void APIENTRY glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params)
{
   _dispatch_stub_GetTextureLevelParameterfv(texture, level, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params);
void APIENTRY glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params)
{
   _dispatch_stub_GetTextureLevelParameteriv(texture, level, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params);
void APIENTRY glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params)
{
   _dispatch_stub_GetTextureParameterIiv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params);
void APIENTRY glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params)
{
   _dispatch_stub_GetTextureParameterIuiv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params);
void APIENTRY glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params)
{
   _dispatch_stub_GetTextureParameterfv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureParameteriv(GLuint texture, GLenum pname, GLint *params);
void APIENTRY glGetTextureParameteriv(GLuint texture, GLenum pname, GLint *params)
{
   _dispatch_stub_GetTextureParameteriv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_GetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
void APIENTRY glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
void APIENTRY glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param)
{
   _dispatch_stub_GetTransformFeedbacki64_v(xfb, pname, index, param);
}

extern void APIENTRY _dispatch_stub_GetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param);
void APIENTRY glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param)
{
   _dispatch_stub_GetTransformFeedbacki_v(xfb, pname, index, param);
}

extern void APIENTRY _dispatch_stub_GetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param);
void APIENTRY glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param)
{
   _dispatch_stub_GetTransformFeedbackiv(xfb, pname, param);
}

extern void APIENTRY _dispatch_stub_GetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params);
void APIENTRY glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params)
{
   _dispatch_stub_GetUniformSubroutineuiv(shadertype, location, params);
}

extern void APIENTRY _dispatch_stub_GetUniformdv(GLuint program, GLint location, GLdouble *params);
void APIENTRY glGetUniformdv(GLuint program, GLint location, GLdouble *params)
{
   _dispatch_stub_GetUniformdv(program, location, params);
}

extern void APIENTRY _dispatch_stub_GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
void APIENTRY glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param)
{
   _dispatch_stub_GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

extern void APIENTRY _dispatch_stub_GetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
void APIENTRY glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param)
{
   _dispatch_stub_GetVertexArrayIndexediv(vaobj, index, pname, param);
}

extern void APIENTRY _dispatch_stub_GetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param);
void APIENTRY glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param)
{
   _dispatch_stub_GetVertexArrayiv(vaobj, pname, param);
}

extern void APIENTRY _dispatch_stub_GetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void *pixels);
void APIENTRY glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetnCompressedTexImageARB(target, lod, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
void APIENTRY glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels)
{
   _dispatch_stub_GetnTexImageARB(target, level, format, type, bufSize, pixels);
}

extern void APIENTRY _dispatch_stub_GetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
void APIENTRY glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble *params)
{
   _dispatch_stub_GetnUniformdvARB(program, location, bufSize, params);
}

extern void APIENTRY _dispatch_stub_InvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
void APIENTRY glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments)
{
   _dispatch_stub_InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

extern void APIENTRY _dispatch_stub_InvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
void APIENTRY glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
   _dispatch_stub_InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

extern void * APIENTRY _dispatch_stub_MapNamedBuffer(GLuint buffer, GLenum access);
void * APIENTRY glMapNamedBuffer(GLuint buffer, GLenum access)
{
   return _dispatch_stub_MapNamedBuffer(buffer, access);
}

extern void * APIENTRY _dispatch_stub_MapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
void * APIENTRY glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
   return _dispatch_stub_MapNamedBufferRange(buffer, offset, length, access);
}

extern void APIENTRY _dispatch_stub_MultiDrawArraysIndirectCountARB(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
void APIENTRY glMultiDrawArraysIndirectCount(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
   _dispatch_stub_MultiDrawArraysIndirectCountARB(mode, indirect, drawcount, maxdrawcount, stride);
}

extern void APIENTRY _dispatch_stub_MultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
void APIENTRY glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
   _dispatch_stub_MultiDrawElementsIndirectCountARB(mode, type, indirect, drawcount, maxdrawcount, stride);
}

extern void APIENTRY _dispatch_stub_NamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
void APIENTRY glNamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage)
{
   _dispatch_stub_NamedBufferData(buffer, size, data, usage);
}

extern void APIENTRY _dispatch_stub_NamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
void APIENTRY glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags)
{
   _dispatch_stub_NamedBufferStorage(buffer, size, data, flags);
}

extern void APIENTRY _dispatch_stub_NamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
void APIENTRY glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data)
{
   _dispatch_stub_NamedBufferSubData(buffer, offset, size, data);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);
void APIENTRY glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf)
{
   _dispatch_stub_NamedFramebufferDrawBuffer(framebuffer, buf);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs);
void APIENTRY glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs)
{
   _dispatch_stub_NamedFramebufferDrawBuffers(framebuffer, n, bufs);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);
void APIENTRY glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param)
{
   _dispatch_stub_NamedFramebufferParameteri(framebuffer, pname, param);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);
void APIENTRY glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src)
{
   _dispatch_stub_NamedFramebufferReadBuffer(framebuffer, src);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void APIENTRY glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
   _dispatch_stub_NamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
void APIENTRY glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
   _dispatch_stub_NamedFramebufferTexture(framebuffer, attachment, texture, level);
}

extern void APIENTRY _dispatch_stub_NamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
void APIENTRY glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
   _dispatch_stub_NamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

extern void APIENTRY _dispatch_stub_NamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
void APIENTRY glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
   _dispatch_stub_NamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

extern void APIENTRY _dispatch_stub_NamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void APIENTRY glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
   _dispatch_stub_NamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

extern void APIENTRY _dispatch_stub_PatchParameterfv(GLenum pname, const GLfloat *values);
void APIENTRY glPatchParameterfv(GLenum pname, const GLfloat *values)
{
   _dispatch_stub_PatchParameterfv(pname, values);
}

extern void APIENTRY _dispatch_stub_PolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp);
void APIENTRY glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp)
{
   _dispatch_stub_PolygonOffsetClampEXT(factor, units, clamp);
}

extern void APIENTRY _dispatch_stub_ProgramUniform1d(GLuint program, GLint location, GLdouble v0);
void APIENTRY glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
   _dispatch_stub_ProgramUniform1d(program, location, v0);
}

extern void APIENTRY _dispatch_stub_ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_ProgramUniform1dv(program, location, count, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);
void APIENTRY glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
   _dispatch_stub_ProgramUniform2d(program, location, v0, v1);
}

extern void APIENTRY _dispatch_stub_ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_ProgramUniform2dv(program, location, count, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
void APIENTRY glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
   _dispatch_stub_ProgramUniform3d(program, location, v0, v1, v2);
}

extern void APIENTRY _dispatch_stub_ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_ProgramUniform3dv(program, location, count, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
void APIENTRY glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
   _dispatch_stub_ProgramUniform4d(program, location, v0, v1, v2, v3);
}

extern void APIENTRY _dispatch_stub_ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_ProgramUniform4dv(program, location, count, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_ShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
void APIENTRY glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
   _dispatch_stub_ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

extern void APIENTRY _dispatch_stub_SpecializeShaderARB(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
void APIENTRY glSpecializeShader(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue)
{
   _dispatch_stub_SpecializeShaderARB(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);
}

extern void APIENTRY _dispatch_stub_TextureBarrierNV(void);
void APIENTRY glTextureBarrier(void)
{
   _dispatch_stub_TextureBarrierNV();
}

extern void APIENTRY _dispatch_stub_TextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);
void APIENTRY glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
   _dispatch_stub_TextureBuffer(texture, internalformat, buffer);
}

extern void APIENTRY _dispatch_stub_TextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
void APIENTRY glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   _dispatch_stub_TextureBufferRange(texture, internalformat, buffer, offset, size);
}

extern void APIENTRY _dispatch_stub_TextureParameterIiv(GLuint texture, GLenum pname, const GLint *params);
void APIENTRY glTextureParameterIiv(GLuint texture, GLenum pname, const GLint *params)
{
   _dispatch_stub_TextureParameterIiv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_TextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params);
void APIENTRY glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params)
{
   _dispatch_stub_TextureParameterIuiv(texture, pname, params);
}

extern void APIENTRY _dispatch_stub_TextureParameterf(GLuint texture, GLenum pname, GLfloat param);
void APIENTRY glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
   _dispatch_stub_TextureParameterf(texture, pname, param);
}

extern void APIENTRY _dispatch_stub_TextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param);
void APIENTRY glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param)
{
   _dispatch_stub_TextureParameterfv(texture, pname, param);
}

extern void APIENTRY _dispatch_stub_TextureParameteri(GLuint texture, GLenum pname, GLint param);
void APIENTRY glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
   _dispatch_stub_TextureParameteri(texture, pname, param);
}

extern void APIENTRY _dispatch_stub_TextureParameteriv(GLuint texture, GLenum pname, const GLint *param);
void APIENTRY glTextureParameteriv(GLuint texture, GLenum pname, const GLint *param)
{
   _dispatch_stub_TextureParameteriv(texture, pname, param);
}

extern void APIENTRY _dispatch_stub_TextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
void APIENTRY glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
   _dispatch_stub_TextureStorage1D(texture, levels, internalformat, width);
}

extern void APIENTRY _dispatch_stub_TextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
void APIENTRY glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
   _dispatch_stub_TextureStorage2D(texture, levels, internalformat, width, height);
}

extern void APIENTRY _dispatch_stub_TextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
void APIENTRY glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
   _dispatch_stub_TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

extern void APIENTRY _dispatch_stub_TextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
void APIENTRY glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
   _dispatch_stub_TextureStorage3D(texture, levels, internalformat, width, height, depth);
}

extern void APIENTRY _dispatch_stub_TextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
void APIENTRY glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
   _dispatch_stub_TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

extern void APIENTRY _dispatch_stub_TextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
void APIENTRY glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels)
{
   _dispatch_stub_TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

extern void APIENTRY _dispatch_stub_TextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
void APIENTRY glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
{
   _dispatch_stub_TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

extern void APIENTRY _dispatch_stub_TextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
void APIENTRY glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels)
{
   _dispatch_stub_TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

extern void APIENTRY _dispatch_stub_TransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);
void APIENTRY glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
   _dispatch_stub_TransformFeedbackBufferBase(xfb, index, buffer);
}

extern void APIENTRY _dispatch_stub_TransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
void APIENTRY glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
   _dispatch_stub_TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

extern void APIENTRY _dispatch_stub_Uniform1d(GLint location, GLdouble x);
void APIENTRY glUniform1d(GLint location, GLdouble x)
{
   _dispatch_stub_Uniform1d(location, x);
}

extern void APIENTRY _dispatch_stub_Uniform1dv(GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glUniform1dv(GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_Uniform1dv(location, count, value);
}

extern void APIENTRY _dispatch_stub_Uniform2d(GLint location, GLdouble x, GLdouble y);
void APIENTRY glUniform2d(GLint location, GLdouble x, GLdouble y)
{
   _dispatch_stub_Uniform2d(location, x, y);
}

extern void APIENTRY _dispatch_stub_Uniform2dv(GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glUniform2dv(GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_Uniform2dv(location, count, value);
}

extern void APIENTRY _dispatch_stub_Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);
void APIENTRY glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
   _dispatch_stub_Uniform3d(location, x, y, z);
}

extern void APIENTRY _dispatch_stub_Uniform3dv(GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glUniform3dv(GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_Uniform3dv(location, count, value);
}

extern void APIENTRY _dispatch_stub_Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void APIENTRY glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
   _dispatch_stub_Uniform4d(location, x, y, z, w);
}

extern void APIENTRY _dispatch_stub_Uniform4dv(GLint location, GLsizei count, const GLdouble *value);
void APIENTRY glUniform4dv(GLint location, GLsizei count, const GLdouble *value)
{
   _dispatch_stub_Uniform4dv(location, count, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix2dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix2x3dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix2x4dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix3dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix3x2dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix3x4dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix4dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix4x2dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
void APIENTRY glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
   _dispatch_stub_UniformMatrix4x3dv(location, count, transpose, value);
}

extern void APIENTRY _dispatch_stub_UniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices);
void APIENTRY glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices)
{
   _dispatch_stub_UniformSubroutinesuiv(shadertype, count, indices);
}

extern GLboolean APIENTRY _dispatch_stub_UnmapNamedBufferEXT(GLuint buffer);
GLboolean APIENTRY glUnmapNamedBuffer(GLuint buffer)
{
   return _dispatch_stub_UnmapNamedBufferEXT(buffer);
}

extern void APIENTRY _dispatch_stub_VertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
void APIENTRY glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
   _dispatch_stub_VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

extern void APIENTRY _dispatch_stub_VertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
void APIENTRY glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
   _dispatch_stub_VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

extern void APIENTRY _dispatch_stub_VertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
void APIENTRY glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
   _dispatch_stub_VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

extern void APIENTRY _dispatch_stub_VertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
void APIENTRY glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
   _dispatch_stub_VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

extern void APIENTRY _dispatch_stub_VertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);
void APIENTRY glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
   _dispatch_stub_VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

extern void APIENTRY _dispatch_stub_VertexArrayElementBuffer(GLuint vaobj, GLuint buffer);
void APIENTRY glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
   _dispatch_stub_VertexArrayElementBuffer(vaobj, buffer);
}

extern void APIENTRY _dispatch_stub_VertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
void APIENTRY glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
   _dispatch_stub_VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

extern void APIENTRY _dispatch_stub_VertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
void APIENTRY glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides)
{
   _dispatch_stub_VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}
