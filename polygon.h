#pragma once
#include "mylab.h"

void vedagiac(toado2D *A, int sd,int c)
{
	for (int i = 2; i <= sd; i++)
	{
		LineDDA2(ratoadouser(A[i - 1]), ratoadouser(A[i]),c);
		if (i == sd)
		{
			//A[1] = ratoadouser(A[1]);
			//A[sd] = ratoadouser(A[sd]);
			LineDDA2(ratoadouser(A[1]), ratoadouser(A[sd]),c);
		}
	}
}
void Tinhtienhdg(toado2D *A, int sd)
{
	trangthai();
	float deltaX = 200;
	float deltaY = 100;
	char a[100];
	int x, y;
	int x4 = 300;
	int y4 = 598;
	//toado2D B
	toado2D *B = new toado2D[sd + 1];
	/*for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadouser(A[i]);
	}*/
	strcpy(a, "Chon toa do muon tinh tien: ");
	textWrite(x4, y4, a, 7);
	while (true)
	{
		if (ismouseclick(WM_LBUTTONDOWN))
		{
			getmouseclick(WM_LBUTTONDOWN, x, y);
			deltaX = x - A[2].x;
			deltaY = y - A[2].y;
			break;
		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x, y);
			toado(x, y, x4, y4);

		}
	}
	
	for (int i = 1; i <= sd; i++)
	{
		//B[i] = ratoadomay(tinhTien2D(B[i], deltaX, deltaY));
		B[i] = tinhTien2D(A[i], deltaX, deltaY);
	}

	vedagiac(B, sd,0);
}
void doixungquaox(toado2D *A, int sd)
{
	toado2D *B = new toado2D[sd + 1];
	for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadomay(doiXung2D_Ox(ratoadouser(A[i])));
	}
	vedagiac(B, sd,0);
}
void doixungquaoy(toado2D *A, int sd)
{
	toado2D *B = new toado2D[sd + 1];
	for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadomay(doiXung2D_Oy(ratoadouser(A[i])));
	}
	vedagiac(B, sd,0);
}
void doixungquatam(toado2D *A,int sd)
{
	toado2D *B = new toado2D[sd + 1];
	for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadomay(doiXung2D_tamO(ratoadouser(A[i])));
	}
	vedagiac(B, sd,0);
}
void doixung(toado2D *A, int sd)
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
		doixungquaox(A,sd);
	}
	else if (c == 2)
	{
		doixungquaoy(A,sd);
	}
	else
	{
		doixungquatam(A,sd);
	}
}
void tiledagiac(toado2D *A,int sd)
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
	/// tinh tien no ve cho de nhin
	float deltaX = ratoadouser(A[2]).x * (tyLe - 0.5);
	float deltaY = ratoadouser(A[2]).y * (tyLe - 0.5);
	toado2D *B = new toado2D[sd + 1];
	for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadomay(tinhTien2D(tyLe2D(ratoadouser(A[i]),tyLe), -deltaX, -deltaY));
	}
	vedagiac(B, sd,0);
}
void xoaydg(toado2D*A, int sd)
{
	vehinhchunhatvien(195, 0, 1298, 594, 8);
	hetrucxy();
	float PI = 3.14159;

	toado2D *B = new toado2D[sd + 1];
	toado2D *C = new toado2D[sd + 1];
	for (int i = 1; i <= sd; i++)
	{
		B[i] = ratoadouser(A[i]);
	}

	for (int i = 0; i < 360; i += 20)
	{
		for (int j = 1; j <= sd; j++)
		{
			C[j] = ratoadomay(xoay2D(B[j], i * PI / 180));
		}
		//cout << "truoc ve" << C[1].x << "  " << C[1].y;
		vedagiac(C, sd, 0);
		//cout << "sau ve" << C[1].x << "  " << C[1].y;
		Sleep(500);
		if (i != 0)
		{
			vedagiac(C, sd, 8);
		}

	}

}
void biendoidagiac(toado2D *A,int sd)
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
				
				Tinhtienhdg(A, sd);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixung(A, sd);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				//hinh vuong
				trangthai();
				tiledagiac(A, sd);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				//hinh tru
				trangthai();
				xoaydg(A, sd);
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
			else if (x1 >= 10 && x1 <= 90 && y1 >= 230 && y1 <= 310)//10, 230, 90, 310
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				hetrucxy();
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

void dagiac() {
	char a[100];
	strcpy(a, "Nhap so dinh cua da giac: ");
	//outtextxy(300, 598, a);
	int x = 300;
	int y = 598;
	textWrite(x, y, a, 7);
	char sodinh[30];
	textReadnumber(x, y, sodinh);
	int dinh;
	dinh = atoi(sodinh);
	x = 300;
	y = 598;
	int stop = 0;
	toado2D *A =new toado2D [dinh+1];
	int i = 0;
	strcpy(a, "Moi ban click de chon tung diem !");
	textWrite(x, y, a,7);
	strcpy(a, "");
	textWriteln(x,y,a);
	int x4 = x;
	int y4 = y;
	strcpy(a, "Chon toa do: ");
	textWrite(x4, y4, a, 7);
	int x1, y1;

	while (stop == 0)
	{
		delay(0.0001);


		if (ismouseclick(WM_LBUTTONDOWN))
		{
			i++;
			getmouseclick(WM_LBUTTONDOWN, A[i].x, A[i].y);
			if (A[i].x >= 100 && A[i].x <= 180 && A[i].y >= 600 && A[i].y <= 680)//100, 600, 180, 680, 9
			{
				closegraph();
				break;
			}
			else if (A[i].x >= 10 && A[i].x <= 90 && A[i].y >= 600 && A[i].y <= 680)//10, 600, 90, 680, 9
			{

				CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&moFileThread, NULL, 0, NULL);
			}
			putpixel(A[i].x, A[i].y, BLACK);
			if (i > 1)
			{
				
				LineDDA(A[i-1].x, A[i-1].y, A[i].x, A[i].y);
				
				if (i == dinh)
				{
					LineDDA(A[1].x, A[1].y, A[i].x, A[i].y);
					//cout << A[1].x << ";" << A[1].y << "   " << A[i].x << ";" << A[i].y << endl;
					biendoidagiac(A,dinh);
					trangthai();
					stop = 1;
					break;

				}
			}
			//i++;
			

		}
		if (ismouseclick(WM_MOUSEMOVE))
		{
			getmouseclick(WM_MOUSEMOVE, x1, y1);
			toado(x1, y1, x4, y4);

		}
		


	}

}
