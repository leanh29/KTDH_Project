#pragma once
#include "Rectangle.h"
#include "Draw Circle-MidPoint.h"
void hinh1(toado2D A[],int cd, int cr , int bk)
{
	//cout << "davao";
	
	LineDDA(A[1].x, A[1].y, A[2].x, A[2].y);
	LineDDA(A[2].x, A[2].y, A[3].x, A[3].y);
	LineDDA(A[3].x, A[3].y, A[4].x, A[4].y);
	LineDDA(A[1].x, A[1].y, A[4].x, A[4].y);
	midpoint(A[5], bk, 0);
	setbkcolor(8);
	char M[10];
	settextstyle(8, 0, 1);
	strcpy(M, "A");
	outtextxy(A[1].x - 15, A[1].y-10, M);
	strcpy(M, "B");
	outtextxy(A[2].x + 15, A[2].y - 10, M);
	strcpy(M, "C");
	outtextxy(A[3].x + 15, A[3].y - 10, M);
	strcpy(M, "D");
	outtextxy(A[4].x - 15, A[4].y - 10, M);
}

void tinhtienhv1(toado2D A[], int cd, int cr, int bk)
{
	toado2D B[7];
	for (int i = 1; i <= 5; i++)
	{
		B[i] = ratoadomay(A[i]);
	}
	float deltaX = 900;//0->900
	float deltaY = 0;
	for (int i = 0; i <= deltaX; i+=20)
	{
		B[5] = tinhTien2D(ratoadomay(A[5]), i, deltaY);
		hientoado(5, B, 0);
		//B[6] = tinhTien2D(A[6], deltaX, deltaY);
		midpoint(B[5], bk,0);
		Sleep(100);
		midpoint(B[5], bk, 8);
		if (i <= 60)
		{
			midpoint(ratoadomay(A[5]), bk, 0);
		}
	}
	//B[5]=ratoadomay(B[5]);
	B[6] = B[5];
	for (int i = 0; i > - deltaX+60; i-=20)
	{
		B[5] = tinhTien2D(B[6], i, deltaY);
		hientoado(5, B, 0);
		midpoint(B[5], bk, 0);
		Sleep(100);
		midpoint(B[5], bk, 8);
		
	}
}
void doixungvat1_Ox(toado2D A[], int cd, int cr, int bk) {
	
	toado2D C[7];
	C[1] = ratoadomay(doiXung2D_Ox(A[1]));
	C[2] = ratoadomay(doiXung2D_Ox(A[2]));
	C[3] = ratoadomay(doiXung2D_Ox(A[3]));
	C[4] = ratoadomay(doiXung2D_Ox(A[4]));
	C[5] = ratoadomay(doiXung2D_Ox(A[5]));
	hinh1(C, cd, cr, bk);
	hientoado(5, C, 0);

}
void doixungvat1_Oy(toado2D A[], int cd, int cr, int bk) {

	toado2D C[7];
	C[1] = ratoadomay(doiXung2D_Ox(A[1]));
	C[2] = ratoadomay(doiXung2D_Ox(A[2]));
	C[3] = ratoadomay(doiXung2D_Ox(A[3]));
	C[4] = ratoadomay(doiXung2D_Ox(A[4]));
	C[5] = ratoadomay(doiXung2D_Oy(A[5]));
	midpoint(C[5], bk,0);
	hientoado(5, C, 0);

}
void doixungvat1_tamO(toado2D A[], int cd, int cr, int bk) {

	toado2D C[7];
	C[1] = ratoadomay(doiXung2D_Ox(A[1]));
	C[2] = ratoadomay(doiXung2D_Ox(A[2]));
	C[3] = ratoadomay(doiXung2D_Ox(A[3]));
	C[4] = ratoadomay(doiXung2D_Ox(A[4]));
	C[5] = ratoadomay(doiXung2D_tamO(A[5]));
	midpoint(C[5], bk, 0);
	hientoado(5, C, 0);
}
void doixungv1(toado2D A[],int cd,int cr,int bk)
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
		doixungvat1_Ox(A, cd, cr, bk);
	}
	else if (c == 2)
	{
		doixungvat1_Oy(A, cd, cr, bk);
	}
	else
	{
		doixungvat1_tamO(A, cd, cr, bk);
	}
}
void phongtovat1(toado2D A[], int cd, int cr, int bk)
{
	toado2D C[7];
	for (int i = 1; i <= 5; i++)
	{
		C[i] = ratoadomay(A[i]);
	}
	int tyLe = 4;
	int a = bk * tyLe;
	float deltaX = A[5].x *(tyLe-0.5);
	float deltaY = A[5].y* (tyLe-1)*0.5;
	C[5] =ratoadomay(phongto(A[5], tyLe, deltaX, deltaY));
	midpoint(C[5],a, 0);
	hientoado(5, C, 0);
}
void xoayvat1(toado2D A[], int cd, int cr, int bk, float gocRadian) {
	toado2D B[7];
	for (int i = 1; i < 5; i++)
	{
		B[i] =A[i];
	}
	B[5] = ratoadomay(xoay2D(A[5], gocRadian));
	//B[4] = ratoadouser(B[5]);
	midpoint(B[5], bk, 0);
	Sleep(500);
	midpoint(B[5], bk, 8);
	hientoado(5, B, 0);

}
void dinhhuongxoay(toado2D A[], int cd, int cr, int bk)
{
	toado2D B[7];
	for (int i = 1; i <= 5; i++)
	{
		B[i] = ratoadomay(A[i]);
	}
	float deltaX = 900;//0->900
	float deltaY = 0;
	int stop = 0;
	for (int i = 0; i <= deltaX; i += 20)
	{
		B[5] = tinhTien2D(ratoadomay(A[5]), i, deltaY);
		//B[6] = tinhTien2D(A[6], deltaX, deltaY);
		//cout << doitoado2Dx(B[5].x)<<"  " << doitoado2Dy(B[5].y) << endl;
		hientoado(5, B, 0);
		midpoint(B[5], bk, 0);
		Sleep(100);
		midpoint(B[5], bk, 8);
		if (i == 660&&stop==0)
		{
			B[5] = ratoadouser(B[5]);
			//hientoado(1, B, 1);
			float PI = 3.14159;;
			float goc = 0;
			for (float goc = 20; goc < 150; goc += 10) {
				xoayvat1(B, cd, cr, bk, goc * PI / 180);
				//Sleep(500);
				
			}
			i = 280;
			stop = 1;
		}
		if (i <= 60)
		{
			midpoint(ratoadomay(A[5]), bk, 0);
			//hientoado(5, B, 0);
		}
	}
	
}
void biendoihv1(toado2D A[], int cd, int cr, int bk)
{
	menucacphep();
	hientoado(5, A,1);
	int stop = 1;
	while (stop != 0)
	{
		delay(0.0001);
		int x1, y1;

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x1, y1);
			if (x1 >= 10 && x1 <= 90 && y1 >= 60 && y1 <= 140)//10,60,90,140,9
			{
				trangthai();
				tinhtienhv1(A, cd, cr, bk);
				//system("pause");
				//menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixungv1(A, cd, cr, bk);
				//menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				trangthai();
				phongtovat1(A, cd, cr, bk);
				//menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				hetrucxy();
				A[1].x = 247; A[1].y = 267;
				A[2].x = A[1].x + cd; A[2].y = A[1].y;
				A[3].x = A[1].x + cd; A[3].y = A[1].y + cr;
				A[4].x = A[1].x; A[4].y = A[1].y + cr;
				A[5].x = 280; A[5].y = 235;
				//hinh1(A, cd, cr, bk);

				hinh1(A, cd, cr, bk);
				A[1] = ratoadouser(A[1]);
				A[2] = ratoadouser(A[2]);
				A[3] = ratoadouser(A[3]);
				A[4] = ratoadouser(A[4]);
				A[5] = ratoadouser(A[5]);
				dinhhuongxoay(A, cd, cr, bk);
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
				trangthai();
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
void vh1()
{
	toado2D A[7];
	int cd, cr,bk;
	cd = 1000;
	cr = 30;
	bk = 30;
	//hinh1(A, cd, cr, bk);
	A[1].x = 247; A[1].y = 267;
	A[2].x = A[1].x + cd; A[2].y = A[1].y;
	A[3].x = A[1].x + cd; A[3].y = A[1].y + cr;
	A[4].x = A[1].x; A[4].y = A[1].y + cr;
	A[5].x = 280; A[5].y = 235;
	hinh1(A, cd, cr, bk);
	A[1] = ratoadouser(A[1]);
	A[2] = ratoadouser(A[2]);
	A[3] = ratoadouser(A[3]);
	A[4] = ratoadouser(A[4]);
	A[5] = ratoadouser(A[5]);
	biendoihv1(A, cd, cr, bk);
	
}
