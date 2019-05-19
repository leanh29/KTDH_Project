#pragma once
#include "graphics.h"
#include <iostream>
#include <cstdlib>
#include <math.h>
//#include "pthread.h"
using namespace std;
char TD[24] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
'T' };

struct toado2D
{
	int x, y;

};

struct toado3D
{
	int x, y, z;
};
toado2D tam = { 747, 297 };
toado2D ratoadomay(toado2D P) {
	toado2D ketqua;
	ketqua.x = tam.x + P.x;
	ketqua.y = tam.y - P.y;
	return ketqua;
}
toado2D ratoadouser(toado2D P) {
	toado2D ketqua;
	ketqua.x = P.x - tam.x;
	ketqua.y = tam.y - P.y;
	return ketqua;
}
void vehinhchunhatvien(int x, int y, int z, int b, int color)
{
	setfillstyle(SOLID_FILL, color);
	setcolor(BLACK);
	rectangle(x, y, z, b);
	setbkcolor(color);
	bar(x + 1, y + 1, z, b);
}

void textWriteln(int &x, int &y, char s[]) {//xuong hang
	outtextxy(x, y, s);
	x = 300;
	y += 20;
}

void trangthai()
{
	setcolor(BLACK);
	vehinhchunhatvien(195, 595, getmaxx(), getmaxy(), 7);//650
	char a[15] = "Thong bao: ";
	settextstyle(3, 0, 1);
	setfillstyle(SOLID_FILL, 9);
	outtextxy(205, 598, a);
}
void textWrite(int &x, int &y, char s[], int color) {//viet tiep
													 //settextstyle(0,0,1);
	setcolor(BLACK);
	setbkcolor(color);
	outtextxy(x, y, s);
	x += textwidth(s);
}

void textWriteRemove(int &x, int &y, char s[]) {//lui lai khi xoa
												//settextstyle(0,0,1);
	setcolor(7);
	setbkcolor(7);
	x -= textwidth(s);
	outtextxy(x, y, s);
}
void textReadnumber(int &x, int &y, char s[]) {//dua du lieu kieu so vao
	char ch[2];
	char temp;
	ch[1] = 0;
	int i = 0;
	while (1) {
		fflush(stdin);
		temp = getch();
		if (temp >= '0' && temp <= '9') {
			ch[0] = temp;
			textWrite(x, y, ch, 7);
			s[i++] = ch[0];
		}
		else if (temp == 8) {
			textWriteRemove(x, y, ch);
			i--;
			setcolor(WHITE);
		}
		else if (temp == 13) break;
	}
	s[i] = 0;
}
void hetrucxy()
{
	line(195, 297, 1298, 297);//195,0,1298,594,8 747
	line(747, 0, 747, 594);
	putpixel(747, 297, RED);//diem giua
	int toadoduong = 0;
	int toadoam = 0;
	char td[100];
	setcolor(RED);
	setfillstyle(SOLID_FILL, 8);
	setcolor(BLACK);
	setbkcolor(8);
	settextstyle(10, 0, 1);
	_itoa(toadoduong, td, 10);
	int luiam = 697;
	//strcpy(td,);
	outtextxy(749, 302, td);
	for (int i = 797; i <= 1248; i = i + 50)//truc x
	{
		toadoduong += 50;
		line(i, 295, i, 300);
		_itoa(toadoduong, td, 10);
		outtextxy(i - 2, 302, td);
		toadoam -= 50;
		line(luiam, 295, luiam, 300);
		_itoa(toadoam, td, 10);
		outtextxy(luiam - 25, 302, td);
		luiam = luiam - 50;

	}
	strcpy(td, "x");
	outtextxy(1238, 270, td);
	//297
	luiam = 247;
	toadoam = toadoduong = 0;
	for (int i = 347; i <= 594; i = i + 50)//truc y
	{
		toadoduong -= 50;
		line(745, i, 750, i);//line(i, 745, i, 750);
		_itoa(toadoduong, td, 10);
		//outtextxy(luiam - 12, 302, td);
		outtextxy(752, i - 7, td);

		toadoam += 50;
		line(745, luiam, 755, luiam);//line(luiam,745, luiam, 750);
		_itoa(toadoam, td, 10);
		outtextxy(755, luiam - 5, td);
		luiam = luiam - 50;
		//outtextxy(i - 2, 302, td);

	}
	strcpy(td, "y");
	outtextxy(tam.x - 20, 15, td);
	settextstyle(3, 0, 1);
}
//putpixel(747, 297, RED);//diem giua
int doitoado2Dx(int x)
{
	return x - 747;
}
int doitoado2Dy(int y)
{
	return 297 - y;
}
/*int doitoado3Dz(int x, int y)
{

}*/
//re  chut hien thi toa do lien tuc o thanh thong bao
void toado(int x, int y,int toadoxht,int toadoyht)
{

	char ao[40] = {0};
	char c[100] = {0};
	strcpy(ao, "                         ");
	outtextxy(toadoxht, toadoyht, ao);
	_itoa(doitoado2Dx(x), ao, 10);
	strcat(c, ao);
	strcat(c, " ; ");
	_itoa(doitoado2Dy(y), ao, 10);
	strcat(c, ao);
	outtextxy(toadoxht,toadoyht,c);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void moFile() {
	string openString = "help.docx";

	system(openString.c_str());
}
DWORD WINAPI moFileThread(LPVOID param) {
	moFile();
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menucacphep()
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
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void LineDDA2(toado2D A, toado2D B, int color) { //ve duong tron
	A = ratoadomay(A);
	B = ratoadomay(B);
	float x1 = A.x;
	float y1 = A.y;
	float x2 = B.x;
	float y2 = B.y;
	float x = x1;
	float y = y1;
	float m = abs(float(x2 - x1) / (y2 - y1));
	putpixel(x, round(y), color);
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
					putpixel(round(x), y, color);
				}
			}
			else
			{
				m = float(x2 - x1) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x += m;
					putpixel(round(x), y, color);
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
				putpixel(x, round(y), color);
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
					putpixel(round(x), y,color);
				}
			}
			else
			{
				m = float(x1 - x2) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x -= m;
					putpixel(round(x), y, color);
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
				putpixel(x, round(y), color);
			}
		}
	}
	else if (x1 == x2)
	{
		if (y2 > y1)
		{
			m = float(x2 - x1) / (y2 - y1);
			putpixel(y, round(x), color);
			for (int i = y1; i < y2; i++)
			{
				y++;
				x += m;
				putpixel(round(x), y, color);
			}
		}
		else if (y2<y1)
		{
			m = float(x1 - x2) / (y1 - y2);
			putpixel(y, round(x), color);
			for (int i = y2; i < y1; i++)
			{
				y--;
				x += m;
				putpixel(round(x), y, color);
			}
		}
	}

}
void LineDDA(int x1, int y1, int x2, int y2) { 
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
			//putpixel(y, round(x), BLACK);
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
			//putpixel(y, round(x), BLACK);
			for (int i = y2; i < y1; i++)
			{
				y--;
				x += m;
				putpixel(round(x), y, BLACK);
			}
		}
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void LineDDAan(int x1, int y1, int x2, int y2) { //ve duong thang an ----------
	float x = x1;
	float y = y1;
	float m = abs(float(x2 - x1) / (y2 - y1));
	int dem = 0;
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
					dem++;
					if (dem == 3)
					{
						putpixel(round(x), y, 8);
						dem = 0;
					}
					else
					{
						putpixel(round(x), y, BLACK);
					}
				}
			}
			else
			{
				m = float(x2 - x1) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x += m;
					dem++;
					if (dem == 3)
					{
						putpixel(round(x), y, 8);
						dem = 0;
					}
					else
					{
						putpixel(round(x), y, BLACK);
					}
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
				dem++;
				if (dem == 3)
				{
					putpixel(round(x), y, 8);
					dem = 0;
				}
				else
				{
					putpixel(round(x), y, BLACK);
				}
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
					//cout << x << endl;
					dem++;
					if (dem == 3)
					{
						putpixel(round(x), y, 8);
						dem = 0;
					}
					else
					{
						putpixel(round(x), y, BLACK);
					}
				}
			}
			else
			{
				m = float(x1 - x2) / (y1 - y2);
				for (int i = y2; i<y1; i++)
				{
					y--;
					x -= m;
					dem++;
					if (dem == 3)
					{
						putpixel(round(x), y, 8);
						dem = 0;
					}
					else
					{
						putpixel(round(x), y, BLACK);
					}
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
				dem++;
				if (dem == 3)
				{
					putpixel(round(x), y, 8);
					dem = 0;
				}
				else
				{
					putpixel(round(x), y, BLACK);
				}
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
				dem++;
				if (dem == 3)
				{
					putpixel(round(x), y, 8);
					dem = 0;
				}
				else
				{
					putpixel(round(x), y, BLACK);
				}
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
				dem++;
				if (dem == 3)
				{
					putpixel(round(x), y, 8);
					dem = 0;
				}
				else
				{
					putpixel(round(x), y, BLACK);
				}
			}
		}
	}

}
void hetrucxyz()
{
	//LineDDAan(195, 297, 747, 297);//195,0,1298,594,8 747
	line(747, 297, 1298, 297);
	line(747, 0, 747, 297);
	//LineDDAan(747, 297, 747, 594);
	putpixel(747, 297, RED);//diem giua
	line(747, 297, 450, 594);
	int toadoduong = 0;
	int toadoam = 0;
	char td[100];
	setcolor(RED);
	setfillstyle(SOLID_FILL, 8);
	setcolor(BLACK);
	setbkcolor(8);
	settextstyle(10, 0, 1);
	_itoa(toadoduong, td, 10);
	int luiam = 697;
	//strcpy(td,);
	outtextxy(749, 302, td);
	for (int i = 797; i <= 1248; i = i + 50)//truc x
	{
		toadoduong += 50;
		line(i, 295, i, 300);
		_itoa(toadoduong, td, 10);
		outtextxy(i - 2, 302, td);
		
	}
	strcpy(td, "y");
	outtextxy(1238, 270, td);
	//297
	luiam = 247;
	toadoam = toadoduong = 0;
	for (int i = 347; i <= 594; i = i + 50)//truc y
	{

		toadoam += 50;
		LineDDA(745, luiam, 755, luiam);
		_itoa(toadoam, td, 10);
		outtextxy(755, luiam - 5, td);
		luiam = luiam - 50;

	}
	strcpy(td, "x");
	outtextxy(tam.x-20, 15, td);
	toadoduong = 0;
	luiam = 712;
	for (int i = 332; i <= 594; i += 35)// truc z line(747, 297, 450, 594);
	{
		toadoduong += 50;
		line(luiam-2,i-2, luiam+2,i+2);
		_itoa(toadoduong, td, 10);
		outtextxy (luiam + 4, i + 4, td);
		luiam -= 35;
	}
	strcpy(td, "z");
	outtextxy(712-35*7-15, 332+35*7-15, td);
	settextstyle(3, 0, 1);
}
// phan ve cac phep bien doi doi voi 2D 
void nhanMaTran2D(float toaDoThuan[3], float maTran[3][3], float toaDoAfter[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			toaDoAfter[i] = toaDoAfter[i] + toaDoThuan[j] * maTran[j][i];
		}
	}

}
toado2D tinhTien2D(toado2D P, float deltaX, float deltaY) {
	float maTran_tinhTien[3][3] = { { 1, 0, 0 },
									{ 0, 1, 0 },
									{ deltaX, deltaY, 1 }
								};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_tinhTien, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
toado2D doiXung2D_Ox(toado2D P) {
	float maTran_doiXungOx[3][3] = { { 1, 0, 0 },
									{ 0, -1, 0 },
									{ 0, 0, 1 }
									};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOx, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
toado2D doiXung2D_Oy(toado2D P) {
	float maTran_doiXungOy[3][3] = { { -1, 0, 0 },
									{ 0, 1, 0 },
									{ 0, 0, 1 }
									};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOy, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
toado2D doiXung2D_tamO(toado2D P) {
	float maTran_doiXungOy[3][3] = { { -1, 0, 0 },
									{ 0, -1, 0 },
									{ 0, 0, 1 }
									};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_doiXungOy, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
toado2D tyLe2D(toado2D P, int tyLe) {
	float maTran_tyLe[3][3] = { { tyLe, 0, 0 },
								{ 0, tyLe, 0 },
								{ 0, 0, 1 }
							};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_tyLe, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
toado2D xoay2D(toado2D P, float gocRadian) {
	float maTran_xoay[3][3] = { { cos(gocRadian), sin(gocRadian), 0 },
								{ -sin(gocRadian), cos(gocRadian), 0 },
								{ 0, 0, 1 }
								};
	float toaDoThuan[3] = { P.x, P.y, 1 };
	float toaDoAfter[3] = { 0, 0, 0 };
	nhanMaTran2D(toaDoThuan, maTran_xoay, toaDoAfter);
	toado2D Pafter;
	Pafter.x = toaDoAfter[0];
	Pafter.y = toaDoAfter[1];
	return Pafter;
}
///////////////////////////////////////////////////////////////////////
toado2D phongto(toado2D P, int tyLe, float deltaX, float deltaY) {
	toado2D Pafter = tyLe2D(P, tyLe);
	Pafter = tinhTien2D(Pafter, -deltaX, -deltaY);
	return Pafter;
}
//////////////////////////////////////////////////////////////////////////
void hientoado(int sd, toado2D A[],int couser)
{
	toado2D B[50];
	//B[30] = A[30];
	
		for (int i = 1; i <= sd; i++)
		{
			
			//cout << B[i].x << ";" << B[i].y << endl;
			if (couser == 1)
			{
				
				B[i] = A[i];
			}
			else
			{
				B[i] = ratoadouser(A[i]);
			}
		}

	settextstyle(8, 0, 2);
	setcolor(0);
	setbkcolor(7);
	char dr[100];
	char ar[100];
	char a[2];
	a[1] = 0;
	int x = 165;
	if (sd <= 8)
	{
		for (int i = 0; i < sd; i++)//195, 595
		{
			a[0] = TD[i];
			x = x + 120;
			outtextxy(x, 615, a);
			//settextstyle(0, 0, 1);
			strcpy(dr, "      ");
			outtextxy(x - 23, 640, dr);
			strcpy(dr, "|");
			strcat(dr, _itoa(B[i + 1].x, ar, 10));
			outtextxy(x - 23, 640, dr);
			strcpy(dr, "      ");
			outtextxy(x - 20, 660, dr);
			strcpy(dr, _itoa(B[i + 1].y, ar, 10));
			strcat(dr, "|");
			outtextxy(x - 20, 660, dr);
			//settextstyle(8, 0, 2);
		}
	}
	else
	{
		for (int i = 0; i < sd; i++)//195, 595
		{
			a[0] = TD[i];
			x = x + 55;
			outtextxy(x, 615, a);
			settextstyle(0, 0, 1);
			strcpy(dr, "      ");
			outtextxy(x - 23, 640, dr);
			strcpy(dr, "|");
			strcat(dr, _itoa(B[i + 1].x, ar, 10));
			outtextxy(x - 23, 640, dr);
			strcpy(dr, "      ");
			outtextxy(x - 20, 660, dr);
			strcpy(dr, _itoa(B[i + 1].y, ar, 10));
			strcat(dr, "|");
			outtextxy(x - 20, 660, dr);
			settextstyle(8, 0, 2);
		}
	}
	
}
void hienchu(toado2D A, char m[])
{
	
	A = ratoadomay(A);
	setbkcolor(8);
	outtextxy(A.x-6, A.y+3, m);
	//settextstyle(8, 0, 1);
}