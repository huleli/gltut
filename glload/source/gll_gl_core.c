#include <stdlib.h>
#include <string.h>

#include "gll_gl_core.h"
GLeStandardCoreStruct gle_CoreStruct;
#ifdef WIN32
#include<windows.h>
#include <GL/gl.h>
#endif //WIN32

void gleIntCoreInit()
{
	memset(&gle_CoreStruct, 0, sizeof(GLeStandardCoreStruct));
#ifdef WIN32
	gle_CoreStruct.gleVarCullFace = (void*)glCullFace;
	gle_CoreStruct.gleVarFrontFace = (void*)glFrontFace;
	gle_CoreStruct.gleVarHint = (void*)glHint;
	gle_CoreStruct.gleVarLineWidth = (void*)glLineWidth;
	gle_CoreStruct.gleVarPointSize = (void*)glPointSize;
	gle_CoreStruct.gleVarPolygonMode = (void*)glPolygonMode;
	gle_CoreStruct.gleVarScissor = (void*)glScissor;
	gle_CoreStruct.gleVarTexParameterf = (void*)glTexParameterf;
	gle_CoreStruct.gleVarTexParameterfv = (void*)glTexParameterfv;
	gle_CoreStruct.gleVarTexParameteri = (void*)glTexParameteri;
	gle_CoreStruct.gleVarTexParameteriv = (void*)glTexParameteriv;
	gle_CoreStruct.gleVarTexImage1D = (void*)glTexImage1D;
	gle_CoreStruct.gleVarTexImage2D = (void*)glTexImage2D;
	gle_CoreStruct.gleVarDrawBuffer = (void*)glDrawBuffer;
	gle_CoreStruct.gleVarClear = (void*)glClear;
	gle_CoreStruct.gleVarClearColor = (void*)glClearColor;
	gle_CoreStruct.gleVarClearStencil = (void*)glClearStencil;
	gle_CoreStruct.gleVarClearDepth = (void*)glClearDepth;
	gle_CoreStruct.gleVarStencilMask = (void*)glStencilMask;
	gle_CoreStruct.gleVarColorMask = (void*)glColorMask;
	gle_CoreStruct.gleVarDepthMask = (void*)glDepthMask;
	gle_CoreStruct.gleVarDisable = (void*)glDisable;
	gle_CoreStruct.gleVarEnable = (void*)glEnable;
	gle_CoreStruct.gleVarFinish = (void*)glFinish;
	gle_CoreStruct.gleVarFlush = (void*)glFlush;
	gle_CoreStruct.gleVarBlendFunc = (void*)glBlendFunc;
	gle_CoreStruct.gleVarLogicOp = (void*)glLogicOp;
	gle_CoreStruct.gleVarStencilFunc = (void*)glStencilFunc;
	gle_CoreStruct.gleVarStencilOp = (void*)glStencilOp;
	gle_CoreStruct.gleVarDepthFunc = (void*)glDepthFunc;
	gle_CoreStruct.gleVarPixelStoref = (void*)glPixelStoref;
	gle_CoreStruct.gleVarPixelStorei = (void*)glPixelStorei;
	gle_CoreStruct.gleVarReadBuffer = (void*)glReadBuffer;
	gle_CoreStruct.gleVarReadPixels = (void*)glReadPixels;
	gle_CoreStruct.gleVarGetBooleanv = (void*)glGetBooleanv;
	gle_CoreStruct.gleVarGetDoublev = (void*)glGetDoublev;
	gle_CoreStruct.gleVarGetError = (void*)glGetError;
	gle_CoreStruct.gleVarGetFloatv = (void*)glGetFloatv;
	gle_CoreStruct.gleVarGetIntegerv = (void*)glGetIntegerv;
	gle_CoreStruct.gleVarGetString = (void*)glGetString;
	gle_CoreStruct.gleVarGetTexImage = (void*)glGetTexImage;
	gle_CoreStruct.gleVarGetTexParameterfv = (void*)glGetTexParameterfv;
	gle_CoreStruct.gleVarGetTexParameteriv = (void*)glGetTexParameteriv;
	gle_CoreStruct.gleVarGetTexLevelParameterfv = (void*)glGetTexLevelParameterfv;
	gle_CoreStruct.gleVarGetTexLevelParameteriv = (void*)glGetTexLevelParameteriv;
	gle_CoreStruct.gleVarIsEnabled = (void*)glIsEnabled;
	gle_CoreStruct.gleVarDepthRange = (void*)glDepthRange;
	gle_CoreStruct.gleVarViewport = (void*)glViewport;
	gle_CoreStruct.gleVarNewList = (void*)glNewList;
	gle_CoreStruct.gleVarEndList = (void*)glEndList;
	gle_CoreStruct.gleVarCallList = (void*)glCallList;
	gle_CoreStruct.gleVarCallLists = (void*)glCallLists;
	gle_CoreStruct.gleVarDeleteLists = (void*)glDeleteLists;
	gle_CoreStruct.gleVarGenLists = (void*)glGenLists;
	gle_CoreStruct.gleVarListBase = (void*)glListBase;
	gle_CoreStruct.gleVarBegin = (void*)glBegin;
	gle_CoreStruct.gleVarBitmap = (void*)glBitmap;
	gle_CoreStruct.gleVarColor3b = (void*)glColor3b;
	gle_CoreStruct.gleVarColor3bv = (void*)glColor3bv;
	gle_CoreStruct.gleVarColor3d = (void*)glColor3d;
	gle_CoreStruct.gleVarColor3dv = (void*)glColor3dv;
	gle_CoreStruct.gleVarColor3f = (void*)glColor3f;
	gle_CoreStruct.gleVarColor3fv = (void*)glColor3fv;
	gle_CoreStruct.gleVarColor3i = (void*)glColor3i;
	gle_CoreStruct.gleVarColor3iv = (void*)glColor3iv;
	gle_CoreStruct.gleVarColor3s = (void*)glColor3s;
	gle_CoreStruct.gleVarColor3sv = (void*)glColor3sv;
	gle_CoreStruct.gleVarColor3ub = (void*)glColor3ub;
	gle_CoreStruct.gleVarColor3ubv = (void*)glColor3ubv;
	gle_CoreStruct.gleVarColor3ui = (void*)glColor3ui;
	gle_CoreStruct.gleVarColor3uiv = (void*)glColor3uiv;
	gle_CoreStruct.gleVarColor3us = (void*)glColor3us;
	gle_CoreStruct.gleVarColor3usv = (void*)glColor3usv;
	gle_CoreStruct.gleVarColor4b = (void*)glColor4b;
	gle_CoreStruct.gleVarColor4bv = (void*)glColor4bv;
	gle_CoreStruct.gleVarColor4d = (void*)glColor4d;
	gle_CoreStruct.gleVarColor4dv = (void*)glColor4dv;
	gle_CoreStruct.gleVarColor4f = (void*)glColor4f;
	gle_CoreStruct.gleVarColor4fv = (void*)glColor4fv;
	gle_CoreStruct.gleVarColor4i = (void*)glColor4i;
	gle_CoreStruct.gleVarColor4iv = (void*)glColor4iv;
	gle_CoreStruct.gleVarColor4s = (void*)glColor4s;
	gle_CoreStruct.gleVarColor4sv = (void*)glColor4sv;
	gle_CoreStruct.gleVarColor4ub = (void*)glColor4ub;
	gle_CoreStruct.gleVarColor4ubv = (void*)glColor4ubv;
	gle_CoreStruct.gleVarColor4ui = (void*)glColor4ui;
	gle_CoreStruct.gleVarColor4uiv = (void*)glColor4uiv;
	gle_CoreStruct.gleVarColor4us = (void*)glColor4us;
	gle_CoreStruct.gleVarColor4usv = (void*)glColor4usv;
	gle_CoreStruct.gleVarEdgeFlag = (void*)glEdgeFlag;
	gle_CoreStruct.gleVarEdgeFlagv = (void*)glEdgeFlagv;
	gle_CoreStruct.gleVarEnd = (void*)glEnd;
	gle_CoreStruct.gleVarIndexd = (void*)glIndexd;
	gle_CoreStruct.gleVarIndexdv = (void*)glIndexdv;
	gle_CoreStruct.gleVarIndexf = (void*)glIndexf;
	gle_CoreStruct.gleVarIndexfv = (void*)glIndexfv;
	gle_CoreStruct.gleVarIndexi = (void*)glIndexi;
	gle_CoreStruct.gleVarIndexiv = (void*)glIndexiv;
	gle_CoreStruct.gleVarIndexs = (void*)glIndexs;
	gle_CoreStruct.gleVarIndexsv = (void*)glIndexsv;
	gle_CoreStruct.gleVarNormal3b = (void*)glNormal3b;
	gle_CoreStruct.gleVarNormal3bv = (void*)glNormal3bv;
	gle_CoreStruct.gleVarNormal3d = (void*)glNormal3d;
	gle_CoreStruct.gleVarNormal3dv = (void*)glNormal3dv;
	gle_CoreStruct.gleVarNormal3f = (void*)glNormal3f;
	gle_CoreStruct.gleVarNormal3fv = (void*)glNormal3fv;
	gle_CoreStruct.gleVarNormal3i = (void*)glNormal3i;
	gle_CoreStruct.gleVarNormal3iv = (void*)glNormal3iv;
	gle_CoreStruct.gleVarNormal3s = (void*)glNormal3s;
	gle_CoreStruct.gleVarNormal3sv = (void*)glNormal3sv;
	gle_CoreStruct.gleVarRasterPos2d = (void*)glRasterPos2d;
	gle_CoreStruct.gleVarRasterPos2dv = (void*)glRasterPos2dv;
	gle_CoreStruct.gleVarRasterPos2f = (void*)glRasterPos2f;
	gle_CoreStruct.gleVarRasterPos2fv = (void*)glRasterPos2fv;
	gle_CoreStruct.gleVarRasterPos2i = (void*)glRasterPos2i;
	gle_CoreStruct.gleVarRasterPos2iv = (void*)glRasterPos2iv;
	gle_CoreStruct.gleVarRasterPos2s = (void*)glRasterPos2s;
	gle_CoreStruct.gleVarRasterPos2sv = (void*)glRasterPos2sv;
	gle_CoreStruct.gleVarRasterPos3d = (void*)glRasterPos3d;
	gle_CoreStruct.gleVarRasterPos3dv = (void*)glRasterPos3dv;
	gle_CoreStruct.gleVarRasterPos3f = (void*)glRasterPos3f;
	gle_CoreStruct.gleVarRasterPos3fv = (void*)glRasterPos3fv;
	gle_CoreStruct.gleVarRasterPos3i = (void*)glRasterPos3i;
	gle_CoreStruct.gleVarRasterPos3iv = (void*)glRasterPos3iv;
	gle_CoreStruct.gleVarRasterPos3s = (void*)glRasterPos3s;
	gle_CoreStruct.gleVarRasterPos3sv = (void*)glRasterPos3sv;
	gle_CoreStruct.gleVarRasterPos4d = (void*)glRasterPos4d;
	gle_CoreStruct.gleVarRasterPos4dv = (void*)glRasterPos4dv;
	gle_CoreStruct.gleVarRasterPos4f = (void*)glRasterPos4f;
	gle_CoreStruct.gleVarRasterPos4fv = (void*)glRasterPos4fv;
	gle_CoreStruct.gleVarRasterPos4i = (void*)glRasterPos4i;
	gle_CoreStruct.gleVarRasterPos4iv = (void*)glRasterPos4iv;
	gle_CoreStruct.gleVarRasterPos4s = (void*)glRasterPos4s;
	gle_CoreStruct.gleVarRasterPos4sv = (void*)glRasterPos4sv;
	gle_CoreStruct.gleVarRectd = (void*)glRectd;
	gle_CoreStruct.gleVarRectdv = (void*)glRectdv;
	gle_CoreStruct.gleVarRectf = (void*)glRectf;
	gle_CoreStruct.gleVarRectfv = (void*)glRectfv;
	gle_CoreStruct.gleVarRecti = (void*)glRecti;
	gle_CoreStruct.gleVarRectiv = (void*)glRectiv;
	gle_CoreStruct.gleVarRects = (void*)glRects;
	gle_CoreStruct.gleVarRectsv = (void*)glRectsv;
	gle_CoreStruct.gleVarTexCoord1d = (void*)glTexCoord1d;
	gle_CoreStruct.gleVarTexCoord1dv = (void*)glTexCoord1dv;
	gle_CoreStruct.gleVarTexCoord1f = (void*)glTexCoord1f;
	gle_CoreStruct.gleVarTexCoord1fv = (void*)glTexCoord1fv;
	gle_CoreStruct.gleVarTexCoord1i = (void*)glTexCoord1i;
	gle_CoreStruct.gleVarTexCoord1iv = (void*)glTexCoord1iv;
	gle_CoreStruct.gleVarTexCoord1s = (void*)glTexCoord1s;
	gle_CoreStruct.gleVarTexCoord1sv = (void*)glTexCoord1sv;
	gle_CoreStruct.gleVarTexCoord2d = (void*)glTexCoord2d;
	gle_CoreStruct.gleVarTexCoord2dv = (void*)glTexCoord2dv;
	gle_CoreStruct.gleVarTexCoord2f = (void*)glTexCoord2f;
	gle_CoreStruct.gleVarTexCoord2fv = (void*)glTexCoord2fv;
	gle_CoreStruct.gleVarTexCoord2i = (void*)glTexCoord2i;
	gle_CoreStruct.gleVarTexCoord2iv = (void*)glTexCoord2iv;
	gle_CoreStruct.gleVarTexCoord2s = (void*)glTexCoord2s;
	gle_CoreStruct.gleVarTexCoord2sv = (void*)glTexCoord2sv;
	gle_CoreStruct.gleVarTexCoord3d = (void*)glTexCoord3d;
	gle_CoreStruct.gleVarTexCoord3dv = (void*)glTexCoord3dv;
	gle_CoreStruct.gleVarTexCoord3f = (void*)glTexCoord3f;
	gle_CoreStruct.gleVarTexCoord3fv = (void*)glTexCoord3fv;
	gle_CoreStruct.gleVarTexCoord3i = (void*)glTexCoord3i;
	gle_CoreStruct.gleVarTexCoord3iv = (void*)glTexCoord3iv;
	gle_CoreStruct.gleVarTexCoord3s = (void*)glTexCoord3s;
	gle_CoreStruct.gleVarTexCoord3sv = (void*)glTexCoord3sv;
	gle_CoreStruct.gleVarTexCoord4d = (void*)glTexCoord4d;
	gle_CoreStruct.gleVarTexCoord4dv = (void*)glTexCoord4dv;
	gle_CoreStruct.gleVarTexCoord4f = (void*)glTexCoord4f;
	gle_CoreStruct.gleVarTexCoord4fv = (void*)glTexCoord4fv;
	gle_CoreStruct.gleVarTexCoord4i = (void*)glTexCoord4i;
	gle_CoreStruct.gleVarTexCoord4iv = (void*)glTexCoord4iv;
	gle_CoreStruct.gleVarTexCoord4s = (void*)glTexCoord4s;
	gle_CoreStruct.gleVarTexCoord4sv = (void*)glTexCoord4sv;
	gle_CoreStruct.gleVarVertex2d = (void*)glVertex2d;
	gle_CoreStruct.gleVarVertex2dv = (void*)glVertex2dv;
	gle_CoreStruct.gleVarVertex2f = (void*)glVertex2f;
	gle_CoreStruct.gleVarVertex2fv = (void*)glVertex2fv;
	gle_CoreStruct.gleVarVertex2i = (void*)glVertex2i;
	gle_CoreStruct.gleVarVertex2iv = (void*)glVertex2iv;
	gle_CoreStruct.gleVarVertex2s = (void*)glVertex2s;
	gle_CoreStruct.gleVarVertex2sv = (void*)glVertex2sv;
	gle_CoreStruct.gleVarVertex3d = (void*)glVertex3d;
	gle_CoreStruct.gleVarVertex3dv = (void*)glVertex3dv;
	gle_CoreStruct.gleVarVertex3f = (void*)glVertex3f;
	gle_CoreStruct.gleVarVertex3fv = (void*)glVertex3fv;
	gle_CoreStruct.gleVarVertex3i = (void*)glVertex3i;
	gle_CoreStruct.gleVarVertex3iv = (void*)glVertex3iv;
	gle_CoreStruct.gleVarVertex3s = (void*)glVertex3s;
	gle_CoreStruct.gleVarVertex3sv = (void*)glVertex3sv;
	gle_CoreStruct.gleVarVertex4d = (void*)glVertex4d;
	gle_CoreStruct.gleVarVertex4dv = (void*)glVertex4dv;
	gle_CoreStruct.gleVarVertex4f = (void*)glVertex4f;
	gle_CoreStruct.gleVarVertex4fv = (void*)glVertex4fv;
	gle_CoreStruct.gleVarVertex4i = (void*)glVertex4i;
	gle_CoreStruct.gleVarVertex4iv = (void*)glVertex4iv;
	gle_CoreStruct.gleVarVertex4s = (void*)glVertex4s;
	gle_CoreStruct.gleVarVertex4sv = (void*)glVertex4sv;
	gle_CoreStruct.gleVarClipPlane = (void*)glClipPlane;
	gle_CoreStruct.gleVarColorMaterial = (void*)glColorMaterial;
	gle_CoreStruct.gleVarFogf = (void*)glFogf;
	gle_CoreStruct.gleVarFogfv = (void*)glFogfv;
	gle_CoreStruct.gleVarFogi = (void*)glFogi;
	gle_CoreStruct.gleVarFogiv = (void*)glFogiv;
	gle_CoreStruct.gleVarLightf = (void*)glLightf;
	gle_CoreStruct.gleVarLightfv = (void*)glLightfv;
	gle_CoreStruct.gleVarLighti = (void*)glLighti;
	gle_CoreStruct.gleVarLightiv = (void*)glLightiv;
	gle_CoreStruct.gleVarLightModelf = (void*)glLightModelf;
	gle_CoreStruct.gleVarLightModelfv = (void*)glLightModelfv;
	gle_CoreStruct.gleVarLightModeli = (void*)glLightModeli;
	gle_CoreStruct.gleVarLightModeliv = (void*)glLightModeliv;
	gle_CoreStruct.gleVarLineStipple = (void*)glLineStipple;
	gle_CoreStruct.gleVarMaterialf = (void*)glMaterialf;
	gle_CoreStruct.gleVarMaterialfv = (void*)glMaterialfv;
	gle_CoreStruct.gleVarMateriali = (void*)glMateriali;
	gle_CoreStruct.gleVarMaterialiv = (void*)glMaterialiv;
	gle_CoreStruct.gleVarPolygonStipple = (void*)glPolygonStipple;
	gle_CoreStruct.gleVarShadeModel = (void*)glShadeModel;
	gle_CoreStruct.gleVarTexEnvf = (void*)glTexEnvf;
	gle_CoreStruct.gleVarTexEnvfv = (void*)glTexEnvfv;
	gle_CoreStruct.gleVarTexEnvi = (void*)glTexEnvi;
	gle_CoreStruct.gleVarTexEnviv = (void*)glTexEnviv;
	gle_CoreStruct.gleVarTexGend = (void*)glTexGend;
	gle_CoreStruct.gleVarTexGendv = (void*)glTexGendv;
	gle_CoreStruct.gleVarTexGenf = (void*)glTexGenf;
	gle_CoreStruct.gleVarTexGenfv = (void*)glTexGenfv;
	gle_CoreStruct.gleVarTexGeni = (void*)glTexGeni;
	gle_CoreStruct.gleVarTexGeniv = (void*)glTexGeniv;
	gle_CoreStruct.gleVarFeedbackBuffer = (void*)glFeedbackBuffer;
	gle_CoreStruct.gleVarSelectBuffer = (void*)glSelectBuffer;
	gle_CoreStruct.gleVarRenderMode = (void*)glRenderMode;
	gle_CoreStruct.gleVarInitNames = (void*)glInitNames;
	gle_CoreStruct.gleVarLoadName = (void*)glLoadName;
	gle_CoreStruct.gleVarPassThrough = (void*)glPassThrough;
	gle_CoreStruct.gleVarPopName = (void*)glPopName;
	gle_CoreStruct.gleVarPushName = (void*)glPushName;
	gle_CoreStruct.gleVarClearAccum = (void*)glClearAccum;
	gle_CoreStruct.gleVarClearIndex = (void*)glClearIndex;
	gle_CoreStruct.gleVarIndexMask = (void*)glIndexMask;
	gle_CoreStruct.gleVarAccum = (void*)glAccum;
	gle_CoreStruct.gleVarPopAttrib = (void*)glPopAttrib;
	gle_CoreStruct.gleVarPushAttrib = (void*)glPushAttrib;
	gle_CoreStruct.gleVarMap1d = (void*)glMap1d;
	gle_CoreStruct.gleVarMap1f = (void*)glMap1f;
	gle_CoreStruct.gleVarMap2d = (void*)glMap2d;
	gle_CoreStruct.gleVarMap2f = (void*)glMap2f;
	gle_CoreStruct.gleVarMapGrid1d = (void*)glMapGrid1d;
	gle_CoreStruct.gleVarMapGrid1f = (void*)glMapGrid1f;
	gle_CoreStruct.gleVarMapGrid2d = (void*)glMapGrid2d;
	gle_CoreStruct.gleVarMapGrid2f = (void*)glMapGrid2f;
	gle_CoreStruct.gleVarEvalCoord1d = (void*)glEvalCoord1d;
	gle_CoreStruct.gleVarEvalCoord1dv = (void*)glEvalCoord1dv;
	gle_CoreStruct.gleVarEvalCoord1f = (void*)glEvalCoord1f;
	gle_CoreStruct.gleVarEvalCoord1fv = (void*)glEvalCoord1fv;
	gle_CoreStruct.gleVarEvalCoord2d = (void*)glEvalCoord2d;
	gle_CoreStruct.gleVarEvalCoord2dv = (void*)glEvalCoord2dv;
	gle_CoreStruct.gleVarEvalCoord2f = (void*)glEvalCoord2f;
	gle_CoreStruct.gleVarEvalCoord2fv = (void*)glEvalCoord2fv;
	gle_CoreStruct.gleVarEvalMesh1 = (void*)glEvalMesh1;
	gle_CoreStruct.gleVarEvalPoint1 = (void*)glEvalPoint1;
	gle_CoreStruct.gleVarEvalMesh2 = (void*)glEvalMesh2;
	gle_CoreStruct.gleVarEvalPoint2 = (void*)glEvalPoint2;
	gle_CoreStruct.gleVarAlphaFunc = (void*)glAlphaFunc;
	gle_CoreStruct.gleVarPixelZoom = (void*)glPixelZoom;
	gle_CoreStruct.gleVarPixelTransferf = (void*)glPixelTransferf;
	gle_CoreStruct.gleVarPixelTransferi = (void*)glPixelTransferi;
	gle_CoreStruct.gleVarPixelMapfv = (void*)glPixelMapfv;
	gle_CoreStruct.gleVarPixelMapuiv = (void*)glPixelMapuiv;
	gle_CoreStruct.gleVarPixelMapusv = (void*)glPixelMapusv;
	gle_CoreStruct.gleVarCopyPixels = (void*)glCopyPixels;
	gle_CoreStruct.gleVarDrawPixels = (void*)glDrawPixels;
	gle_CoreStruct.gleVarGetClipPlane = (void*)glGetClipPlane;
	gle_CoreStruct.gleVarGetLightfv = (void*)glGetLightfv;
	gle_CoreStruct.gleVarGetLightiv = (void*)glGetLightiv;
	gle_CoreStruct.gleVarGetMapdv = (void*)glGetMapdv;
	gle_CoreStruct.gleVarGetMapfv = (void*)glGetMapfv;
	gle_CoreStruct.gleVarGetMapiv = (void*)glGetMapiv;
	gle_CoreStruct.gleVarGetMaterialfv = (void*)glGetMaterialfv;
	gle_CoreStruct.gleVarGetMaterialiv = (void*)glGetMaterialiv;
	gle_CoreStruct.gleVarGetPixelMapfv = (void*)glGetPixelMapfv;
	gle_CoreStruct.gleVarGetPixelMapuiv = (void*)glGetPixelMapuiv;
	gle_CoreStruct.gleVarGetPixelMapusv = (void*)glGetPixelMapusv;
	gle_CoreStruct.gleVarGetPolygonStipple = (void*)glGetPolygonStipple;
	gle_CoreStruct.gleVarGetTexEnvfv = (void*)glGetTexEnvfv;
	gle_CoreStruct.gleVarGetTexEnviv = (void*)glGetTexEnviv;
	gle_CoreStruct.gleVarGetTexGendv = (void*)glGetTexGendv;
	gle_CoreStruct.gleVarGetTexGenfv = (void*)glGetTexGenfv;
	gle_CoreStruct.gleVarGetTexGeniv = (void*)glGetTexGeniv;
	gle_CoreStruct.gleVarIsList = (void*)glIsList;
	gle_CoreStruct.gleVarFrustum = (void*)glFrustum;
	gle_CoreStruct.gleVarLoadIdentity = (void*)glLoadIdentity;
	gle_CoreStruct.gleVarLoadMatrixf = (void*)glLoadMatrixf;
	gle_CoreStruct.gleVarLoadMatrixd = (void*)glLoadMatrixd;
	gle_CoreStruct.gleVarMatrixMode = (void*)glMatrixMode;
	gle_CoreStruct.gleVarMultMatrixf = (void*)glMultMatrixf;
	gle_CoreStruct.gleVarMultMatrixd = (void*)glMultMatrixd;
	gle_CoreStruct.gleVarOrtho = (void*)glOrtho;
	gle_CoreStruct.gleVarPopMatrix = (void*)glPopMatrix;
	gle_CoreStruct.gleVarPushMatrix = (void*)glPushMatrix;
	gle_CoreStruct.gleVarRotated = (void*)glRotated;
	gle_CoreStruct.gleVarRotatef = (void*)glRotatef;
	gle_CoreStruct.gleVarScaled = (void*)glScaled;
	gle_CoreStruct.gleVarScalef = (void*)glScalef;
	gle_CoreStruct.gleVarTranslated = (void*)glTranslated;
	gle_CoreStruct.gleVarTranslatef = (void*)glTranslatef;
	gle_CoreStruct.gleVarDrawArrays = (void*)glDrawArrays;
	gle_CoreStruct.gleVarDrawElements = (void*)glDrawElements;
	gle_CoreStruct.gleVarGetPointerv = (void*)glGetPointerv;
	gle_CoreStruct.gleVarPolygonOffset = (void*)glPolygonOffset;
	gle_CoreStruct.gleVarCopyTexImage1D = (void*)glCopyTexImage1D;
	gle_CoreStruct.gleVarCopyTexImage2D = (void*)glCopyTexImage2D;
	gle_CoreStruct.gleVarCopyTexSubImage1D = (void*)glCopyTexSubImage1D;
	gle_CoreStruct.gleVarCopyTexSubImage2D = (void*)glCopyTexSubImage2D;
	gle_CoreStruct.gleVarTexSubImage1D = (void*)glTexSubImage1D;
	gle_CoreStruct.gleVarTexSubImage2D = (void*)glTexSubImage2D;
	gle_CoreStruct.gleVarBindTexture = (void*)glBindTexture;
	gle_CoreStruct.gleVarDeleteTextures = (void*)glDeleteTextures;
	gle_CoreStruct.gleVarGenTextures = (void*)glGenTextures;
	gle_CoreStruct.gleVarIsTexture = (void*)glIsTexture;
	gle_CoreStruct.gleVarArrayElement = (void*)glArrayElement;
	gle_CoreStruct.gleVarColorPointer = (void*)glColorPointer;
	gle_CoreStruct.gleVarDisableClientState = (void*)glDisableClientState;
	gle_CoreStruct.gleVarEdgeFlagPointer = (void*)glEdgeFlagPointer;
	gle_CoreStruct.gleVarEnableClientState = (void*)glEnableClientState;
	gle_CoreStruct.gleVarIndexPointer = (void*)glIndexPointer;
	gle_CoreStruct.gleVarInterleavedArrays = (void*)glInterleavedArrays;
	gle_CoreStruct.gleVarNormalPointer = (void*)glNormalPointer;
	gle_CoreStruct.gleVarTexCoordPointer = (void*)glTexCoordPointer;
	gle_CoreStruct.gleVarVertexPointer = (void*)glVertexPointer;
	gle_CoreStruct.gleVarAreTexturesResident = (void*)glAreTexturesResident;
	gle_CoreStruct.gleVarPrioritizeTextures = (void*)glPrioritizeTextures;
	gle_CoreStruct.gleVarIndexub = (void*)glIndexub;
	gle_CoreStruct.gleVarIndexubv = (void*)glIndexubv;
	gle_CoreStruct.gleVarPopClientAttrib = (void*)glPopClientAttrib;
	gle_CoreStruct.gleVarPushClientAttrib = (void*)glPushClientAttrib;
#endif //WIN32
}
