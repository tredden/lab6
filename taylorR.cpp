//
//
//
//
//program: asteroids.cpp
//author:  Gordon Griesel
//date:    2014 - 2018
//mod spring 2015: added constructors
//mod spring 2018: X11 wrapper class
//This program is a game starting point for a 3350 project.
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
//#include <X11/Xutil.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showName(Rect* r){
    ggprint8b(r, 16, 0x0000ffff, "Taylor Redden");
}


void drawBox(float x, float y){
    static float weeee=0;
    weeee++;
    glColor3f (0.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(weeee, 0.0f, 0.0f, 1.0f);
    glTranslatef(-100, -50, 0);
    glBegin(GL_QUADS);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( 200.0f, 0.0f);
    glVertex2f( 200.0f, 100.0f);
    glVertex2f( 0.0f, 100.0f);
    glEnd();

    Rect r;

    r.bot = 50;
    r.left = 100;
    r.center = 1;
    ggprint8b(&r, 16, 0x00ff0000, "Taylor Redden");


    glPopMatrix();

}
