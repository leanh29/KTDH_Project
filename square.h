#pragma once
#include "mylab.h"
#include <math.h>
void Tinhtienhv (toado2D A[])
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
			deltaX = x-A[2].x;
			deltaY = y- A[2].y;
			break;
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE,x, y);
			toado(x, y, x4, y4);

		}
	}
	toado2D aa, bb, cc, dd;
	aa = tinhTien2D(A[1], deltaX, deltaY);
	bb = tinhTien2D(A[2], deltaX, deltaY);
	cc = tinhTien2D(A[3], deltaX, deltaY);
	dd = tinhTien2D(A[4], deltaX, deltaY);

	LineDDA(aa.x, aa.y, bb.x, bb.y);
	LineDDA(bb.x, bb.y, cc.x, cc.y);
	LineDDA(cc.x, cc.y, dd.x, dd.y);
	LineDDA(dd.x, dd.y, aa.x, aa.y);
}

void doixungquaox(toado2D A[])
{
	toado2D aa, bb, cc, dd;
	aa = ratoadouser(A[1]);
	bb = ratoadouser(A[2]);
	cc = ratoadouser(A[3]);
	dd = ratoadouser(A[4]);

	aa = doiXung2D_Ox(aa);
	bb = doiXung2D_Ox(bb);
	cc = doiXung2D_Ox(cc);
	dd = doiXung2D_Ox(dd);

	LineDDA2(aa, bb, BLACK);
	LineDDA2(bb, cc, BLACK);
	LineDDA2(cc, dd, BLACK);
	LineDDA2(dd, aa, BLACK);
}
void doixungquaoy(toado2D A[])
{
	toado2D aa, bb, cc, dd;
	aa = ratoadouser(A[1]);
	bb = ratoadouser(A[2]);
	cc = ratoadouser(A[3]);
	dd = ratoadouser(A[4]);

	aa = doiXung2D_Oy(aa);
	bb = doiXung2D_Oy(bb);
	cc = doiXung2D_Oy(cc);
	dd = doiXung2D_Oy(dd);

	LineDDA2(aa, bb,BLACK);
	LineDDA2(bb, cc, BLACK);
	LineDDA2(cc, dd, BLACK);
	LineDDA2(dd, aa, BLACK);
}
void doixungquatam(toado2D A[])
{
	toado2D aa, bb, cc, dd;
	aa = ratoadouser(A[1]);
	bb = ratoadouser(A[2]);
	cc = ratoadouser(A[3]);
	dd = ratoadouser(A[4]);

	aa = doiXung2D_tamO(aa);
	bb = doiXung2D_tamO(bb);
	cc = doiXung2D_tamO(cc);
	dd = doiXung2D_tamO(dd);

	LineDDA2(aa, bb, BLACK);
	LineDDA2(bb, cc, BLACK);
	LineDDA2(cc, dd, BLACK);
	LineDDA2(dd, aa, BLACK);
}
void tilehinhv(toado2D A[])
{
	int tyLe = 2;
	char a[100];
	int c;
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Ban hay nhap ti le: ");
	textWrite(x4, y4, a, 7);
	char dodai[30];
	textReadnumber(x4, y4, dodai);
	c = atoi(dodai);
	tyLe = c;
	toado2D aa, bb, cc, dd;
	aa = ratoadouser(A[1]);
	bb = ratoadouser(A[2]);
	cc = ratoadouser(A[3]);
	dd = ratoadouser(A[4]);

	aa = tyLe2D(aa, tyLe);
	bb = tyLe2D(bb, tyLe);
	cc = tyLe2D(cc, tyLe);
	dd = tyLe2D(dd, tyLe);
	/// tinh tien no ve cho de nhin
	float deltaX = ratoadouser(A[1]).x * (tyLe - 1);
	float deltaY = ratoadouser(A[1]).y * (tyLe - 1);
	aa = tinhTien2D(aa, -deltaX, -deltaY);
	bb = tinhTien2D(bb, -deltaX, -deltaY);
	cc = tinhTien2D(cc, -deltaX, -deltaY);
	dd = tinhTien2D(dd, -deltaX, -deltaY);

	aa = ratoadomay(aa);
	bb = ratoadomay(bb);
	cc = ratoadomay(cc);
	dd = ratoadomay(dd);

	LineDDA(aa.x, aa.y, bb.x, bb.y);
	LineDDA(bb.x, bb.y, cc.x, cc.y);
	LineDDA(cc.x, cc.y, dd.x, dd.y);
	LineDDA(dd.x, dd.y, aa.x, aa.y);
	//cout << "da vao va ra";
}
void doixung(toado2D A[])
{
	char a[100];
	int c;
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon truc toa do ban muon lay doi xung Ox/Oy/O [1/2/bat ky]: ");
	textWrite(x4, y4, a, 7);
	char dodai[30];
	textReadnumber(x4, y4, dodai);
	c = atoi(dodai);
	if (c == 1)
	{
		doixungquaox(A);
	}
	else if(c==2)
	{
		doixungquaoy(A);
	}
	else
	{
		doixungquatam(A);
	}
}
void vehvdemo2(toado2D A[], int c,int color)
{
	LineDDA2(A[1], A[2],color);
	LineDDA2(A[2], A[3],color);
	LineDDA2(A[3], A[4],color);
	LineDDA2(A[1], A[4],color);
}
void xoayhv(toado2D A[],int c)
{
	vehinhchunhatvien(195, 0, 1298, 594, 8);
	hetrucxy();
	float PI = 3.14159;;
	toado2D B[5],C[5];
	B[1] = ratoadouser(A[1]);
	B[2]= ratoadouser(A[2]);
	B[3] = ratoadouser(A[3]);
	B[4] = ratoadouser(A[4]);
	for (int i = 0; i < 360; i += 20)
	{
		//cout << i;
		C[1] = xoay2D(B[1], i * PI / 180);
		C[2] = xoay2D(B[2], i * PI / 180);
		C[3] = xoay2D(B[3], i * PI / 180);
		C[4] = xoay2D(B[4], i * PI / 180);
		vehvdemo2(C, c,BLACK);
		Sleep(500);
		if (i != 0)
		{
			vehvdemo2(C, c, 8);
		}
		
	}
	
}
void biendoihv(toado2D A[], int c)
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
			if (x1 >= 10 && x1 <= 90 && y1 >= 60 && y1 <= 140)//10,60,90,140,9
			{
				Tinhtienhv(A);
				//system("pause");
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixung(A);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				trangthai();
				tilehinhv(A);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				//hinh tru
				//cout << "abc";
				xoayhv(A,c);
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
void vehvdemo(toado2D A[],int c)
{
	A[2].x = A[1].x + c; A[2].y = A[1].y;
	putpixel(A[2].x, A[2].y, BLACK);
	A[3].x = A[1].x + c; A[3].y = A[1].y - c;
	putpixel(A[3].x, A[3].y, BLACK);
	A[4].x = A[1].x; A[4].y = A[1].y - c;
	putpixel(A[4].x, A[4].y, BLACK);
	LineDDA(A[1].x, A[1].y, A[2].x, A[2].y);
	LineDDA(A[2].x, A[2].y, A[3].x, A[3].y);
	LineDDA(A[3].x, A[3].y, A[4].x, A[4].y);
	LineDDA(A[1].x, A[1].y, A[4].x, A[4].y);
}


void vehv1() {
	char a[100];
	int x4 = 300;
	int y4 = 598;
	strcpy(a, "Chon toa do: ");
	textWrite(x4, y4, a, 7);
	int x = 300;
	int y = 598;
	int stop = 0;
	toado2D A[10];
	int x1, y1;
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
			int c;//// dem c
			strcpy(a, "");
			textWriteln(x, y, a);
			strcpy(a, "Moi ban hay nhap do dai canh hinh vuong: ");
			textWrite(x, y, a, 7);
			char dodai[30];
			textReadnumber(x, y, dodai);
			c = atoi(dodai);
			//cout << cd << "  " << cr;
			vehvdemo(A,c);
			biendoihv(A,c);
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
