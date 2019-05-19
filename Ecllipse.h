#pragma once
#include "Draw Circle-MidPoint.h"
//int c = 0;
void Ve4diem (int xc, int yc, int x, int y, int color)//ve 4 diem doi xung
{
	putpixel(xc + x, yc + y, color);
	putpixel(xc - x, yc + y, color);
	putpixel(xc + x, yc - y, color);
	putpixel(xc - x, yc - y, color);
	
}
void Elipse(toado2D A,toado2D B, int color)// ve elipse bang bresenham
{
	int xc, yc, a, b;
	xc= A.x;
	yc= A.y;
	a= B.x;
	b= B.y;
	long x, y, dx, dy, rx, ry, p; // d= delta
	rx = a * a; ry = b * b;
	x = 0; y = b;
	dx = 0; dy = (rx << 1) * y;
	Ve4diem(xc, yc, x, y,color);
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
		Ve4diem(xc, yc, x, y, color);
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
		Ve4diem(xc, yc, x, y, color);
	}
}
void doixungel(toado2D A[])
{
	char a[100];
	int c;
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon truc toa do ban muon lay doi xung Ox/Oy/O [1/2/bat ky]:   ");
	textWrite(x4, y4, a, 7);
	char dodai[30];
	textReadnumber(x4, y4, dodai);
	c = atoi(dodai);
	if (c == 1)
	{
		Elipse(doixungquaox(A[1], 0), A[2], 0);
	}
	else if (c == 2)
	{
		Elipse(doixungquaoy(A[1], 0), A[2], 0);
	}
	else
	{
		Elipse(doixungquatam(A[1], 0), A[2], 0);
	}
}
void phongtoel(toado2D A[])
{
	toado2D C[4];
	int tyLe = 2;
	C[2].x = A[2].x * tyLe;
	C[2].y = A[2].y * tyLe;
	float deltaX = A[1].x *(tyLe - 0.8);
	float deltaY = A[1].y *(tyLe - 0.8);
	C[1] = phongto(A[1], tyLe, deltaX, deltaY);
	Elipse(C[1], C[2], 0);

}
void biendoihinhEcllipse(toado2D A[])
{
	vehinhchunhatvien(5, 55, 190, 595, 7);

	vehinhchunhatvien(10, 60, 90, 140, 9);
	char a[15] = "Tinh";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(20, 80, a);
	strcpy(a, "Tien");
	outtextxy(20, 100, a);
	vehinhchunhatvien(100, 60, 180, 140, 9);
	strcpy(a, "Doi");
	outtextxy(110, 80, a);
	strcpy(a, "Xung");
	outtextxy(110, 100, a);
	vehinhchunhatvien(10, 145, 90, 225, 9);
	strcpy(a, "Ti");
	outtextxy(20, 165, a);
	strcpy(a, "Le");
	outtextxy(20, 185, a);
	vehinhchunhatvien(100, 145, 180, 225, 9);
	strcpy(a, "Quay");
	outtextxy(110, 185, a);
	vehinhchunhatvien(10, 570, 185, 595, 9);
	strcpy(a, "<<Tro lai");
	outtextxy(50, 575, a);

	int stop = 1;
	while (stop != 0)
	{
		delay(0.0001);
		int x1, y1;

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x1, y1);
			if (x1 >= 10 && x1 <= 90 && y1 >= 60 && y1 <= 140)//10,60,90,140,9 duong thang
			{

				trangthai();
				Elipse(Tinhtienht(A[1], 0),A[2], 0);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixungel(A);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				trangthai();
				phongtoel(A);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{

				A[1] = ratoadouser(A[1]);
				float PI = 3.14159;;
				float goc = 0;
				for (float goc = 20; goc < 360; goc += 20) {
					xoayht1(A[1], 0, goc * PI / 180);
					Elipse(xoayht1(A[1], 0, goc * PI / 180), A[2], 0);
					Sleep(500);
					Elipse(xoayht1(A[1], 0, goc * PI / 180), A[2], 8);
				}
				A[1] = ratoadomay(A[1]);
				menucacphep();
				//menucacphep();
			}
			else if (x1 >= 10 && x1 <= 185 && y1 >= 570 && y1 <= 595)//10, 570, 185, 595, 9
			{
				setfillstyle(SOLID_FILL, WHITE);//5,55,190,595,7
				setcolor(WHITE);
				rectangle(5, 55, 190, 595);
				setbkcolor(WHITE);
				bar(5, 55, 190, 595);
				stop = 0;
				break;
				//tro lai 
			}
			


		}

		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x1, y1);



		}
		if (ismouseclick(WM_LBUTTONDBLCLK))
		{
			getmouseclick(WM_LBUTTONDBLCLK, x1, y1);

		}

	}

}

void hinhEcllipse() {
	char a[100];
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon toa do: ");
	textWrite(x4, y4, a, 7);
	int x = 300;
	int y = 598;
	toado2D A[3];
	int stop = 0;
	int x1, y1;
	while (stop == 0)
	{
		delay(0.0001);

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, A[1].x, A[1].y);
			if (A[1].x >= 100 && A[1].x <= 180 && A[1].y >= 600 && A[1].y <= 680)//100, 600, 180, 680, 9
			{
				closegraph();
				break;
			}
			else if (A[1].x >= 10 && A[1].x <= 90 && A[1].y >= 600 && A[1].y <= 680)//10, 600, 90, 680, 9
			{

				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}
			else {
				trangthai();
				setbkcolor(7);
				setcolor(7);
				outtextxy(300, 598, a);
				putpixel(A[1].x, A[1].y, 0);
				//textWrite(x, y, a, 0);
				char tem[40];
				_itoa(A[1].x, tem, 10);
				strcpy(a, "Toa do tam cua ban la: ");
				strcat(a, tem);
				strcat(a, " ; ");
				_itoa(A[1].y, tem, 10);
				strcat(a, tem);
				textWrite(x, y, a, 7);
				strcpy(a, "");
				textWriteln(x, y, a);
				strcpy(a, "Moi ban hay nhap do rong ecllipse: ");
				textWrite(x, y, a, 7);
				char bk[30];
				textReadnumber(x, y, bk);
				A[2].x = atoi(bk);
				strcpy(bk, "");
				textWriteln(x, y, bk);
				strcpy(a, "Moi ban hay nhap do cao ecllipse: ");
				textWrite(x, y, a, 7);
				textReadnumber(x, y, bk);
				A[2].y = atoi(bk);
				Elipse(A[1],A[2], BLACK);
				biendoihinhEcllipse(A);
				trangthai();
				break;


			}
			
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x1, y1);
			toado(x1, y1, x4, y4);

		}

	}

}