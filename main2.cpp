#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#define ESCAPE 27
GLfloat xt =1.0,yt =1.0;
GLint window;
int zangle=0;
void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glLineWidth(1.0);
    glColor3f(1.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho(-6,6,-6,6,-6,6);
}
void mydisplay (void)
{
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glRotatef(360.0-(zangle*10),0.0,0.0,1.0);
    glTranslatef(-3.0,-3.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glVertex2f(2,2);
        glVertex2f(4,2);
        glVertex2f(4,4);
        glVertex2f(2,4);
        glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glRotatef(360.0-(zangle*10),0.0,0.0,1.0);
    glTranslatef(-3.0,-3.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glVertex2f(-2.5,-2.5);
        glVertex2f(-2.5,-2.5);
        glVertex2f(-2.5,-3.5);
        glVertex2f(-2.5,-3.5);
        glEnd();
        glPopMatrix();
        glutSwapBuffers();
        glFlush();
}
void KeyBoardAssign (GLubyte key,GLint x, GLint y)
{
    switch (key)
    {
        case ESCAPE :
            printf("escape pressed. exit.\n");
        break;
        case 'x':
            zangle +=1.0;
            glutSwapBuffers();
            glutPostRedisplay();
        break;
        case 'x':
            zangle -=1.0;
            glutSwapBuffers();
            glutPostRedisplay();
        break;
        default;
        break;
    }
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(500,500);
   window = glutCreateWindow
      glutCreateWindow("Model Transform");
      glutDisplayFunc(display);
      glutReshapeFunc(reshape);
      initGL();
      glutMainLoop();
      return 0;
}
