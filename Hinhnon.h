#pragma once
#include "Ecllipse.h"

void Ve4diemn(int xc, int yc, int x, int y, int color, int docao)//ve 4 diem doi xung
{
	putpixel(xc + x, yc + y, color);
	putpixel(xc - x, yc + y, color);
	putpixel(xc + x, yc - y, color);
	putpixel(xc - x, yc - y, color);
	//setcolor(5);
	toado2D A, B[2];
	//A.x = 747;
	//A.y = 297 - 200;
	A.x = xc;
	A.y = yc-docao;
	A = ratoadouser(A);
	//A.y = A.y - docao;
	B[0].x = xc + x;
	B[0].y = yc - y;
	B[1].x = xc - x;
	B[1].y = yc - y;
	B[0] = ratoadouser(B[0]);
	B[1] = ratoadouser(B[1]);
	LineDDA2(A, B[0], 5);
	LineDDA2(A, B[1], 5);
	//LineDDA(747, 297 - 200, xc + x, yc - y);
	//LineDDA(747, 297 - 200, xc - x, yc - y);

}
void Elipsen(toado2D A, toado2D B, int color, int docao)// ve elipse bang bresenham
{
	int xc, yc, a, b;
	xc = A.x;
	yc = A.y;
	a = B.x;
	b = B.y;
	long x, y, dx, dy, rx, ry, p; // d= delta
	rx = a * a; ry = b * b;
	x = 0; y = b;
	dx = 0; dy = (rx << 1) * y;
	Ve4diemn(xc, yc, x, y, color,docao);
	p = round(ry - (rx * b) + (0.25 * rx));
	while (dx < dy)
	{
		x++;
		dx += ry << 1;
		if (p < 0)    p += dx + ry;
		else
		{
			y--;
			dy -= rx << 1;
			p += ry + dx - dy;
		}
		Ve4diemn(xc, yc, x, y, color, docao);
	}
	p = round(ry * (x + 0.5)*(x + 0.5) + rx * (y - 1)*(y - 1) - rx * ry);
	while (y>0)
	{
		y--;
		dy -= rx << 1;
		if (p>0)        p += rx - dy;
		else
		{
			x++;
			dx += ry << 1;
			p += dx + rx - dy;
		}
		Ve4diemn(xc, yc, x, y, color, docao);
	}
}

void vehinhnon()
{
	toado2D A[6];
	A[1].x = 0;// tam eclip x
	A[1].y = 0;// tam eclip y
	A[2].x =100;// chieu ngang eclip
	A[2].y = 70;// chieu rong
	A[3].y = 200;// chieu cao cua no

	char a[100];
	int x = 300;
	int y = 598;
	strcpy(a, "Moi ban nhap chieu dai(oy): ");
	textWrite(x, y, a, 7);
	char d1[30];
	textReadnumber(x, y, d1);
	A[2].x = atoi(d1);
	strcpy(a, "");
	textWriteln(x, y, a);
	strcpy(a, "Moi ban nhap chieu rong(oz): ");
	textWrite(x, y, a, 7);
	textReadnumber(x, y, d1);
	A[2].y = atoi(d1);
	strcpy(a, "");
	textWriteln(x, y, a);
	strcpy(a, "Moi ban nhap chieu cao(ox): ");
	textWrite(x, y, a, 7);
	textReadnumber(x, y, d1);
	A[3].y = atoi(d1);
	Elipsen(ratoadomay(A[1]), A[2], 0,A[3].y);//circle(100,100,50);

	LineDDAan(ratoadomay(A[1]).x, ratoadomay(A[1]).y, ratoadomay(A[1]).x + A[2].x, ratoadomay(A[1]).y);// tung
	LineDDAan(ratoadomay(A[1]).x, ratoadomay(A[1]).y, ratoadomay(A[1]).x, ratoadomay(A[1]).y - A[3].y);//cao


	setfillstyle(SOLID_FILL, 5);
	setcolor(15);
	setbkcolor(10);
	Elipse(ratoadomay(A[1]), A[2], 0);//circle(100,100,50);
	floodfill(748, 298, BLACK);

	trangthai();
	toado2D F[10];
	F[1] = A[1];//A
	F[2].x = A[1].x + A[2].x;//B
	F[2].y = A[1].y;
	F[3].x = A[1].x - A[2].x;//C
	F[3].y = A[1].y;
	F[4].x = A[1].x;//D
	F[4].y = A[1].y + A[3].y;
	hientoado(4, F, 1);
	char M[10];
	M[1] = 0;
	settextstyle(8, 0, 1);
	F[2].x = A[1].x + A[2].x + 10;//B
	F[2].y = A[1].y;
	F[3].x = A[1].x - A[2].x - 15;//C
	F[3].y = A[1].y;
	F[4].x = A[1].x - 15;//D
	F[4].y = A[1].y + A[3].y + 15;
	for (int i = 0; i < 4; i++)
	{
		M[0] = TD[i];
		//cout << A[i+1].x<< A[i + 1].y << endl;
		hienchu(F[i + 1], M);
	}


	/*setfillstyle(SOLID_FILL, 5);
	LineDDA(ratoadomay(A[1]).x + A[2].x, ratoadomay(A[1]).y, ratoadomay(A[1]).x, ratoadomay(A[1]).y - A[3].y);//thanh noi ben phai
	LineDDA(ratoadomay(A[1]).x - A[2].x, ratoadomay(A[1]).y, ratoadomay(A[1]).x, ratoadomay(A[1]).y - A[3].y);// thanh noi ben trai
	floodfill(749, ratoadomay(A[1]).y-A[3].y+10, BLACK);*/
}
