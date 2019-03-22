#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
GLfloat r=2,sp,cl=0;GLint loop,v=0,n=1;
void cloud(float l,float m,float c)
{
	int i,j,q;
	float x,g,y,a=0,z=0;
	glColor3f(c,c,c);
	for(i=0;i<8;i++)//clouds
{	for(j=0;j<=i;j++)
{ glBegin(GL_POLYGON);
	for(q=0;q<20;q++)
	{
		g=2*3.14*q/20;
		x=2*cosf(g);
		y=2*sinf(g);
		glVertex2f(x+l+a,y+m+z);
		
	}glEnd();
	z=z+1;
	}
	a=a+1;
	z=0;
	}
	for(i=8;i>0;i--)//reverse clouds
{	for(j=0;j<=i;j++)
{ glBegin(GL_POLYGON);
	for(q=0;q<20;q++)
	{
		g=2*3.14*q/20;
		x=2*cosf(g);
		y=2*sinf(g);
		glVertex2f(x+l+a,y+m+z);
		
	}glEnd();
	z=z+1;
	}
	a=a+1;
	z=0;
	}
	a=0;z=0;
}
void wheel1()
{float i,g,x,y;
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	
	for(i=0;i<100;i++)
	{
		g=2*3.14*i/100;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+35,y+30);
		
	}glEnd();glLineWidth(2);
	glBegin(GL_LINES);
	for(i=0;i<360;i++)
	{
		g=2*3.14*i/12;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+35,y+30);
		glVertex2f(35,30);
	}
	
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	for(i=0;i<100;i++)
	{
		g=2*3.14*i/100;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+25,y+30);
		
	}glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	for(i=0;i<360;i++)
	{
		g=2*3.14*i/12;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+25,y+30);
		glVertex2f(25,30);
	}
	
	glEnd();
	
}

void wheel2()
{float i,g,x,y;
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	
	for(i=0;i<100;i++)
	{
		g=2*3.14*i/100;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+35,y+30);
		
	}glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	for(i=0.5;i<360;i++)
	{
		g=2*3.14*i/12;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+35,y+30);
		glVertex2f(35,30);
	}
	
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	for(i=0;i<100;i++)
	{
		g=2*3.14*i/100;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+25,y+30);
		
	}glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	for(i=0.5;i<360;i++)
	{
		g=2*3.14*i/12;
		x=r*cosf(g);
		y=r*sinf(g);
		glVertex2f(x+25,y+30);
		glVertex2f(25,30);
	}
	
	glEnd();
	
}
void land()
{
	glColor3f(.9,.9,.9);
	float i,k=5,x,y,g,j;float a=0,z=0,q;
	glBegin(GL_LINES);
	glVertex2f(-90,28);
	glVertex2f(140,28);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(140,45);
glVertex2f(-90,45);
glEnd();
glColor3f(0,0,1.8);
glBegin(GL_QUADS);
	glVertex2f(140,45);
glVertex2f(-90,45);
glVertex2f(-90,60);
glVertex2f(140,60);
glEnd();/////////////////////////////////////sun
glBegin(GL_POLYGON);
	glColor3f(1,1,0);
	for(i=0;i<100;i++)
	{
		g=2*3.14*i/100;
		x=k*cosf(g);
		y=k*sinf(g);
		glVertex2f(x+60,y+60);
		
	}glEnd();
	glBegin(GL_LINES);
	for(i=0.5;i<6;i++)
	{
		g=2*3.14*i/12;
		x=7*cosf(g);
		y=7*sinf(g);
		glVertex2f(x+60,y+60);
		glVertex2f(60,60);
	}
	
	glEnd();
	glBegin(GL_LINES);
	for(i=1;i<6;i++)
	{
		g=2*3.14*i/12;
		x=6*cosf(g);
		y=6*sinf(g);
		glVertex2f(x+60,y+60);
		glVertex2f(60,60);
	}glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(80,70);
	glVertex2f(80.1,69.9);
	glVertex2f(80.2,69.8);
	glVertex2f(80.3,69.7);
	glVertex2f(80.4,69.6);
	glVertex2f(80.5,69.5);
	glVertex2f(80.6,69.6);
	glVertex2f(80.7,69.7);
	glVertex2f(80.8,69.8);
	glVertex2f(80.9,69.9);
	glVertex2f(81,70);
	glVertex2f(81.1,70.1);
	glVertex2f(81.2,70.2);
	glEnd();
	////////////////////////////////////clouds
	glPushMatrix();
	glTranslated(cl,0,0);
	cloud(70,80,.5);
	cloud(30,78,.7);
    cloud(40,79,.5);
    cloud(90,79,.5);
	cloud(120,79,.7);
	cloud(50,74,.6);
	glFlush();cl+=.09;
	glPopMatrix();
}
void bus()
{
	float i,x,y,g,k=2.5;
	int a=0;
	
	glLineWidth(3);
	
	glColor3f(0,0,0);

	glBegin(GL_LINE_LOOP);
	glVertex2f(40,30);
	glVertex2f(20,30);
	glVertex2f(20,40.5);
	glVertex2f(20.5,42);
	glVertex2f(38.5,42);
	glVertex2f(39,41.5);
	glVertex2f(39.5,41);
glVertex2f(40,40);
	glEnd();

	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(40,30);
	glVertex2f(20,30);
	glVertex2f(20,40.5);
	glVertex2f(20.5,42);
	glVertex2f(38.5,42);
	glVertex2f(39,41.5);
	glVertex2f(39.5,41);
glVertex2f(40,40);
	glEnd();
	glColor3f(0,0,0);
	
	glColor3f(1,1,1);
	glLineWidth(3);
	for(i=0;i<7;i++)
	{
	glBegin(GL_POLYGON);
	glVertex2f(22.5+a,37);
	glVertex2f(20.5+a,37);
	glVertex2f(20.5+a,40);
	glVertex2f(22.5+a,40);
	a=a+3;
	glEnd();
	}
	a=0;
	glColor3f(0,0,0);
	glLineWidth(3);
	for(i=0;i<6;i++)
	{
	glBegin(GL_LINE_LOOP);
	glVertex2f(22.5+a,37);
	glVertex2f(20.5+a,37);
	glVertex2f(20.5+a,40);
	glVertex2f(22.5+a,40);
	a=a+3;
	glEnd();
	}
	a=a-3;
glBegin(GL_LINE_LOOP);
	glVertex2f(((22.5+a)/2)+2,37);
	glVertex2f(20.5+a,37);
	glVertex2f(20.5+a,40);
	glVertex2f(((22.5+a)/2)+2,40);
	a=a+3;
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(20,35);
	glVertex2f(40,35);
	glVertex2f(40,34);
	glVertex2f(20,34);
	glEnd();
	}

void display()
{
	if(v==1)
	{
glClear(GL_COLOR_BUFFER_BIT);
int x=1,j,k,m;float fm,z=1;sp=sp/100;
fm=100/sp;//till where the bus shld go fm distance
bus();
glTranslated(-40,0,0);
for(m=0;m<loop;m++)//loops bus shld
	{
		for(x=0;x<fm;x++)
{
glTranslated(z,0,0);bus();//translate bus forward
if(n==1)//rotation wheel
{
	n=2;
	wheel1();

}
else
{n=1;
wheel2();
}glFlush();
glTranslated(-z,0,0);//translate landscape back
	land();
	glFlush();
for(j=0;j<10000;j++)
	for(k=0;k<3000;k++)
	{}
glClear(GL_COLOR_BUFFER_BIT);
	z=z+sp;//speed the bus shld move sp
glFlush();
}glTranslated(-5,0,0);//translate landscape a step back after one loop
z=-1;//puts the bus in the beginig of the screen
}

glFlush();
	}
	else if(v==2)
	{
		
		glClear(GL_COLOR_BUFFER_BIT);
int x=1,j,k,m;float fm,z=1;sp=sp/100;
fm=100/sp;//till where the bus shld go fm distance
bus();
glTranslated(-40,0,0);
for(m=0;m<loop;m++)//loops bus shld
	{
		for(x=0;x<fm;x++)
{
glTranslated(-z+100,0,0);bus();//translate bus forward
if(n==1)//rotation wheel
{
	n=2;
	wheel1();

}
else
{n=1;
wheel2();
}glFlush();
glTranslated(z-100,0,0);//translate landscape back
	land();
	glFlush();
for(j=0;j<10000;j++)
	for(k=0;k<3000;k++)
	{}
glClear(GL_COLOR_BUFFER_BIT);
	z=z+sp;//speed the bus shld move sp
glFlush();
}
z=1;//puts the bus in the beginig of


}glFlush();
}glClear(GL_COLOR_BUFFER_BIT);
}

void mouse(int btn, int state, int x, int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN){v=2;}

	if(btn==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN) {v=1;}

	display();
}


void myinit()
{
glClearColor(1,1,1,0);


gluOrtho2D(-10,90,-10,90);

}

void main(int argc,char**argv)
{
      glutInit(&argc,argv);
	  printf("enter the speed of bus loop y\n");
	  scanf("%f%d",&sp,&loop);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(10000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("bus");
	glutMouseFunc(mouse);
	glutDisplayFunc(display);
	
	
	myinit();
	glutMainLoop();
}