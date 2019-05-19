#include "mylab.h"
#include "Draw Circle-MidPoint.h"
//#include "Line_DDA.h"
#include "polygon.h"
#include "Ecllipse.h"
#include "Rectangle.h"
#include "square.h"
#include "hinhhv.h"
#include "hinhhcn.h"
#include "Hinh2.h"
#include "Hinh1.h"
#include "Hinhnon.h"
void menucachinh2D()
{
	trangthai();
	vehinhchunhatvien(5, 55, 190, 595, 7);
	//hetrucxy();
	vehinhchunhatvien(10, 60, 90, 140, 9);
	char a[15] = "Hinh";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(20, 80, a);
	strcpy(a, "1");
	outtextxy(40, 100, a);
	vehinhchunhatvien(100, 60, 180, 140, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 80, a);
	strcpy(a, "Tron");
	outtextxy(110, 100, a);
	vehinhchunhatvien(10, 145, 90, 225, 9);
	strcpy(a, "Hinh");
	outtextxy(20, 165, a);
	strcpy(a, "Ecllipse");
	outtextxy(20, 185, a);
	vehinhchunhatvien(100, 145, 180, 225, 9);
	strcpy(a, "Da");
	outtextxy(110, 165, a);
	strcpy(a, "Giac");
	outtextxy(110, 185, a);
	vehinhchunhatvien(10, 230, 90, 310, 4);
	strcpy(a, "CLEAR");
	outtextxy(20, 250, a);
	vehinhchunhatvien(100, 230, 180, 310, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 250, a);
	strcpy(a, "2");
	outtextxy(120, 270, a);
	vehinhchunhatvien(10, 315, 90, 395, 9);
	strcpy(a, "Hinh");
	outtextxy(20, 335, a);
	strcpy(a, "Vuong");
	outtextxy(20, 355, a);
	vehinhchunhatvien(100, 315, 180, 395, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 335, a);
	strcpy(a, "CN");
	outtextxy(110, 355, a);
	vehinhchunhatvien(10, 570, 185, 595, 9);
	strcpy(a, "<<Tro lai");
	outtextxy(50, 575, a);

}
void Ve2D()
{
	//vehinhchunhatvien(100, 0, 170, 50, 11);
	trangthai();
	vehinhchunhatvien(5, 55, 190, 595, 7);
	hetrucxy();
	vehinhchunhatvien(10, 60, 90, 140, 9);
	char a[15] = "Hinh";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(20, 80, a);
	strcpy(a, "1");
	outtextxy(40, 100, a);
	vehinhchunhatvien(100, 60, 180, 140, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 80, a);
	strcpy(a, "Tron");
	outtextxy(110, 100, a);
	vehinhchunhatvien(10, 145, 90, 225, 9);
	strcpy(a, "Hinh");
	outtextxy(20, 165, a);
	strcpy(a, "Ecllipse");
	outtextxy(20, 185, a);
	vehinhchunhatvien(100, 145, 180, 225, 9);
	strcpy(a, "Da");
	outtextxy(110, 165, a);
	strcpy(a, "Giac");
	outtextxy(110, 185, a);
	vehinhchunhatvien(10, 230, 90, 310, 4);
	strcpy(a, "CLEAR");
	outtextxy(20, 250, a);
	vehinhchunhatvien(100, 230, 180, 310, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 250, a);
	strcpy(a, "2");
	outtextxy(120, 270, a);
	vehinhchunhatvien(10, 315, 90, 395, 9);
	strcpy(a, "Hinh");
	outtextxy(20, 335, a);
	strcpy(a, "Vuong");
	outtextxy(20, 355, a);
	vehinhchunhatvien(100, 315, 180, 395, 9);
	strcpy(a, "Hinh");
	outtextxy(110, 335, a);
	strcpy(a, "CN");
	outtextxy(110, 355, a);
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
			if (x1 >= 100 && x1 <= 180 && y1 >= 600 && y1 <= 680)//100, 600, 180, 680, 9
			{
				closegraph();
				break;
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 600 && y1 <= 680)//10, 600, 90, 680, 9
			{

				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}
			if (x1 >= 10 && x1 <= 90 && y1 >= 60 && y1 <= 140)//10,60,90,140,9 duong thang
			{
				//duong thang
//				duongthang();
				vh1();
				menucachinh2D();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				//hinh tron
				hinhtron();
				menucachinh2D();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				//hinh ecllipse
				trangthai();
				hinhEcllipse();
				menucachinh2D();

			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				//hinh da giac
				trangthai();
				dagiac();
				menucachinh2D();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 315 && y1 <= 395)//100, 315, 180, 395, 9
			{
				//hinh chu nhat
				trangthai();
				vehcn();
				menucachinh2D();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 315 && y1 <= 395)//10, 315, 90, 395, 9
			{
				//hinh chu vuong
				trangthai();
				vehv1();
				menucachinh2D();
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
			else if (x1 >= 10 && x1 <= 90 && y1 >= 230 && y1 <= 310)//10, 230, 90, 310
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				hetrucxy();
				//clear

			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 230 && y1 <= 310)//100, 230, 180, 310, 9
			{
				// vat 2
				trangthai();
				veh2();
				menucachinh2D();
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
void menucachinh3D()
{
	vehinhchunhatvien(5, 55, 190, 595, 7);
	//trangthai();
	vehinhchunhatvien(10, 60, 90, 140, 9);
	char a[15] = "Hinh";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(20, 80, a);
	strcpy(a, "Non");
	outtextxy(20, 100, a);
	vehinhchunhatvien(100, 60, 180, 140, 9);
	strcpy(a, "Hop");
	outtextxy(110, 80, a);
	strcpy(a, "CN");
	outtextxy(110, 100, a);
	vehinhchunhatvien(10, 145, 90, 225, 9);
	strcpy(a, "Hop");
	outtextxy(20, 165, a);
	strcpy(a, "Vuong");
	outtextxy(20, 185, a);

	vehinhchunhatvien(100, 145, 180, 225, 4);
	strcpy(a, "CLEAR");
	outtextxy(110, 165, a);
	//vehinhchunhatvien(100, 230, 180, 310, 9);
	vehinhchunhatvien(10, 570, 185, 595, 9);
	strcpy(a, "<<Tro lai");
	outtextxy(50, 575, a);


}
void Ve3D()
{
	//vehinhchunhatvien(100, 0, 170, 50, 11);
	vehinhchunhatvien(5, 55, 190, 595, 7);
	hetrucxyz();
	trangthai();
	vehinhchunhatvien(10, 60, 90, 140, 9);
	menucachinh3D();
	int stop = 1;
	while (stop != 0)
	{
		delay(0.0001);
		int x1, y1;

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x1, y1);
			if (x1 >= 100 &&x1 <= 180 && y1 >= 600 && y1 <= 680)//100, 600, 180, 680, 9
			{
				closegraph();
				break;
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 600 && y1 <= 680)//10, 600, 90, 680, 9
			{

				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}
			if (x1 >= 10 && x1 <= 90 && y1 >= 60 && y1 <= 140)//10,60,90,140,9 duong thang
			{
				trangthai();
				vehinhnon();
				menucachinh3D();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				hinhhcn();
				menucachinh3D();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				//hinh vuong
				trangthai();
				hinhhv();
				menucachinh3D();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				hetrucxyz();
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


void Graphics()
{
	vehinhchunhatvien(195, 0, 1298, 594, 8);
	trangthai();
	vehinhchunhatvien(10, 0, 80, 50, 9);
	char a[50] = "2D";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(35, 15, a);
	setfillstyle(SOLID_FILL, 9);
	setbkcolor(7);
	strcpy(a, "Moi ban chon che do 2D hoac 3D");
	outtextxy(300, 598, a);
	setfillstyle(SOLID_FILL, 9);
	vehinhchunhatvien(100, 0, 170, 50, 11);
	strcpy(a, "3D");
	outtextxy(125, 15, a);
	vehinhchunhatvien(10, 600, 90, 680, 9);
	strcpy(a, "Tro");
	outtextxy(20, 620, a);
	strcpy(a, "Giup");
	outtextxy(20, 640, a);
	vehinhchunhatvien(100, 600, 180, 680, 9);
	strcpy(a, "Exit");
	outtextxy(110, 620, a);
	int stop = 1;
	while (stop != 0)
	{
		delay(0.0001);
		int x1, y1;

		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x1, y1);//10, 0, 80, 50, 9
			if (x1 >= 10 && x1 <= 80 && y1 >= 0 && y1 <= 50)
			{
				vehinhchunhatvien(10, 0, 80, 50, 12);
				strcpy(a, "2D");
				outtextxy(35, 15, a);
				trangthai();
				strcpy(a, "Moi ban chon chon hinh muon ve");
				outtextxy(300, 598, a);
				Ve2D();
				vehinhchunhatvien(10, 0, 80, 50, 9);
				strcpy(a, "2D");
				outtextxy(35, 15, a);
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				setbkcolor(7);
				strcpy(a, "Moi ban chon che do 2D hoac 3D");
				outtextxy(300, 598, a);

			}
			else if (x1 >= 100 && x1 <= 170 && y1 >= 0 && y1 <= 50)//100, 0, 170, 50, 11
			{
				vehinhchunhatvien(100, 0, 170, 50, 12);
				strcpy(a, "3D");
				outtextxy(125, 15, a);
				trangthai();
				strcpy(a, "Moi ban chon hinh 3D muon ve");
				outtextxy(300, 598, a);
				Ve3D();
				vehinhchunhatvien(100, 0, 170, 50, 11);
				strcpy(a, "3D");
				outtextxy(125, 15, a);
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				setbkcolor(7);
				strcpy(a, "Moi ban chon che do 2D hoac 3D");
				outtextxy(300, 598, a);
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 600 && y1 <= 680)//100, 600, 180, 680, 9
			{
				//stop = 0;
				closegraph();
				break;
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 600 && y1 <= 680)//10, 600, 90, 680, 9
			{
				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}

		}

		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x1, y1);//100, 0, 170, 50, 11

												//cout << x1 << "  " << y1 << endl;

		}
		if (ismouseclick(WM_LBUTTONDBLCLK))
		{
			getmouseclick(WM_LBUTTONDBLCLK, x1, y1);
		}

	}
	//return ;
}

int main()
{
	initwindow(1300, 700, "Graphics");
	setbkcolor(WHITE);
	cleardevice();
	Graphics();
	return 0;
}