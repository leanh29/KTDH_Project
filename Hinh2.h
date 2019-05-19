#include "mylab.h"
void vetamgiac(toado2D a, toado2D b, toado2D c,int color) {
	a = ratoadomay(a);
	b = ratoadomay(b);
	c = ratoadomay(c);
	setcolor(color);
	line(a.x, a.y, b.x, b.y);
	line(b.x, b.y, c.x, c.y);
	line(c.x, c.y, a.x, a.y);
}
void vevat2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t,int color) {
	vetamgiac(a, b, j,color);
	//
	LineDDA2(c, d,color);
	LineDDA2(b, c, color);
	LineDDA2(a, d, color);
	//
	LineDDA2(a, i, color);
	LineDDA2(j, h, color);
	LineDDA2(d, e, color);
	LineDDA2(i, e, color);
	//
	LineDDA2(k, l, color);
	LineDDA2(l, m, color);
	LineDDA2(m, n, color);
	LineDDA2(n, k, color);
	//
	LineDDA2(o, p, color);
	LineDDA2(p, f, color);
	LineDDA2(f, g, color);
	LineDDA2(g, o, color);
	//
	LineDDA2(s, r, color);
	LineDDA2(r, q, color);
	LineDDA2(q, t, color);
	LineDDA2(t, s, color);
	toado2D A[21];
	A[1] = a;
	A[2] = b;
	A[3] = c;
	A[4] = d;
	A[5] = e;
	A[6] = f;
	A[7] = g;
	A[8] = h;
	A[9] = i;
	A[10] = j;
	A[11] = k;
	A[12] = l;
	A[13] = m;
	A[14] = n;
	A[15] = o;
	A[16] = p;
	A[17] = q;
	A[18] = r;
	A[19] = s;
	A[20] = t;
	hientoado(20, A, 1);
	//settextstyle(0, 0, 1);
	char M[10];
	M[1] = 0;
	settextstyle(8, 0, 1);
	for (int i = 0; i < 19; i++)
	{
		M[0] = TD[i];
		//cout << A[i+1].x<< A[i + 1].y << endl;
		setcolor(color);
		settextstyle(0, 0, 1);
		hienchu(A[i+1], M);
		settextstyle(8, 0, 1);
	}
	
}
void tinhtienvat2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	float deltaX = 400;//0->400
	float deltaY = 0;
	for (deltaX = 0; deltaX <= 400; deltaX += 20)
	{
		a2 = tinhTien2D(a, deltaX, deltaY);
		b2 = tinhTien2D(b, deltaX, deltaY);
		c2 = tinhTien2D(c, deltaX, deltaY);
		d2 = tinhTien2D(d, deltaX, deltaY);
		e2 = tinhTien2D(e, deltaX, deltaY);
		f2 = tinhTien2D(f, deltaX, deltaY);
		g2 = tinhTien2D(g, deltaX, deltaY);
		h2 = tinhTien2D(h, deltaX, deltaY);
		i2 = tinhTien2D(i, deltaX, deltaY);
		j2 = tinhTien2D(j, deltaX, deltaY);
		k2 = tinhTien2D(k, deltaX, deltaY);
		l2 = tinhTien2D(l, deltaX, deltaY);
		m2 = tinhTien2D(m, deltaX, deltaY);
		n2 = tinhTien2D(n, deltaX, deltaY);
		o2 = tinhTien2D(o, deltaX, deltaY);
		p2 = tinhTien2D(p, deltaX, deltaY);
		q2 = tinhTien2D(q, deltaX, deltaY);
		r2 = tinhTien2D(r, deltaX, deltaY);
		s2 = tinhTien2D(s, deltaX, deltaY);
		t2 = tinhTien2D(t, deltaX, deltaY);

		vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
		Sleep(500);
		vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, 8);
		if (deltaX <= 140)
		{
			vevat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, BLACK);
		}
		else if (deltaX == 400)
		{
			vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
		}
		//cout << deltaX << endl;
		if (deltaX <= 240&& deltaX >= 200)
		{
			setcolor(BLACK);
			hetrucxy();
		}
	}
	
}
void doixungvat2_Ox(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	a2 = doiXung2D_Ox(a);
	b2 = doiXung2D_Ox(b);
	c2 = doiXung2D_Ox(c);
	d2 = doiXung2D_Ox(d);
	e2 = doiXung2D_Ox(e);
	f2 = doiXung2D_Ox(f);
	g2 = doiXung2D_Ox(g);
	h2 = doiXung2D_Ox(h);
	i2 = doiXung2D_Ox(i);
	j2 = doiXung2D_Ox(j);
	k2 = doiXung2D_Ox(k);
	l2 = doiXung2D_Ox(l);
	m2 = doiXung2D_Ox(m);
	n2 = doiXung2D_Ox(n);
	o2 = doiXung2D_Ox(o);
	p2 = doiXung2D_Ox(p);
	q2 = doiXung2D_Ox(q);
	r2 = doiXung2D_Ox(r);
	s2 = doiXung2D_Ox(s);
	t2 = doiXung2D_Ox(t);

	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2,BLACK);
}
void doixungvat2_Oy(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	a2 = doiXung2D_Oy(a);
	b2 = doiXung2D_Oy(b);
	c2 = doiXung2D_Oy(c);
	d2 = doiXung2D_Oy(d);
	e2 = doiXung2D_Oy(e);
	f2 = doiXung2D_Oy(f);
	g2 = doiXung2D_Oy(g);
	h2 = doiXung2D_Oy(h);
	i2 = doiXung2D_Oy(i);
	j2 = doiXung2D_Oy(j);
	k2 = doiXung2D_Oy(k);
	l2 = doiXung2D_Oy(l);
	m2 = doiXung2D_Oy(m);
	n2 = doiXung2D_Oy(n);
	o2 = doiXung2D_Oy(o);
	p2 = doiXung2D_Oy(p);
	q2 = doiXung2D_Oy(q);
	r2 = doiXung2D_Oy(r);
	s2 = doiXung2D_Oy(s);
	t2 = doiXung2D_Oy(t);

	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
}
void doixungvat2_tamO(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	a2 = doiXung2D_tamO(a);
	b2 = doiXung2D_tamO(b);
	c2 = doiXung2D_tamO(c);
	d2 = doiXung2D_tamO(d);
	e2 = doiXung2D_tamO(e);
	f2 = doiXung2D_tamO(f);
	g2 = doiXung2D_tamO(g);
	h2 = doiXung2D_tamO(h);
	i2 = doiXung2D_tamO(i);
	j2 = doiXung2D_tamO(j);
	k2 = doiXung2D_tamO(k);
	l2 = doiXung2D_tamO(l);
	m2 = doiXung2D_tamO(m);
	n2 = doiXung2D_tamO(n);
	o2 = doiXung2D_tamO(o);
	p2 = doiXung2D_tamO(p);
	q2 = doiXung2D_tamO(q);
	r2 = doiXung2D_tamO(r);
	s2 = doiXung2D_tamO(s);
	t2 = doiXung2D_tamO(t);

	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
	
}
void phongtovat2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	int tyLe = 2;
	float deltaX = a.x * (tyLe - 1);
	float deltaY = a.y * (tyLe - 1);
	a2 = phongto(a, tyLe, deltaX, deltaY);
	b2 = phongto(b, tyLe, deltaX, deltaY);
	c2 = phongto(c, tyLe, deltaX, deltaY);
	d2 = phongto(d, tyLe, deltaX, deltaY);
	e2 = phongto(e, tyLe, deltaX, deltaY);
	f2 = phongto(f, tyLe, deltaX, deltaY);
	g2 = phongto(g, tyLe, deltaX, deltaY);
	h2 = phongto(h, tyLe, deltaX, deltaY);
	i2 = phongto(i, tyLe, deltaX, deltaY);
	j2 = phongto(j, tyLe, deltaX, deltaY);
	k2 = phongto(k, tyLe, deltaX, deltaY);
	l2 = phongto(l, tyLe, deltaX, deltaY);
	m2 = phongto(m, tyLe, deltaX, deltaY);
	n2 = phongto(n, tyLe, deltaX, deltaY);
	o2 = phongto(o, tyLe, deltaX, deltaY);
	p2 = phongto(p, tyLe, deltaX, deltaY);
	q2 = phongto(q, tyLe, deltaX, deltaY);
	r2 = phongto(r, tyLe, deltaX, deltaY);
	s2 = phongto(s, tyLe, deltaX, deltaY);
	t2 = phongto(t, tyLe, deltaX, deltaY);

	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
}
void xoayvat2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t, float gocRadian) {
	toado2D a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2;
	a2 = xoay2D(a, gocRadian);
	b2 = xoay2D(b, gocRadian);
	c2 = xoay2D(c, gocRadian);
	d2 = xoay2D(d, gocRadian);
	e2 = xoay2D(e, gocRadian);
	f2 = xoay2D(f, gocRadian);
	g2 = xoay2D(g, gocRadian);
	h2 = xoay2D(h, gocRadian);
	i2 = xoay2D(i, gocRadian);
	j2 = xoay2D(j, gocRadian);
	k2 = xoay2D(k, gocRadian);
	l2 = xoay2D(l, gocRadian);
	m2 = xoay2D(m, gocRadian);
	n2 = xoay2D(n, gocRadian);
	o2 = xoay2D(o, gocRadian);
	p2 = xoay2D(p, gocRadian);
	q2 = xoay2D(q, gocRadian);
	r2 = xoay2D(r, gocRadian);
	s2 = xoay2D(s, gocRadian);
	t2 = xoay2D(t, gocRadian);

	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, BLACK);
	Sleep(550);
	vevat2(a2, b2, c2, d2, e2, f2, g2, h2, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, 8);
	
}
void doixunghv2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t){
	char a1[100];
	int c1;
	int x4 = 300;
	int y4 = 598;
	strcpy(a1, "Chon truc toa do ban muon lay doi xung Ox/Oy/O [1/2/bat ky]: ");
	textWrite(x4, y4, a1, 7);
	char dodai[30];
	textReadnumber(x4, y4, dodai);
	c1 = atoi(dodai);
	if (c1 == 1)
	{
		doixungvat2_Ox(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	}
	else if (c1 == 2)
	{
		doixungvat2_Oy(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	}
	else
	{
		doixungvat2_tamO(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	}
}

void biendoihv2(toado2D a, toado2D b, toado2D c, toado2D d, toado2D e, toado2D f, toado2D g, toado2D h, toado2D i,
	toado2D j, toado2D k, toado2D l, toado2D m, toado2D n, toado2D o, toado2D p, toado2D q, toado2D r, toado2D s,
	toado2D t)
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
				tinhtienvat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
				//system("pause");
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 60 && y1 <= 140)//100, 60, 180, 140, 9
			{
				trangthai();
				doixunghv2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
				menucacphep();
			}
			else if (x1 >= 10 && x1 <= 90 && y1 >= 145 && y1 <= 225)//10, 145, 90, 225, 9
			{
				trangthai();
				phongtovat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
				menucacphep();
			}
			else if (x1 >= 100 && x1 <= 180 && y1 >= 145 && y1 <= 225)//100, 145, 180, 225, 9
			{
				vehinhchunhatvien(195, 0, 1298, 594, 8);
				hetrucxy();
				vevat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, BLACK);
				float PI = 3.14159;;
				float goc = 0;
				for (float goc = 20; goc < 360; goc += 20) {
					xoayvat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, goc * PI / 180);	
					//Sleep(500);
				}
				setcolor(BLACK);
				hetrucxy();
				vevat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, BLACK);
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
void veh2() {
	//ban dau gan toa do nguoi dung cho cac diem cho de hieu. Cac thuat toan se tu tinh ra toa do may roi tu ve
	//chon A la tam cua ngoi nha, tat ca nhung dinh khac deu phai co the suy ra duoc tu A
	//nhu vay khi ta thay doi dinh A, lap tuc toan bo can nha se di chuyen
	toado2D a = { -200, -60 };
	toado2D b = tinhTien2D(a, 25, 25);
	toado2D j = tinhTien2D(a, 50, 0);
	//
	toado2D c = tinhTien2D(b, 100, 0);
	toado2D d = tinhTien2D(j, 100, 0);
	//
	toado2D i = tinhTien2D(a, 0, -100);
	toado2D h = tinhTien2D(j, 0, -100);
	toado2D e = tinhTien2D(d, 0, -100);
	//
	toado2D l = tinhTien2D(a, 10, -25);
	toado2D k = tinhTien2D(l, 0, -30);
	toado2D m = tinhTien2D(l, 30, 0);
	toado2D n = tinhTien2D(l, 30, -30);
	//
	toado2D o = tinhTien2D(j, 10, -25);
	toado2D p = tinhTien2D(o, 30, 0);
	toado2D f = tinhTien2D(o, 30, -75);
	toado2D g = tinhTien2D(o, 0, -75);
	//
	toado2D s = tinhTien2D(d, -10, -25);
	toado2D r = tinhTien2D(s, -30, 0);
	toado2D q = tinhTien2D(s, -30, -30);
	toado2D t = tinhTien2D(s, 0, -30);
	//
	vevat2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, BLACK);
	biendoihv2(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	
}