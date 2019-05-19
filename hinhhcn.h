#pragma once
#pragma once
#include "mylab.h"
#include <math.h>

void hinhhcn() {
	char a[100];
	int x = 300;
	int y = 598;
	strcpy(a, "Moi ban nhap chieu dai(oy): ");
	textWrite(x, y, a, 7);
	char d1[30];
	textReadnumber(x, y, d1);
	int n1;
	n1 = atoi(d1);
	float d = n1;
	strcpy(a, "");
	textWriteln(x, y, a);
	strcpy(a, "Moi ban nhap chieu rong(oz): ");
	textWrite(x, y, a, 7);
	textReadnumber(x, y, d1);
	n1 = atoi(d1);
	float r = n1;
	strcpy(a, "");
	textWriteln(x, y, a);
	strcpy(a, "Moi ban nhap chieu cao(ox): ");
	textWrite(x, y, a, 7);
	textReadnumber(x, y, d1);
	n1 = atoi(d1);
	float c = n1;

	float sqrt2per2 = sqrt(2) / 2;
	float plusX = 747;
	float plusY = 297;
	//toado2D A, B, C, D, A1, F, G, H;
	LineDDA(plusX, plusY - c, plusX + d, plusY - c);//A'B'
	LineDDA(plusX + d, plusY - c, plusX + d, plusY);//B'C'
	LineDDAan(plusX + d, plusY, plusX, plusY);//C'D'
	LineDDAan(747, 297, 747, 297-c);//D'A'
	LineDDA(plusX - sqrt2per2*r, plusY - (c - sqrt2per2*r), plusX + d - sqrt2per2 * r, plusY - (c - sqrt2per2 * r));//AB
	LineDDA(plusX + d - sqrt2per2 * r, plusY - (c - sqrt2per2 * r), plusX + d - sqrt2per2 * r, plusY + sqrt2per2 * r);//BC
	LineDDA(plusX + d - sqrt2per2 * r, plusY + sqrt2per2 * r, plusX - sqrt2per2 * r, plusY + sqrt2per2 * r);//CD
	LineDDA(plusX - sqrt2per2 * r, plusY + sqrt2per2 * r, plusX - sqrt2per2 * r, plusY - (c - sqrt2per2 * r));//DA

	LineDDA(plusX - sqrt2per2 * r, plusY - (c - sqrt2per2 * r), plusX, plusY - c);//AA'
	LineDDA(plusX + d - sqrt2per2 * r, plusY - (c - sqrt2per2 * r), plusX + d, plusY - c);//BB'
	LineDDA(plusX + d - sqrt2per2 * r, plusY + sqrt2per2 * r, plusX + d, plusY);//CC'
	LineDDAan(plusX - sqrt2per2 * r, plusY + sqrt2per2 * r, plusX, plusY);//DD'
	trangthai();
	toado2D K[10];
	K[1].x = plusX;//A'
	K[1].y = plusY - c;
	K[2].x = plusX + d;//B'
	K[2].y = plusY - c;
	K[3].x = plusX + d;//C'
	K[3].y = plusY;
	K[4].x = plusX;//D'
	K[4].y = plusY;
	K[5].x = plusX - sqrt2per2 * r;//A
	K[5].y = plusY - (c - sqrt2per2 * r);
	K[6].x = plusX + d - sqrt2per2 * r;//B
	K[6].y = plusY - (c - sqrt2per2 * r);
	K[7].x = plusX + d - sqrt2per2 * r;//C
	K[7].y = plusY + sqrt2per2 * r;
	K[8].x = plusX - sqrt2per2 * r;//D
	K[8].y = plusY + sqrt2per2 * r;
	hientoado(8, K, 0);
	char M[10];
	M[1] = 0;
	settextstyle(8, 0, 1);
	for (int i = 0; i < 8; i++)
	{
		M[0] = TD[i];
		//cout << A[i+1].x<< A[i + 1].y << endl;
		setcolor(0);
		setbkcolor(8);
		outtextxy(K[i + 1].x - 8, K[i + 1].y - 8, M);
	}
}