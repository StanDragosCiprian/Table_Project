#include "glos.h"

#include <gl.h>
#include <glu.h>
#include <glaux.h>
#include <math.h>
#include <stdlib.h>
void myinit(void);
void CALLBACK display(void);
void CALLBACK myReshape(GLsizei w, GLsizei h);
void CALLBACK MutaStanga(void);
void CALLBACK MutaDreapta(void);
void CALLBACK MutaSus(void);
void CALLBACK MutaJos(void);
void CALLBACK rot_z_up(AUX_EVENTREC* event);
void CALLBACK rot_z_down(AUX_EVENTREC* event);

static GLfloat x = 0, y = 0, alfa = 270;
GLUquadricObj* qobj;

GLfloat ctrlpoints[4][4][3] = {
	{ { 0.0, 0.0, 0.0 }, { 0.0, 20.0, 0.0 },
	{ 0.0, 30.0, 0.0 }, { 0.0, 40.0, 0.0 } },
	{ { 20.0, 0.0, 0.0 }, { 20.0, 20.0, 50.0 },
	{ 20.0, 30.0, 50.0 }, { 20.0, 40.0, 0.0 } },
	{ { 30.0, 0.0, 0.0 }, { 30.0, 20.0, 50.0 },
	{ 30.0, 30.0, 50.0 }, { 30.0, 40.0, 0.0 } },
	{ { 40.0, 0.0, 0.0 }, { 40.0, 20.0, 0.0 },
	{ 40.0, 30.0, 0.0 }, { 40.0, 40.0, 0.0 } }
};

void myinit(void) {
	glClearColor(255, 255, 255, 0);

	GLfloat ambient[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat position[] = { 0.0, 0.0, 2.0, 1.0 };
	GLfloat mat_diffuse[] = { 0.6, 0.6, 0.6, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_POSITION, position);

	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4,
		0, 1, 12, 4, &ctrlpoints[0][0][0]);
	glEnable(GL_MAP2_VERTEX_3);
	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);
	glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
}


void CALLBACK MutaStanga(void)
{
	x = x - 10;
}

void CALLBACK MutaDreapta(void)
{
	x = x + 10;
}


void CALLBACK MutaJos(void)
{
	y = y - 10;
}

void CALLBACK MutaSus(void)
{

	y = y + 10;
}

void CALLBACK rot_z_up(AUX_EVENTREC* event)
{
	alfa = alfa + 10;
}

void CALLBACK rot_z_down(AUX_EVENTREC* event)
{
	alfa = alfa - 10;
}
void CALLBACK scaun(void)
{
	GLUquadricObj* qobj;

	qobj = gluNewQuadric();
	
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 100, y - 0, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 20, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 100, y - 50, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 20, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 150, y - 50, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 70, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 150, y - 0, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 70, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 125, y -25, -30);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj,50,50, 10, 4, 10);
	gluDisk(qobj, 0,50, 4, 50);
	glPopMatrix();

}
void CALLBACK scaun2(void) {
	GLUquadricObj* qobj;

	qobj = gluNewQuadric();

	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x + 100, y + 0, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 20, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x + 100, y + 50, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 20, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x + 150, y + 50, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 70, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x + 150, y + 0, -50);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 10, 10, 70, 4, 10);

	gluDisk(qobj, 0, 10, 4, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x + 125, y + 25, -30);
	glRotatef(45, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 50, 50, 10, 4, 10);
	gluDisk(qobj, 0, 50, 4, 50);
	glPopMatrix();
}
void CALLBACK display(void)
{
	int i, j;
	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();

	glTranslatef(x, y, 0.0);
	glPointSize(5);
	glRotatef(alfa, alfa + 30,0,0);

	//CILINDRU DIN CERCURI

	GLUquadricObj* qobj;
	
	qobj = gluNewQuadric();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(x - 0, y - 0, 10);
	glRotatef(alfa, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj, 40, 40, 10, 60, 10);

	gluDisk(qobj, 0, 40, 50, 50);
	glPopMatrix();
	glPushMatrix();
	gluQuadricDrawStyle(qobj, GLU_LINE);
	glTranslatef(-4, y - 0, -50);
	glRotatef(alfa, 0, 0, 1);
	glColor3f(0.6, 0.1961, 0.8);

	gluCylinder(qobj,5,5, 40, 20, 10);

	gluDisk(qobj, 0,5, 50, 50);
	glPopMatrix();
	//scaun picioare
	scaun();
	scaun2();
	//CILINDRU DIN CERCURI -  primitive
	glColor3f(1, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glBegin(GL_QUAD_STRIP);

	//for (j = 0; j <= 10; j += 1) {
	//	for (i = 0; i <= 360; i += 10) {
	//		glVertex3f(35 * cos(i * 3.14 / 180), 35 * sin(i * 3.14 / 180),	j);

	//	}

	//}
	//
	
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(10, 10, 10);
	glVertex3f(0, 0, 0);
	glPointSize(10);
	glEnd();

	glPushMatrix();
	glTranslatef(0,0,0);
	glRotatef(180,0,1,0);
	glTranslatef(-19, -20,-10);
	glEvalMesh2(GL_FILL, 0, 20, 0, 20);
	glPopMatrix();
	glFlush();
	

}

//void CALLBACK myReshape(GLsizei w, GLsizei h)
//{
//if (!h) return;			//transformare anizotropica, forma se modifica functie de forma(dimens) viewportului
//glViewport(0, 0, w, h);	//daca w>h stabilim ca baza inaltime, si stab unit logica de dimens in fct de h(h/320, 320 lungime lat patrat)
//glMatrixMode(GL_PROJECTION);
//glLoadIdentity();
//glOrtho (-160.0, 160.0, -160.0,
//160.0, -100.0, 100.0);
////gluLookAt(0, 0, 0, 110, 110, 110, 0, 0, 0);
//glMatrixMode(GL_MODELVIEW);
//}

void CALLBACK myReshape(GLsizei w, GLsizei h)
{
	if (!h) return;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();
	if (w <= h)
		glOrtho(-160.0, 160.0, 160.0 * (GLfloat)h / (GLfloat)w,
			-160.0 * (GLfloat)h / (GLfloat)w, -1000.0, 1000.0);
	else
		glOrtho(-160.0 * (GLfloat)w / (GLfloat)h,
			160.0 * (GLfloat)w / (GLfloat)h, -160.0, 160.0, -100.0, 100.0);
	gluPerspective(30,1,1,1);
	
	//
	glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char** argv)
{
	auxInitDisplayMode(AUX_SINGLE | AUX_RGB);
	auxInitPosition(0, 0, 1000, 800);
	auxInitWindow(("Primitive Cilindru"));
	myinit();
	
	auxKeyFunc(AUX_LEFT, MutaStanga);
	auxKeyFunc(AUX_RIGHT, MutaDreapta);
	auxKeyFunc(AUX_DOWN, MutaJos);
	auxKeyFunc(AUX_UP, MutaSus);
	auxMouseFunc(AUX_LEFTBUTTON, AUX_MOUSEDOWN, rot_z_up);
	auxMouseFunc(AUX_RIGHTBUTTON, AUX_MOUSEDOWN, rot_z_down);
	auxReshapeFunc(myReshape);
	auxMainLoop(display); 
	return(0);
}