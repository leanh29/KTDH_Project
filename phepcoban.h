#pragma once
#pragma once
#include "mylab.h"
#include <math.h>
//#include <stdio.h>


void LineDDAhv(int x1, int y1, int x2, int y2) { //vehcn

	float x = x1;
	float y = y1;
	float m = abs(float(x2 - x1) / (y2 - y1));
	putpixel(x, round(y), BLACK);
	if (x1 < x2)
	{
		if (m < 1)
		{
			if (y2 > y1)
			{
				m = float(x2 - x1) / (y2 - y1);
				for (int i = y1; i<y2; i++)
				{
					y++;
					x += m;
					putpixel(round(x), y, BLACK);
				}
			}
			else
			{
				m = float(x2 - x1) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x += m;
					putpixel(round(x), y, BLACK);
				}
			}
		}
		else
		{
			m = float(y2 - y1) / (x2 - x1);
			for (int i = x1; i<x2; i++)
			{
				x++;
				y += m;
				putpixel(x, round(y), BLACK);
			}
		}

	}
	else if (x1 > x2) {
		if (m < 1)
		{
			if (y2 > y1)
			{
				for (int i = y1; i<y2; i++)
				{
					y++;
					x -= m;
					cout << x << endl;
					putpixel(round(x), y, BLACK);
				}
			}
			else
			{
				m = float(x1 - x2) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x -= m;
					putpixel(round(x), y, BLACK);
				}

			}
		}
		else
		{
			m = float(y1 - y2) / (x1 - x2);
			for (int i = x2; i<x1; i++)
			{
				x--;
				y -= m;
				putpixel(x, round(y), BLACK);
			}
		}
	}
	else if (x1 == x2)
	{
		if (y2 > y1)
		{
			m = float(x2 - x1) / (y2 - y1);
			putpixel(y, round(x), BLACK);
			for (int i = y1; i < y2; i++)
			{
				y++;
				x += m;
				putpixel(round(x), y, BLACK);
			}
		}
		else if (y2<y1)
		{
			m = float(x1 - x2) / (y1 - y2);
			putpixel(y, round(x), BLACK);
			for (int i = y2; i < y1; i++)
			{
				y--;
				x += m;
				putpixel(round(x), y, BLACK);
			}
		}
	}

}
void biendoihv(toado2D A[])
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
	vehinhchunhatvien(10, 230, 90, 310, 4);
	strcpy(a, "CLEAR");
	outtextxy(20, 250, a);
	vehinhchunhatvien(100, 230, 180, 310, 9);
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
				vehinhchunhatvien(10, 230, 90, 310, 4);
				strcpy(a, "CLEAR");
				outtextxy(20, 250, a);
				vehinhchunhatvien(100, 230, 180, 310, 9);
				vehinhchunhatvien(10, 570, 185, 595, 9);
				strcpy(a, "<<Tro lai");
				outtextxy(50, 575, a);
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
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
				vehinhchunhatvien(10, 230, 90, 310, 4);
				strcpy(a, "CLEAR");
				outtextxy(20, 250, a);
				vehinhchunhatvien(100, 230, 180, 310, 9);
				vehinhchunhatvien(10, 570, 185, 595, 9);
				strcpy(a, "<<Tro lai");
				outtextxy(50, 575, a);
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
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
				vehinhchunhatvien(10, 230, 90, 310, 4);
				strcpy(a, "CLEAR");
				outtextxy(20, 250, a);
				vehinhchunhatvien(100, 230, 180, 310, 9);
				vehinhchunhatvien(10, 570, 185, 595, 9);
				strcpy(a, "<<Tro lai");
				outtextxy(50, 575, a);
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				//hinh tru
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
				vehinhchunhatvien(10, 230, 90, 310, 4);
				strcpy(a, "CLEAR");
				outtextxy(20, 250, a);
				vehinhchunhatvien(100, 230, 180, 310, 9);
				vehinhchunhatvien(10, 570, 185, 595, 9);
				strcpy(a, "<<Tro lai");
				outtextxy(50, 575, a);
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
			else if (x1 >= 10 && x1 <= 90 && y1 >= 230 && y1 <= 310)//10, 230, 90, 310
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				line(195, 297, 1298, 297);//195,0,1298,594,8 747
				line(747, 0, 747, 594);
				//clear

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
void nhanMaTran2D(float toaDoThuan[3], float maTran[3][3], float toaDoAfter[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			toaDoAfter[i] = toaDoAfter[i] + toaDoThuan[j] * maTran[j][i];
		}
	}

}
void tinhTien2D(int& x, int& y, float deltaX, float deltaY) {
	float maTran_tinhTien[3][3] = { { 1, 0, 0 },
	{ 0, 1, 0 },
	{ deltaX, deltaY, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_tinhTien, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void doiXung2D_Ox(int& x, int& y) {
	float maTran_doiXungOx[3][3] = { { 1, 0, 0 },
	{ 0, -1, 0 },
	{ 0, 0, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOx, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void doiXung2D_Oy(int& x, int& y) {
	float maTran_doiXungOy[3][3] = { { -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOy, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void doiXung2D_tamO(int& x, int& y) {
	float maTran_doiXungOy[3][3] = { { -1, 0, 0 },
	{ 0, -1, 0 },
	{ 0, 0, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOy, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void tyLe2D(int& x, int& y, int tyLe) {
	float maTran_tyLe[3][3] = { { tyLe, 0, 0 },
	{ 0, tyLe, 0 },
	{ 0, 0, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_tyLe, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void xoay2D(int& x, int& y, float gocRadian) {
	float maTran_xoay[3][3] = { { cos(gocRadian), sin(gocRadian), 0 },
	{ -sin(gocRadian), cos(gocRadian), 0 },
	{ 0, 0, 1 }
	};
	float toaDoThuan[3] = { x, y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_xoay, toaDoAfter);
	x = toaDoAfter[0];
	y = toaDoAfter[1];
}
void vehv() {
	char a[100];
	strcpy(a, "Moi ban 1 diem de lam vi tri hinh vuong");
	outtextxy(300, 598, a);
	int x = 300;
	int y = 598;
	int stop = 0;
	toado2D A[10];
	while (stop == 0)
	{
		delay(0.0001);


		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, A[1].x, A[1].y);
			trangthai();
			setbkcolor(7);
			setcolor(7);
			outtextxy(300, 598, a);
			putpixel(A[1].x, A[1].y, BLACK);
			//textWrite(x, y, a, 0);
			char tem[40];
			_itoa(A[1].x, tem, 10);
			strcpy(a, "Toa do hinh vuong la: ");
			strcat(a, tem);
			strcat(a, " ; ");
			_itoa(A[1].y, tem, 10);
			strcat(a, tem);
			textWrite(x, y, a, 7);
			int c;
			strcpy(a, "");
			textWriteln(x, y, a);
			strcpy(a, "Moi ban hay nhap do dai canh hinh vuong: ");
			textWrite(x, y, a, 7);
			char dodai[30];
			textReadnumber(x, y, dodai);
			c = atoi(dodai);
			//cout << cd << "  " << cr;
			A[2].x = A[1].x + c; A[2].y = A[1].y;
			putpixel(A[2].x, A[2].y, BLACK);
			A[3].x = A[1].x + c; A[3].y = A[1].y + c;
			putpixel(A[3].x, A[3].y, BLACK);
			A[4].x = A[1].x; A[4].y = A[1].y + c;
			putpixel(A[4].x, A[4].y, BLACK);
			LineDDAhv(A[1].x, A[1].y, A[2].x, A[2].y);
			LineDDAhv(A[2].x, A[2].y, A[3].x, A[3].y);
			LineDDAhv(A[3].x, A[3].y, A[4].x, A[4].y);
			LineDDAhv(A[1].x, A[1].y, A[4].x, A[4].y);



			///////////////////////////////////////////////////////////////////////////////////////////
			float deltaX = -200;
			float deltaY = -100;
			toado2D hvAfter[10];
			hvAfter[1].x = A[1].x;
			hvAfter[1].y = A[1].y;
			hvAfter[2].x = A[2].x;
			hvAfter[2].y = A[2].y;
			hvAfter[3].x = A[3].x;
			hvAfter[3].y = A[3].y;
			hvAfter[4].x = A[4].x;
			hvAfter[4].y = A[4].y;
			tinhTien2D(hvAfter[1].x, hvAfter[1].y, deltaX, deltaY);
			tinhTien2D(hvAfter[2].x, hvAfter[2].y, deltaX, deltaY);
			tinhTien2D(hvAfter[3].x, hvAfter[3].y, deltaX, deltaY);
			tinhTien2D(hvAfter[4].x, hvAfter[4].y, deltaX, deltaY);

			LineDDAhv(hvAfter[1].x, hvAfter[1].y, hvAfter[2].x, hvAfter[2].y);
			LineDDAhv(hvAfter[2].x, hvAfter[2].y, hvAfter[3].x, hvAfter[3].y);
			LineDDAhv(hvAfter[3].x, hvAfter[3].y, hvAfter[4].x, hvAfter[4].y);
			LineDDAhv(hvAfter[4].x, hvAfter[4].y, hvAfter[1].x, hvAfter[1].y);
			//////////////////////

			float plusX = 747;
			float plusY = 297;
			hvAfter[1].x = A[1].x;
			hvAfter[1].y = plusY - A[1].y;
			hvAfter[2].x = A[2].x;
			hvAfter[2].y = plusY - A[2].y;
			hvAfter[3].x = A[3].x;
			hvAfter[3].y = plusY - A[3].y;
			hvAfter[4].x = A[4].x;
			hvAfter[4].y = plusY - A[4].y;
			doiXung2D_Ox(hvAfter[1].x, hvAfter[1].y);
			doiXung2D_Ox(hvAfter[2].x, hvAfter[2].y);
			doiXung2D_Ox(hvAfter[3].x, hvAfter[3].y);
			doiXung2D_Ox(hvAfter[4].x, hvAfter[4].y);

			LineDDAhv(hvAfter[1].x, plusY - hvAfter[1].y, hvAfter[2].x, plusY - hvAfter[2].y);
			LineDDAhv(hvAfter[2].x, plusY - hvAfter[2].y, hvAfter[3].x, plusY - hvAfter[3].y);
			LineDDAhv(hvAfter[3].x, plusY - hvAfter[3].y, hvAfter[4].x, plusY - hvAfter[4].y);
			LineDDAhv(hvAfter[4].x, plusY - hvAfter[4].y, hvAfter[1].x, plusY - hvAfter[1].y);
			//////////////////////


			hvAfter[1].x = plusX - A[1].x;
			hvAfter[1].y = A[1].y;
			hvAfter[2].x = plusX - A[2].x;
			hvAfter[2].y = A[2].y;
			hvAfter[3].x = plusX - A[3].x;
			hvAfter[3].y = A[3].y;
			hvAfter[4].x = plusX - A[4].x;
			hvAfter[4].y = A[4].y;
			doiXung2D_Oy(hvAfter[1].x, hvAfter[1].y);
			doiXung2D_Oy(hvAfter[2].x, hvAfter[2].y);
			doiXung2D_Oy(hvAfter[3].x, hvAfter[3].y);
			doiXung2D_Oy(hvAfter[4].x, hvAfter[4].y);

			LineDDAhv(plusX - hvAfter[1].x, hvAfter[1].y, plusX - hvAfter[2].x, hvAfter[2].y);
			LineDDAhv(plusX - hvAfter[2].x, hvAfter[2].y, plusX - hvAfter[3].x, hvAfter[3].y);
			LineDDAhv(plusX - hvAfter[3].x, hvAfter[3].y, plusX - hvAfter[4].x, hvAfter[4].y);
			LineDDAhv(plusX - hvAfter[4].x, hvAfter[4].y, plusX - hvAfter[1].x, hvAfter[1].y);
			///////////////////////

			hvAfter[1].x = plusX - A[1].x;
			hvAfter[1].y = plusY - A[1].y;
			hvAfter[2].x = plusX - A[2].x;
			hvAfter[2].y = plusY - A[2].y;
			hvAfter[3].x = plusX - A[3].x;
			hvAfter[3].y = plusY - A[3].y;
			hvAfter[4].x = plusX - A[4].x;
			hvAfter[4].y = plusY - A[4].y;
			doiXung2D_tamO(hvAfter[1].x, hvAfter[1].y);
			doiXung2D_tamO(hvAfter[2].x, hvAfter[2].y);
			doiXung2D_tamO(hvAfter[3].x, hvAfter[3].y);
			doiXung2D_tamO(hvAfter[4].x, hvAfter[4].y);

			LineDDAhv(plusX - hvAfter[1].x, plusY - hvAfter[1].y, plusX - hvAfter[2].x, plusY - hvAfter[2].y);
			LineDDAhv(plusX - hvAfter[2].x, plusY - hvAfter[2].y, plusX - hvAfter[3].x, plusY - hvAfter[3].y);
			LineDDAhv(plusX - hvAfter[3].x, plusY - hvAfter[3].y, plusX - hvAfter[4].x, plusY - hvAfter[4].y);
			LineDDAhv(plusX - hvAfter[4].x, plusY - hvAfter[4].y, plusX - hvAfter[1].x, plusY - hvAfter[1].y);
			////////////////

			int tyLe = 2;
			hvAfter[1].x = A[1].x - plusX;
			hvAfter[1].y = plusY - A[1].y;
			hvAfter[2].x = A[2].x - plusX;
			hvAfter[2].y = plusY - A[2].y;
			hvAfter[3].x = A[3].x - plusX;
			hvAfter[3].y = plusY - A[3].y;
			hvAfter[4].x = A[4].x - plusX;
			hvAfter[4].y = plusY - A[4].y;
			tyLe2D(hvAfter[1].x, hvAfter[1].y, tyLe);
			tyLe2D(hvAfter[2].x, hvAfter[2].y, tyLe);
			tyLe2D(hvAfter[3].x, hvAfter[3].y, tyLe);
			tyLe2D(hvAfter[4].x, hvAfter[4].y, tyLe);

			LineDDAhv(plusX + hvAfter[1].x, plusY - hvAfter[1].y, plusX + hvAfter[2].x, plusY - hvAfter[2].y);
			LineDDAhv(plusX + hvAfter[2].x, plusY - hvAfter[2].y, plusX + hvAfter[3].x, plusY - hvAfter[3].y);
			LineDDAhv(plusX + hvAfter[3].x, plusY - hvAfter[3].y, plusX + hvAfter[4].x, plusY - hvAfter[4].y);
			LineDDAhv(plusX + hvAfter[4].x, plusY - hvAfter[4].y, plusX + hvAfter[1].x, plusY - hvAfter[1].y);

			////////////////

			float PI = 3.14159;
			float goc = 45;
			float gocRadian = PI * goc / 180;
			hvAfter[1].x = A[1].x - plusX;
			hvAfter[1].y = plusY - A[1].y;
			hvAfter[2].x = A[2].x - plusX;
			hvAfter[2].y = plusY - A[2].y;
			hvAfter[3].x = A[3].x - plusX;
			hvAfter[3].y = plusY - A[3].y;
			hvAfter[4].x = A[4].x - plusX;
			hvAfter[4].y = plusY - A[4].y;

			xoay2D(hvAfter[1].x, hvAfter[1].y, gocRadian);
			xoay2D(hvAfter[2].x, hvAfter[2].y, gocRadian);
			xoay2D(hvAfter[3].x, hvAfter[3].y, gocRadian);
			xoay2D(hvAfter[4].x, hvAfter[4].y, gocRadian);

			LineDDAhv(plusX + hvAfter[1].x, plusY - hvAfter[1].y, plusX + hvAfter[2].x, plusY - hvAfter[2].y);
			LineDDAhv(plusX + hvAfter[2].x, plusY - hvAfter[2].y, plusX + hvAfter[3].x, plusY - hvAfter[3].y);
			LineDDAhv(plusX + hvAfter[3].x, plusY - hvAfter[3].y, plusX + hvAfter[4].x, plusY - hvAfter[4].y);
			LineDDAhv(plusX + hvAfter[4].x, plusY - hvAfter[4].y, plusX + hvAfter[1].x, plusY - hvAfter[1].y);
			////////////////

			/////////////////////////////////////////////////////////////////////////////////////////
			biendoihv(A);
			trangthai();
			break;
		}

	}
}
void vehv1() {
	/*
	char a[100];
	strcpy(a, "Moi ban 1 diem de lam vi tri hinh vuong");
	outtextxy(300, 598, a);
	int x = 300;
	int y = 598;
	int stop = 0;
	toado2D A[10];
	while (stop == 0)
	{
	delay(0.0001);


	if (ismouseclick(WM_LBUTTONDOWN))
	{
	getmouseclick(WM_LBUTTONDOWN, A[1].x, A[1].y);
	trangthai();
	setbkcolor(7);
	setcolor(7);
	outtextxy(300, 598, a);
	putpixel(A[1].x, A[1].y, BLACK);
	//textWrite(x, y, a, 0);
	char tem[40];
	_itoa(A[1].x, tem, 10);
	strcpy(a, "Toa do hinh vuong la: ");
	strcat(a, tem);
	strcat(a, " ; ");
	_itoa(A[1].y, tem, 10);
	strcat(a, tem);
	textWrite(x, y, a, 7);
	int c;
	strcpy(a, "");
	textWriteln(x, y, a);
	strcpy(a, "Moi ban hay nhap do dai canh hinh vuong: ");
	textWrite(x, y, a, 7);
	char dodai[30];
	textReadnumber(x, y, dodai);
	c = atoi(dodai);
	//cout << cd << "  " << cr;
	A[2].x = A[1].x + c; A[2].y = A[1].y;
	putpixel(A[2].x, A[2].y, BLACK);
	A[3].x = A[1].x + c; A[3].y = A[1].y + c;
	putpixel(A[3].x, A[3].y, BLACK);
	A[4].x = A[1].x; A[4].y = A[1].y + c;
	putpixel(A[4].x, A[4].y, BLACK);
	LineDDAhv(A[1].x, A[1].y, A[2].x, A[2].y);
	LineDDAhv(A[2].x, A[2].y, A[3].x, A[3].y);
	LineDDAhv(A[3].x, A[3].y, A[4].x, A[4].y);
	LineDDAhv(A[1].x, A[1].y, A[4].x, A[4].y);
	biendoihv(A);
	trangthai();
	break;

	}

	}
	*/
	float l = 100;
	float sqrt2per2 = sqrt(2) / 2;
	float plusX = 747;
	float plusY = 297;
	//			x1							y1								x2							y2
	LineDDAhv(0 + plusX, plusY - l, l + plusX, plusY - l);//A'B'
	LineDDAhv(l + plusX, plusY - l, l + plusX, 0 + plusY);//B'C'
	LineDDAhv(l + plusX, 0 + plusY, 0 + plusX, 0 + plusY);//C'D'
	LineDDAhv(0, 0, 0, l);//D'A'
	LineDDAhv(plusX - sqrt2per2 * l, plusY - (l - sqrt2per2 * l), plusX + l - sqrt2per2 * l, plusY - (l - sqrt2per2 * l));//AB
	LineDDAhv(plusX + l - sqrt2per2 * l, plusY - (l - sqrt2per2 * l), plusX + l - sqrt2per2 * l, plusY + sqrt2per2 * l);//BC
	LineDDAhv(plusX + l - sqrt2per2 * l, plusY + sqrt2per2 * l, plusX - sqrt2per2 * l, plusY + sqrt2per2 * l);//CD
	LineDDAhv(plusX - sqrt2per2 * l, plusY + sqrt2per2 * l, plusX - sqrt2per2 * l, plusY - (l - sqrt2per2 * l));//DA

	LineDDAhv(plusX - sqrt2per2 * l, plusY - (l - sqrt2per2 * l), 0 + plusX, plusY - l);//AA'
	LineDDAhv(plusX + l - sqrt2per2 * l, plusY - (l - sqrt2per2 * l), l + plusX, plusY - l);//BB'
	LineDDAhv(plusX + l - sqrt2per2 * l, plusY + sqrt2per2 * l, l + plusX, 0 + plusY);//CC'
	LineDDAhv(plusX - sqrt2per2 * l, plusY + sqrt2per2 * l, 0 + plusX, 0 + plusY);//DD'
}

