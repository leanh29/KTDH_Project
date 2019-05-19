#pragma once
#include "mylab.h"
void hinhhv() {
	char a[100];
	int x = 300;
	int y = 598;
	strcpy(a, "Moi ban nhap canh hinh hop vuong: ");
	textWrite(x, y, a, 7);
	char c[30];
	textReadnumber(x, y, c);
	int r;
	r = atoi(c);
	float l = r;
	float sqrt2per2 = sqrt(2) / 2;
	float plusX = 747;
	float plusY = 297;
	toado2D A, B, C, D, E, F, G, H;
	A.x = plusX - sqrt2per2 * l + 1;//vi phep lam tron lam mat di 1 pixel
	A.y = plusY - (l - sqrt2per2 * l);

	B.x = plusX + l - sqrt2per2 * l + 1;
	B.y = plusY - (l - sqrt2per2 * l);

	C.x = plusX + l - sqrt2per2 * l + 1;
	C.y = plusY + sqrt2per2 * l;

	D.x = plusX - sqrt2per2 * l + 1;
	D.y = plusY + sqrt2per2 * l;

	E.x = plusX;
	E.y = plusY - l;

	F.x = l + plusX;
	F.y = plusY - l;

	G.x = l + plusX;
	G.y = plusY;

	H.x = plusX;
	H.y = plusY;

	//			x1							y1								x2							y2
	LineDDA(E.x, E.y, F.x, F.y);//EF
	LineDDA(F.x, F.y, G.x, G.y);//FG
	LineDDAan(G.x, G.y, H.x, H.y);//GH
	LineDDAan(H.x, H.y, E.x, E.y);//HE
	LineDDA(A.x, A.y, B.x, B.y);//AB
	LineDDA(B.x, B.y, C.x, C.y);//BC
	LineDDA(C.x, C.y, D.x, D.y);//CD
	LineDDA(D.x, D.y, A.x, A.y);//DA

	LineDDA(A.x, A.y, E.x, E.y);//AE
	LineDDA(B.x, B.y, F.x, F.y);//BF
	LineDDA(C.x, C.y, G.x, G.y);//CG
	LineDDAan(D.x, D.y, H.x, H.y);//DH
	toado2D K[10];
	K[1] = A;
	K[2] = B;
	K[3] = C;
	K[4] = D;
	K[5] = E;
	K[6] = F;
	K[7] = G;
	K[8] = H;
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
		outtextxy(K[i+1].x - 8, K[i+1].y - 8, M);
	}
}
