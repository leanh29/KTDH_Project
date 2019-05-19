#pragma once
#pragma once
#include "square.h"
#include <math.h>
//#include <stdio.h>
void vehcn1(toado2D A[],int c)
{
	LineDDA2(A[1], A[2],c);
	LineDDA2(A[2], A[3],c);
	LineDDA2(A[3], A[4],c);
	LineDDA2(A[1], A[4],c);
}
void xoayhcn(toado2D A[])
{
	vehinhchunhatvien(195, 0, 1298, 594, 8);
	hetrucxy();
	float PI = 3.14159;;
	toado2D B[5], C[5];
	B[1] = ratoadouser(A[1]);
	B[2] = ratoadouser(A[2]);
	B[3] = ratoadouser(A[3]);
	B[4] = ratoadouser(A[4]);
	for (int i = 0; i < 360; i += 20)
	{
		//cout << i;
		C[1] = xoay2D(B[1], i * PI / 180);
		C[2] = xoay2D(B[2], i * PI / 180);
		C[3] = xoay2D(B[3], i * PI / 180);
		C[4] = xoay2D(B[4], i * PI / 180);
		vehcn1(C, 0);
		Sleep(500);
		if (i != 0)
		{
			vehcn1(C, 8);
		}

	}

}
void biendoihcn(toado2D A[])
{
	menucacphep();
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
				//hinh cau
				Tinhtienhv(A);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				//hinh hop chu nhat
				trangthai();
				doixung(A);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				//hinh vuong
				trangthai();
				tilehinhv(A);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				xoayhcn(A);
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

void vehcn() {
	char a[100];
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon toa do: ");
	textWrite(x4, y4, a, 7);
	int x = 300;
	int y = 598;
	int stop = 0;
	toado2D A[80];
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
			trangthai();
			setbkcolor(7);
			setcolor(7);
			outtextxy(300, 598, a);
			putpixel(A[1].x, A[1].y, BLACK);
			//textWrite(x, y, a, 0);
			char tem[40];
			_itoa(doitoado2Dx(A[1].x), tem, 10);
			strcpy(a, "Toa do hcn la: ");
			strcat(a, tem);
			strcat(a, " ; ");
			_itoa(doitoado2Dy(A[1].y), tem, 10);
			strcat(a, tem);
			textWrite(x, y, a, 7);
			int cd, cr;
			strcpy(a, "");
			textWriteln(x, y, a);
			strcpy(a, "Moi ban hay nhap chieu dai hcn: ");
			textWrite(x, y, a, 7);
			char dodai[30];
			textReadnumber(x, y, dodai);
			cd = atoi(dodai);
			strcpy(a, "");
			textWriteln(x, y, a);
			strcpy(a, "Moi ban hay nhap chieu rong hcn: ");
			textWrite(x, y, a, 7);
			strcpy(dodai, "");
			textReadnumber(x, y, dodai);
			cr = atoi(dodai);
			//cout << cd << "  " << cr;
			A[2].x = A[1].x + cd; A[2].y = A[1].y;
			putpixel(A[2].x, A[2].y, BLACK);
			A[3].x = A[1].x + cd; A[3].y = A[1].y+cr;
			putpixel(A[3].x, A[3].y, BLACK);
			A[4].x = A[1].x; A[4].y = A[1].y+cr;
			putpixel(A[4].x, A[4].y, BLACK);
			LineDDA(A[1].x, A[1].y, A[2].x, A[2].y);
			LineDDA(A[2].x, A[2].y, A[3].x, A[3].y);
			LineDDA(A[3].x, A[3].y, A[4].x, A[4].y);
			LineDDA(A[1].x, A[1].y, A[4].x, A[4].y);
			biendoihcn(A);
			trangthai();
			break;
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x1, y1);
			toado(x1, y1, x4, y4);

		}
	}
}
