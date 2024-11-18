// OpenGLHelloWorld.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <GL/glut.h>
#include "Game.h"

using namespace std;

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int WINDOW_POS_X = 300;
const int WINDOW_POS_Y = 400;
const char TITLE[] = "PARTE 1";

const GLclampf RED = 0.2;
const GLclampf GREEN = 0.3;
const GLclampf BLUE = 0.5;
const GLclampf ALPHA = 0.5;

bool fullScreenMode = true;

Game game;

void writeLine(string text) {
    cout << text << endl;
}

void initGraphics() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glClearColor(RED, GREEN, BLUE, ALPHA);
    game.Init();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    game.Render();

    glutSwapBuffers();
}

void reshape(GLsizei width, GLsizei height) {
    if (height == 0) height = 1;
    GLfloat aspectRatio = (GLfloat)width / (GLfloat)height;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0f, aspectRatio, 1.0f, 200.0f);
    glMatrixMode(GL_MODELVIEW);
}

void idle() {
    game.Update();
    glutPostRedisplay();
}

void keyPressed(unsigned char key, int px, int py) {
    game.ProcessKeyPressed(key, px, py);
    glutPostRedisplay();
}

void mouseMoved(int x, int y) {
    game.ProcessMouseMovement(x, y);
    glutPostRedisplay();
}

void mouseClicked(int button, int state, int x, int y) {
    game.ProcessMouseClicked(button, state, x, y);
    glutPostRedisplay();
}

void specialKey(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_F11:
        fullScreenMode = !fullScreenMode;
        if (fullScreenMode) {
            glutFullScreen();
        }
        else {
            glutReshapeWindow(WINDOW_WIDTH, WINDOW_HEIGHT);
            glutPositionWindow(WINDOW_POS_X, WINDOW_POS_Y);
        }
        break;
    default:
        break;
    }
}

int main(int argc, char** argv)
{
    writeLine("Hello world con openGL.");

    writeLine("Inicializando ventana...");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitWindowPosition(WINDOW_POS_X, WINDOW_POS_Y);
    glutCreateWindow(TITLE);

    writeLine("Registrando funciones de tratamiento de eventos...");
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyPressed);
    glutSpecialFunc(specialKey);
    glutMotionFunc(mouseMoved);
    glutMouseFunc(mouseClicked);
    glutIdleFunc(idle);

    glutFullScreen();

    writeLine("Iniciando gráficos...");
    initGraphics();

    writeLine("Iniciando bucle infinito...");
    glutMainLoop();
}