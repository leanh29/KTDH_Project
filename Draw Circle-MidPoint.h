#pragma once
#include "mylab.h"
//int c = 0;
void draw8point(int x, int y, int xt, int yt, int c) { //ve 8 diem doi xung
	putpixel(xt + x, yt + y, c);//1
	//Sleep(10);
	putpixel(xt - x, yt - y, c);//5
	//Sleep(10);
	putpixel(xt + x, yt - y, c);//4
	//Sleep(10);
	putpixel(xt - x, yt + y, c);//8
	//Sleep(10);
	putpixel(xt + y, yt + x, c);//
	//Sleep(10);
	putpixel(xt - y, yt - x, c);//6
	//Sleep(10);
	putpixel(xt + y, yt - x, c);//
	//Sleep(10);
	putpixel(xt - y, yt + x, c);
	//Sleep(10);
}
void midpoint(toado2D A, int r,int c) { //ve duong tron
//	int c;
	setbkcolor(8);
	char M[10];
	settextstyle(6, 0,1);
	setcolor(c);
	strcpy(M, "E");
	outtextxy(A.x - 10, A.y, M);
	putpixel(A.x, A.y, c);
	int x = 0, y = r;
	int p = 3 - 2 * r;
	for (x; x <= y; x++) {
		if (p<0) {
			p += 4 * x + 6;
		}
		else {
			p += 4 * (x - y) + 10;
			y--;
		}
		draw8point(x, y, A.x, A.y,c);
	}
	settextstyle(8, 0, 1);
}
toado2D Tinhtienht(toado2D A,int r)
{
	trangthai();
	float deltaX = 200;
	float deltaY = 100;
	char a[100];
	int x, y;
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon toa do muon tinh tien: ");
	textWrite(x4, y4, a, 7);
	while (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x, y);
			deltaX = x - A.x;
			deltaY = y - A.y;
			break;
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x, y);
			toado(x, y, x4, y4);

		}
	}
	toado2D aa;
	aa = tinhTien2D(A, deltaX, deltaY);
	return aa;

}
toado2D doixungquaox(toado2D A, int r)
{
	toado2D aa;
	aa = ratoadouser(A);
	aa = doiXung2D_Ox(aa);
	aa = ratoadomay(aa);
	return aa;
}
toado2D doixungquaoy(toado2D A, int r)
{
	toado2D aa;
	aa = ratoadouser(A);
	aa = doiXung2D_Oy(aa);
	aa = ratoadomay(aa);

	return aa;
}
toado2D doixungquatam(toado2D A,int r)
{
	toado2D aa;
	aa = ratoadouser(A);
	aa = doiXung2D_tamO(aa);
	aa = ratoadomay(aa);
	return aa;
}
void doixung(toado2D A, int r)
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
		midpoint(doixungquaox(A,r),r,0);
	}
	else if (c == 2)
	{
		midpoint(doixungquaoy(A,r),r,0);
	}
	else
	{
		midpoint(doixungquatam(A,r),r,0);
	}
}
toado2D phongtoht(toado2D A, int bk)
{
	toado2D C;
	int tyLe = 2;
	int a = bk * tyLe;
	float deltaX = A.x *(tyLe - 0.5);
	float deltaY = A.y* (tyLe - 1)*0.5;
	C = ratoadomay(phongto(A, tyLe, deltaX, deltaY));
	return C;
	
}
toado2D xoayht1(toado2D A, int bk, float gocRadian) {
	toado2D B;
	B = ratoadomay(xoay2D(A, gocRadian));
	return B;
}
void biendoihinhtron(int x, int y, int r)
{
	menucacphep();
	toado2D A;
	A.x = x;
	A.y = y;
	midpoint(A, r, 0);
	//A = ratoadouser(A);
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
				//Tinhtienht(A, r);
				trangthai();
				midpoint(Tinhtienht(A, r), r, 0);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixung(A, r);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				A = ratoadouser(A);	
				midpoint(phongtoht(A, r), r*2, 0);
				A = ratoadomay(A);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{

				A = ratoadouser(A);
				float PI = 3.14159;;
				float goc = 0;
				for (float goc = 20; goc < 360; goc += 20) {
					xoayht1(A,r, goc * PI / 180);
					midpoint(xoayht1(A, r, goc * PI / 180), r, 0);
					Sleep(500);
					midpoint(xoayht1(A, r, goc * PI / 180), r, 8);
				}
				A = ratoadomay(A);
				menucacphep();
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

void hinhtron() {
	char a[100];
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon toa do: ");
	textWrite(x4, y4, a, 7);
	int x = 300;
	int y = 598;
	int stop = 0;
	while (stop == 0)
	{
		delay(0.0001);
		int x1, y1;

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x1, y1);
			if (x1 >= 100 && x1 <= 180 && y1 >= 600 && y1 <= 680)//100, 600, 180, 680, 9
			{
				closegraph();
				break;
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 600 && y1 <= 680)//10, 600, 90, 680, 9
			{

				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}
			else {
				x = 300;
				y = 598;
				trangthai();
				setbkcolor(7);
				setcolor(7);
				outtextxy(300, 598, a);
				putpixel(x1, y1, 0);
				//textWrite(x, y, a, 0);
				char tem[40];
				_itoa(doitoado2Dx(x1), tem, 10);
				strcpy(a, "Toa do tam cua ban la: ");
				strcat(a, tem);
				strcat(a, " ; ");
				_itoa(doitoado2Dy(y1), tem, 10);
				strcat(a, tem);
				textWrite(x, y, a, 7);
				strcpy(a, "");
				textWriteln(x, y, a);
				strcpy(a, "Moi ban hay nhap ban kinh: ");
				textWrite(x, y, a, 7);
				char bk[30];
				textReadnumber(x, y, bk);
				int r;
				r = atoi(bk);
				biendoihinhtron(x1, y1,r);
				trangthai();
				break;


			}
			
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x, y);
			toado(x, y, x4, y4);

		}

	}
	
}