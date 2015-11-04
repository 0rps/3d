#include <iostream>

#include "lgl.h"

using namespace std;

int main(int argc, char* args[])
{
    glutInit( &argc, args );
    glutInitContextVersion(2,1);
    glutInitDisplayMode( GLUT_DOUBLE );
    glutInitWindowSize( SCREEN_WIDTH, SCREEN_HEIGHT );
    glutCreateWindow( "OpenGL" );

    if ( !initGL() )
    {
        printf("Unable to init graphics\n");
        return 1;
    }
    glutDisplayFunc(render);
    glutTimerFunc( 1000 / SCREEN_FPS, runMainLoop, 0);
    glutMainLoop();

    return 0;
}

