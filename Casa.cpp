#include "Casa.h"

void Casa::DibujarCasa(float x, float y, float z) 
{
	glPushMatrix();
		glTranslatef(x, y, z);

		glPushMatrix();
		glTranslatef(1.5, y + 2, 0);
			glBegin(GL_TRIANGLES);
				glVertex3f(-0.5, 0, 0);
				glVertex3f(0, 0.5, 0);
				glVertex3f(0.5, 0, 0);
			glEnd();
		glPopMatrix();


	glPopMatrix();
}