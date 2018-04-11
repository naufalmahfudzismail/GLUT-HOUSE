#include <GL/glut.h>
#include <math.h>

const double PI = 3.1415926553589793;

void rounded(int jari2, int jumlah_titik, int x_tengah, int y_tengah)
{
	for (int i = 0; i <= 180; i++)
	{
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + jari2 * cos(sudut);
		float y = y_tengah + jari2 * sin(sudut);

		glVertex2f(x, y);
	}

}


void genteng() {
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(97.0, 140);
	glVertex2f(90.0, 110.0);
	glVertex2f(180.0, 110.0);
	glColor3f(1.000, 0.973, 0.863);
	glVertex2f(173.0, 140);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(87, 114);
	glVertex2f(87, 110);
	glVertex2f(183, 110);
	glVertex2f(183, 114);

	glEnd();
}

void jendela(int jari2, int jumlah_titik, int x_tengah, int y_tengah) {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (int i = 0; i <= 360; i++)
	{
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + jari2 * cos(sudut);
		float y = y_tengah + jari2 * sin(sudut);

		if (i % 2 == 0)
		{
			glColor3f(0.8f, 0.8f, 1.0f);
		}

		else
		{
			glColor3f(1.0f, 1.0f, 1.0f);
		}
		glVertex2f(x, y);

	}
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x_tengah, y_tengah + jari2);
	glVertex2f(x_tengah, y_tengah - jari2);
	glVertex2f(x_tengah + jari2, y_tengah);
	glVertex2f(x_tengah - jari2, y_tengah);
	glEnd();

}


void pintu() {

	// background pintu bulet kotak
	glBegin(GL_POLYGON);
	glColor3f(0.737, 0.561, 0.561);

	glVertex2f(120.0, 70.0);
	rounded(15, 360, 135, 70);
	glVertex2f(150.0, 70.0);

	glVertex2f(150.0, 30.0);
	glVertex2f(120.0, 30.0);

	glEnd();

	// background pintu utama
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(127.0, 28.0);

	glVertex2f(127.0, 60.0);

	glVertex2f(143.0, 60.0);

	glVertex2f(143.0, 28.0);
	glEnd();

	//  tutup pintu kanan
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(143.0, 28.0);

	glVertex2f(143.0, 60.0);

	glVertex2f(153.0, 53.0);

	glVertex2f(153.0, 23.0);
	glEnd();
	//  tutup pintu kiri
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(127.0, 28.0);

	glVertex2f(127.0, 60.0);

	glVertex2f(117.0, 53.0);

	glVertex2f(117.0, 23.0);
	glEnd();
}

void corong()
{
	glBegin(GL_POLYGON);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(155, 150);
	glVertex2f(155, 125);
	glVertex2f(162, 120);
	glVertex2f(162, 148);

	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(162, 148);
	glVertex2f(162, 120);
	glVertex2f(169, 125);
	glVertex2f(169, 150);


	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(162, 145);

	glEnd();

}

void RumahBesar()
{
	//body rumah
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.8);
	glVertex2f(55.0, 30.0);
	glVertex2f(145.0, 30.0);
	glColor3f(1.000, 0.973, 0.863);
	glVertex2f(145.0, 160.0);
	glColor3f(0.8, 0.8, 0.8);
	glVertex2f(55.0, 160.0);

	glEnd();

	// corak tembok
	glBegin(GL_QUADS);
	for (int i = 0; i < 130; i = i + 7)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j % 2 == 0)
				{
					glColor3f(0.85, 0.85, 0.85);
				}
				else
				{
					glColor3f(0.15, 0.15, 0.15);
				}

				glVertex2f(55 + j * 10, 160 - i);
				glVertex2f(55 + j * 10, 155 - i);
				glVertex2f(65 + j * 10, 155 - i);
				glVertex2f(65 + j * 10, 160 - i);

			}
		}

		else
		{
			glColor3f(0.2, 0.2, 0.2);
			glVertex2f(55, 160 - i);
			glVertex2f(55, 155 - i);
			glVertex2f(60, 155 - i);
			glVertex2f(60, 160 - i);

			for (int j = 0; j < 4; j++)
			{
				if (j % 2 == 0)
				{
					glColor3f(0.55, 0.55, 0.55);


				}
				else
				{
					glColor3f(0.35, 0.35, 0.35);

				}

				glVertex2f(60 + j * 20, 160 - i);
				glVertex2f(60 + j * 20, 155 - i);
				glVertex2f(80 + j * 20, 155 - i);
				glVertex2f(80 + j * 20, 160 - i);

			}

			glColor3f(0.5, 0.5, 0.5);
			glVertex2f(140, 160 - i);
			glVertex2f(140, 155 - i);
			glVertex2f(145, 155 - i);
			glVertex2f(145, 160 - i);
		}
	}
	glEnd();

	//atap

	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(62.0, 190);
	glVertex2f(55.0, 155.0);

	glVertex2f(145.0, 155.0);
	glColor3f(1.000, 0.973, 0.863);
	glVertex2f(138.0, 190);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(52, 159);
	glVertex2f(52, 155);
	glVertex2f(148, 155);
	glVertex2f(148, 159);

	glEnd();

	//corong

	glBegin(GL_POLYGON);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(115, 200);
	glVertex2f(115, 175);
	glVertex2f(122, 170);
	glVertex2f(122, 198);

	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(122, 198);
	glVertex2f(122, 170);
	glVertex2f(129, 175);
	glVertex2f(129, 200);


	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(122, 195);

	glEnd();



}


void RumahKecil() {

	// backgroud tembok
	glBegin(GL_QUADS);

	glColor3f(0.7, 0.7, 0.7);
	glVertex2f(90.0, 30.0);
	glVertex2f(180.0, 30.0);
	glVertex2f(180.0, 110.0);
	glVertex2f(90.0, 110.0);

	glEnd();

	// corak tembok
	glBegin(GL_QUADS);
	for (int i = 0; i < 80; i = i + 7)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j % 2 == 0)
				{
					glColor3f(0.8, 0.8, 0.8);
				}
				else
				{
					glColor3f(0.0, 0.0, 0.0);
				}

				glVertex2f(90 + j * 10, 110 - i);
				glVertex2f(90 + j * 10, 105 - i);
				glVertex2f(100 + j * 10, 105 - i);
				glVertex2f(100 + j * 10, 110 - i);

			}
		}

		else
		{
			glColor3f(0.2, 0.2, 0.2);
			glVertex2f(90, 110 - i);
			glVertex2f(90, 105 - i);
			glVertex2f(95, 105 - i);
			glVertex2f(95, 110 - i);

			for (int j = 0; j < 4; j++)
			{
				if (j % 2 == 0)
				{
					glColor3f(0.5, 0.5, 0.5);


				}
				else
				{
					glColor3f(0.2, 0.2, 0.2);

				}

				glVertex2f(95 + j * 20, 110 - i);
				glVertex2f(95 + j * 20, 105 - i);
				glVertex2f(115 + j * 20, 105 - i);
				glVertex2f(115 + j * 20, 110 - i);

			}

			glColor3f(0.5, 0.5, 0.5);
			glVertex2f(175, 110 - i);
			glVertex2f(175, 105 - i);
			glVertex2f(180, 105 - i);
			glVertex2f(180, 110 - i);
		}
	}
	glEnd();

	genteng();
	corong();
	pintu();
	jendela(10, 360, 105, 80);
	jendela(10, 360, 165, 80);

}


void garasi()
{// atap garasi

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(32, 98);
	glVertex2f(22, 70);
	glVertex2f(90, 70);
	glVertex2f(90, 98);
	glEnd();

	//body garasi
	glBegin(GL_POLYGON);
	glColor3f(0.961, 0.871, 0.702);
	glVertex2f(90, 70);
	glVertex2f(90, 28);
	glVertex2f(20, 28);
	glVertex2f(20, 70);
	glVertex2f(55, 95);
	glEnd();


	//segitiga garasi
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(55, 97);
	glVertex2f(93, 70);
	glVertex2f(91, 68);
	glVertex2f(55, 93);
	glVertex2f(19, 67);
	glVertex2f(17, 70);
	glEnd();

	//pintu garasi
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2f(80, 28);
	glVertex2f(30, 28);
	glVertex2f(30, 50);
	rounded(25, 360, 55, 50);
	glEnd();

	//pintu garasi
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(70, 28);
	glVertex2f(40, 28);
	glVertex2f(40, 60);
	glVertex2f(70, 60);
	glEnd();

	// corak pintu garasi

	glBegin(GL_QUADS);

	for (int i = 0; i < 15; i++)
	{
		if (i % 2 == 0)
		{
			glColor3f(0.1, 0.1, 0.1);
		}

		else
		{

			glColor3f(1.0, 1.0, 1.0);
		}

		i = i * 2;
		glVertex2f(40, 58 - i);
		glVertex2f(70, 58 - i);
		glVertex2f(70, 60 - i);
		glVertex2f(40, 60 - i);

		i = i / 2;
	}

	glEnd();
}

void halaman()
{
	//pager kanan
	glBegin(GL_POLYGON);
	glColor3f(0.647, 0.165, 0.165);
	glVertex2f(5, 50);
	glVertex2f(20, 60);
	glVertex2f(20, 40);
	glVertex2f(5, 20);
	glEnd();



	//pager kiri
	glBegin(GL_POLYGON);
	glColor3f(0.647, 0.165, 0.165);
	glVertex2f(180, 60);
	glVertex2f(195, 50);
	glVertex2f(195, 20);
	glVertex2f(180, 40);
	glEnd();

	//tanah
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.5);
	glVertex2f(0, 20);
	glVertex2f(20, 40);
	glVertex2f(180, 40);
	glVertex2f(200, 20);
	glVertex2f(200, 0);
	glVertex2f(0, 0);
	glEnd();

	//jalanan
	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.4);
	glVertex2f(127, 30);
	glVertex2f(143, 30);
	glVertex2f(150, 0);
	glVertex2f(120, 0);
	glEnd();
}


void langit()
{
	glBegin(GL_QUADS);
	glColor3f(1.000, 0.973, 0.863);
	glVertex2f(200, 200);
	glColor3f(0.529, 0.808, 0.980);
	glVertex2f(-200, 200);

	glVertex2f(-200, -200);
	glVertex2f(200, -200);
	glEnd();
}

void matahari(int jari2, int jumlah_titik, int x_tengah, int y_tengah)
{
	glBegin(GL_POLYGON);

	glColor3f(1.0, 1.0, 0.0);
	for (int i = 0; i <= 90; i++)
	{
		float sudut = i * (2 * PI / jumlah_titik);
		float x = x_tengah + jari2 * cos(sudut);
		float y = y_tengah + jari2 * sin(sudut);

		glVertex2f(x, y);

	}
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(x_tengah, y_tengah);

	glEnd();

}

void bangunRumah()
{
	glClear(GL_COLOR_BUFFER_BIT);
	langit();
	matahari(-20, 360, 200, 200);
	halaman();
	RumahBesar();
	RumahKecil();
	garasi();
	glFlush();
}

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}
int main(int argc, char** argv)
{
	glEnable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(350, 0);
	glutInitWindowSize(1000, 700);
	glutCreateWindow("UTS RUMAH");
	init();
	glutDisplayFunc(bangunRumah);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 200.0, 0, 200.0);
	glutMainLoop();
	return 0;
}