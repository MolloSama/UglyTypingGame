#define _CRT_SECURE_NO_WARNINGS
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <time.h>
void welcome()
{
	setbkmode(TRANSPARENT);
	cleardevice();
	loadimage(NULL, "1.jpg");
	setcolor(YELLOW);
	settextstyle(80, 0, "黑体");
	outtextxy(360, 100, "打字吧！程序员");
	setcolor(WHITE);
	settextstyle(32, 0, "微软雅黑");
	outtextxy(200, 250, "——这是一款简单的打字小游戏");
	outtextxy(200, 300, "——专为程序员提升敲代码速度而使用");
	outtextxy(200, 350, "——分为三种模式、三种不同难度的代码");
	outtextxy(200, 400, "——游戏过程中按下ESC键可以返回主菜单");  


	IMAGE img1, img2;
	loadimage(&img1, "61.jpg", 360, 200);
	loadimage(&img2, "62.jpg", 360, 200);
	putimage(0, 520, &img1);
	putimage(920,520, &img2);

	int c = 255;
	while (!_kbhit())
	{
		setbkmode(TRANSPARENT);  
		LOGFONT f;
		gettextstyle(&f);                   
		f.lfHeight = 48;                 
		f.lfQuality = ANTIALIASED_QUALITY;   
		settextstyle(&f);
		setcolor(RGB(0, c, c));
		outtextxy(500, 500, "按下任意键继续");
		c -= 8;
		if (c < 0) c = 255;
		Sleep(40);
	}
	_getch();
	cleardevice();
}
void goodbye()
{
	setbkmode(TRANSPARENT);
	cleardevice();
	setcolor(YELLOW);
	settextstyle(48, 0, "黑体");
	outtextxy(104, 180, "66");
	_getch();
}

void jianpan()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205,10,10);
	fillroundrect(35, 210, 135, 260,10,10);
	fillroundrect(740, 45, 810, 95,10,10);
	fillroundrect(725, 155, 810, 205,10,10);
	fillroundrect(690, 210, 810, 260,10,10);
	fillroundrect(35, 265, 135, 315,10,10);
	fillroundrect(690, 265, 810, 315,10,10);
	fillroundrect(140, 265, 685, 315,10,10);

	setbkmode(TRANSPARENT); 
	LOGFONT f;
	gettextstyle(&f);                 
	f.lfHeight = 16;            
	f.lfQuality = ANTIALIASED_QUALITY;   
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     printf(\"hello world\");"));
	outtextxy(55, 420, _T("     return 0;"));
	outtextxy(55, 440, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160,_T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));
	

}
void flash(int x,int y)
{
	setfillcolor(YELLOW);
	floodfill(x, y, WHITE);
	Sleep(20);
	setfillcolor(DARKGRAY);
	floodfill(x, y, WHITE);
}
void daji()
{
	char x1[] = { '#','i','n','c','l','u','d','e','<','s','t','d','i','o','.','h','>',13,'i','n','t',' ','m','a','i','n','(',')',13,'{',13,'p','r','i','n','t','f','(',34,'h','e','l','l','o',' ','w','o','r','l','d',34,')',';',13,'r','e','t','u','r','n',' ','0',';',13,'}' };
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 65; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}

				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);

				if (Key == 27) break;

				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg",100,100);
				loadimage(&img2, "12.jpg",100,100);
				loadimage(&img3, "13.jpg",100,100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg",100,100);
				loadimage(&img6, "16.jpg",100,100);
				loadimage(&img7, "17.jpg",100,100);
				loadimage(&img8, "18.jpg",100,100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);



				if (j == 65)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(LIGHTMAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j-k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755,350, u);

					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);

					
				}
				if (j == 65)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}

	}
}
void jianpan2()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205, 10, 10);
	fillroundrect(35, 210, 135, 260, 10, 10);
	fillroundrect(740, 45, 810, 95, 10, 10);
	fillroundrect(725, 155, 810, 205, 10, 10);
	fillroundrect(690, 210, 810, 260, 10, 10);
	fillroundrect(35, 265, 135, 315, 10, 10);
	fillroundrect(690, 265, 810, 315, 10, 10);
	fillroundrect(140, 265, 685, 315, 10, 10);

	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 16;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     int a,b;"));
	outtextxy(55, 420, _T("     scanf(\"%d %d\",&a,&b);"));
	outtextxy(55, 440, _T("     printf(\"%d\",a+b);"));
	outtextxy(55, 460, _T("     return 0;"));
	outtextxy(55, 480, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160, _T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));

}
void daji2()
{
	char x1[] = { '#','i','n','c','l','u','d','e','<','s','t','d','i','o','.','h','>',13,'i','n','t',' ','m','a','i','n','(',')',13,'{',13,'i','n','t',' ','a',',','b',';',13,'s','c','a','n','f','(',34,'%','d',' ','%','d',34,',','&','a',',','&','b',')',';',13,'p','r','i','n','t','f','(',34,'%','d',34,',','a','+','b',')',';',13,'r','e','t','u','r','n',' ','0',';',13,'}' };
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 91; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}
				if (Key == 27) break;
				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);


				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg", 100, 100);
				loadimage(&img2, "12.jpg", 100, 100);
				loadimage(&img3, "13.jpg", 100, 100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg", 100, 100);
				loadimage(&img6, "16.jpg", 100, 100);
				loadimage(&img7, "17.jpg", 100, 100);
				loadimage(&img8, "18.jpg", 100, 100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);


				if (j == 91)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(MAGENTA);
					settextstyle(48, 0, "黑体");
					setbkmode(TRANSPARENT);
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, u);


					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);

				}
				if (j == 91)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}

	}
}
void jianpan3()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205, 10, 10);
	fillroundrect(35, 210, 135, 260, 10, 10);
	fillroundrect(740, 45, 810, 95, 10, 10);
	fillroundrect(725, 155, 810, 205, 10, 10);
	fillroundrect(690, 210, 810, 260, 10, 10);
	fillroundrect(35, 265, 135, 315, 10, 10);
	fillroundrect(690, 265, 810, 315, 10, 10);
	fillroundrect(140, 265, 685, 315, 10, 10);

	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 16;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     int i,a[10];"));
	outtextxy(55, 420, _T("     for(i=0;i<10;i++)"));
	outtextxy(55, 440, _T("     a[i]=i;"));
	outtextxy(55, 460, _T("     for(i=9;i>=0;i--)"));
	outtextxy(55, 480, _T("     printf(\"%d\",a[i]);"));
	outtextxy(55, 500, _T("     printf(\"\\n\");"));
	outtextxy(55, 520, _T("     return 0;"));
	outtextxy(55, 540, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160, _T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));

}
void daji3()
{
	char x1[] = "#include<stdio.h>\rint main()\r{\rint i,a[10];\rfor(i=0;i<10;i++)\ra[i]=i;\rfor(i=9;i>=0;i--)\rprintf(\"%d\",a[i]);\rprintf(\"\n\");\rreturn 0;\r}";
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 132; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}
				if (Key == 27) break;
				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);


				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg", 100, 100);
				loadimage(&img2, "12.jpg", 100, 100);
				loadimage(&img3, "13.jpg", 100, 100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg", 100, 100);
				loadimage(&img6, "16.jpg", 100, 100);
				loadimage(&img7, "17.jpg", 100, 100);
				loadimage(&img8, "18.jpg", 100, 100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);


				if (j == 132)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(MAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, u);

					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);

				}
				if (j == 132)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}
	}
}
void jianpan11()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205, 10, 10);
	fillroundrect(35, 210, 135, 260, 10, 10);
	fillroundrect(740, 45, 810, 95, 10, 10);
	fillroundrect(725, 155, 810, 205, 10, 10);
	fillroundrect(690, 210, 810, 260, 10, 10);
	fillroundrect(35, 265, 135, 315, 10, 10);
	fillroundrect(690, 265, 810, 315, 10, 10);
	fillroundrect(140, 265, 685, 315, 10, 10);

	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 16;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     printf(\"hello world\");"));
	outtextxy(55, 420, _T("     return 0;"));
	outtextxy(55, 440, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160, _T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));


}
void daji11()
{
	char x1[] = { '#','i','n','c','l','u','d','e','<','s','t','d','i','o','.','h','>',13,'i','n','t',' ','m','a','i','n','(',')',13,'{',13,'p','r','i','n','t','f','(',34,'h','e','l','l','o',' ','w','o','r','l','d',34,')',';',13,'r','e','t','u','r','n',' ','0',';',13,'}' };
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 65; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}
				if (Key == 27) break;
				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);

				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg", 100, 100);
				loadimage(&img2, "12.jpg", 100, 100);
				loadimage(&img3, "13.jpg", 100, 100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg", 100, 100);
				loadimage(&img6, "16.jpg", 100, 100);
				loadimage(&img7, "17.jpg", 100, 100);
				loadimage(&img8, "18.jpg", 100, 100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);



				if (j == 65)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(LIGHTMAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, u);

					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);


				}
				if (k == 11)
				{
					char r[10];
					cleardevice();
					loadimage(NULL, "7.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(280, 100, "很遗憾没有通过挑战");
					setcolor(MAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, r, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, r);


					IMAGE img41, img42, img43;
					loadimage(&img41, "41.jpg", 150, 150);
					loadimage(&img42, "42.jpg", 150, 150);
					loadimage(&img43, "43.jpg", 150, 150);
					putimage(300, 450, &img41);
					putimage(565, 450, &img42);
					putimage(830, 450, &img43);
				}
				if (j == 65||k==11)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}

	}
}
void jianpan12()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205, 10, 10);
	fillroundrect(35, 210, 135, 260, 10, 10);
	fillroundrect(740, 45, 810, 95, 10, 10);
	fillroundrect(725, 155, 810, 205, 10, 10);
	fillroundrect(690, 210, 810, 260, 10, 10);
	fillroundrect(35, 265, 135, 315, 10, 10);
	fillroundrect(690, 265, 810, 315, 10, 10);
	fillroundrect(140, 265, 685, 315, 10, 10);

	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 16;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     int a,b;"));
	outtextxy(55, 420, _T("     scanf(\"%d %d\",&a,&b);"));
	outtextxy(55, 440, _T("     printf(\"%d\",a+b);"));
	outtextxy(55, 460, _T("     return 0;"));
	outtextxy(55, 480, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160, _T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));

}
void daji12()
{
	char x1[] = { '#','i','n','c','l','u','d','e','<','s','t','d','i','o','.','h','>',13,'i','n','t',' ','m','a','i','n','(',')',13,'{',13,'i','n','t',' ','a',',','b',';',13,'s','c','a','n','f','(',34,'%','d',' ','%','d',34,',','&','a',',','&','b',')',';',13,'p','r','i','n','t','f','(',34,'%','d',34,',','a','+','b',')',';',13,'r','e','t','u','r','n',' ','0',';',13,'}' };
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 91; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}
				if (Key == 27) break;
				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);


				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg", 100, 100);
				loadimage(&img2, "12.jpg", 100, 100);
				loadimage(&img3, "13.jpg", 100, 100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg", 100, 100);
				loadimage(&img6, "16.jpg", 100, 100);
				loadimage(&img7, "17.jpg", 100, 100);
				loadimage(&img8, "18.jpg", 100, 100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);


				if (j == 91)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(MAGENTA);
					settextstyle(48, 0, "黑体");
					setbkmode(TRANSPARENT);
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, u);


					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);

				}
				if (k == 11)
				{
					char r[10];
					cleardevice();
					loadimage(NULL, "7.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(280, 100, "很遗憾没有通过挑战");
					setcolor(MAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, r, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, r);


					IMAGE img41, img42, img43;
					loadimage(&img41, "41.jpg", 150, 150);
					loadimage(&img42, "42.jpg", 150, 150);
					loadimage(&img43, "43.jpg", 150, 150);
					putimage(300, 450, &img41);
					putimage(565, 450, &img42);
					putimage(830, 450, &img43);
				}
				if (j == 91||k==11)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}

	}
}
void jianpan13()
{
	int h, i, j, k;
	int l;
	char a[13] = { '1','2','3','4','5','6','7','8','9','0','-','+' };
	char b[13] = { '!','@','#','$','%','^','&','*','(',')','_','=' };
	char c[11] = { 'Q','W','E','R','T','Y','U','I','O','P' };
	char t[4] = { '{','}','|' };
	char d[4] = { '[',']','\\' };
	char e[12] = { 'A','S','D','F','G','H','J','K','L',';','"' };
	char v[8] = { 'Z','X','C','V','B','N','M' };
	char u[4] = { '<','>','?' };
	char g[4] = { ',','.','/' };

	loadimage(NULL, "2.jpg");
	setfillcolor(DARKGRAY);
	setlinecolor(WHITE);
	for (h = 0; h < 12; h++)
		fillroundrect(80 + h * 55, 45, 130 + h * 55, 95, 10, 10);
	for (i = 0; i < 13; i++)
		fillroundrect(100 + i * 55, 100, 150 + i * 55, 150, 10, 10);
	for (j = 0; j < 11; j++)
		fillroundrect(120 + j * 55, 155, 170 + j * 55, 205, 10, 10);
	for (k = 0; k < 10; k++)
		fillroundrect(140 + k * 55, 210, 190 + k * 55, 260, 10, 10);

	fillroundrect(35, 45, 75, 95, 10, 10);
	fillroundrect(35, 100, 95, 150, 10, 10);
	fillroundrect(35, 155, 115, 205, 10, 10);
	fillroundrect(35, 210, 135, 260, 10, 10);
	fillroundrect(740, 45, 810, 95, 10, 10);
	fillroundrect(725, 155, 810, 205, 10, 10);
	fillroundrect(690, 210, 810, 260, 10, 10);
	fillroundrect(35, 265, 135, 315, 10, 10);
	fillroundrect(690, 265, 810, 315, 10, 10);
	fillroundrect(140, 265, 685, 315, 10, 10);

	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 16;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);

	for (l = 0; l < 12; l++)
		outtextxy(100 + l * 55, 75, a[l]);
	for (l = 0; l<12; l++)
		outtextxy(100 + l * 55, 50, b[l]);
	for (l = 0; l < 10; l++)
		outtextxy(120 + l * 55, 120, c[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 125, d[l]);
	for (l = 0; l<3; l++)
		outtextxy(670 + l * 55, 105, t[l]);
	for (l = 0; l < 11; l++)
		outtextxy(140 + l * 55, 175, e[l]);
	for (l = 0; l < 7; l++)
		outtextxy(160 + l * 55, 230, v[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 220, u[l]);
	for (l = 0; l < 3; l++)
		outtextxy(545 + l * 55, 235, g[l]);

	outtextxy(55, 120, _T("Tab"));
	outtextxy(42, 175, _T("Caps Lock"));
	outtextxy(750, 175, _T("Enter"));
	outtextxy(70, 230, _T("Shift"));
	outtextxy(735, 230, _T("Shift"));
	outtextxy(75, 285, _T("Ctrl"));
	outtextxy(740, 285, _T("Ctrl"));
	outtextxy(43, 65, _T("Esc"));
	outtextxy(755, 65, _T("Delete"));

	settextstyle(24, 0, "微软雅黑");
	outtextxy(55, 340, _T("#include<stdio.h>"));
	outtextxy(55, 360, _T("int main()"));
	outtextxy(55, 380, _T("{"));
	outtextxy(55, 400, _T("     int i,a[10];"));
	outtextxy(55, 420, _T("     for(i=0;i<10;i++)"));
	outtextxy(55, 440, _T("     a[i]=i;"));
	outtextxy(55, 460, _T("     for(i=9;i>=0;i--)"));
	outtextxy(55, 480, _T("     printf(\"%d\",a[i]);"));
	outtextxy(55, 500, _T("     printf(\"\\n\");"));
	outtextxy(55, 520, _T("     return 0;"));
	outtextxy(55, 540, _T("}"));

	settextstyle(48, 0, "黑体");
	LOGFONT z;
	gettextstyle(&z);
	z.lfHeight = 48;
	z.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&z);
	setcolor(WHITE);
	outtextxy(900, 160, _T("正确"));
	outtextxy(1100, 160, _T("错误"));
	outtextxy(935, 230, _T("0"));
	outtextxy(1135, 230, _T("0"));

}
void daji13()
{
	char x1[] = "#include<stdio.h>\rint main()\r{\rint i,a[10];\rfor(i=0;i<10;i++)\ra[i]=i;\rfor(i=9;i>=0;i--)\rprintf(\"%d\",a[i]);\rprintf(\"\n\");\rreturn 0;\r}";
	char Key = 0;
	int i, j = 0, k = 0;
	while (true)
	{
		if (_kbhit())
		{


			for (i = 0; i < 132; i++)
			{
				Key = _getch();
				if (Key == x1[i])
				{

					char s[10];
					j++;
					_itoa(j, s, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(935, 230, s);
				}
				else if (Key != x1[i])
				{
					char b[10];
					k++;
					if (Key == 34 || Key == 39) k--;
					i--;
					_itoa(k, b, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					outtextxy(1135, 230, b);
				}
				if (Key == 27) break;
				if (Key == 49 || Key == 33) flash(85, 50);
				if (Key == 50) flash(140, 50);
				if (Key == 51 || Key == 35) flash(195, 50);
				if (Key == 52) flash(250, 50);
				if (Key == 53 || Key == 37) flash(305, 50);
				if (Key == 54) flash(360, 50);
				if (Key == 55 || Key == 38) flash(415, 50);
				if (Key == 56 || Key == 42) flash(470, 50);
				if (Key == 57 || Key == 40) flash(525, 50);
				if (Key == 48 || Key == 41) flash(580, 50);
				if (Key == 45 || Key == 95) flash(635, 50);
				if (Key == 61 || Key == 43) flash(690, 50);
				if (Key == 8) flash(745, 50);

				if (Key == 81 || Key == 113) flash(105, 105);
				if (Key == 87 || Key == 119) flash(160, 105);
				if (Key == 69 || Key == 101) flash(215, 105);
				if (Key == 82 || Key == 114) flash(270, 105);
				if (Key == 84 || Key == 116) flash(325, 105);
				if (Key == 89 || Key == 121) flash(380, 105);
				if (Key == 85 || Key == 117) flash(435, 105);
				if (Key == 73 || Key == 105) flash(490, 105);
				if (Key == 79 || Key == 111) flash(545, 105);
				if (Key == 80 || Key == 112) flash(600, 105);
				if (Key == 91 || Key == 123) flash(655, 105);
				if (Key == 93 || Key == 125) flash(710, 105);
				if (Key == 92 || Key == 124) flash(765, 105);

				if (Key == 65 || Key == 97) flash(125, 160);
				if (Key == 83 || Key == 115)flash(180, 160);
				if (Key == 68 || Key == 100)flash(235, 160);
				if (Key == 70 || Key == 102)flash(290, 160);
				if (Key == 71 || Key == 103)flash(345, 160);
				if (Key == 72 || Key == 104)flash(400, 160);
				if (Key == 74 || Key == 106)flash(455, 160);
				if (Key == 75 || Key == 107)flash(510, 160);
				if (Key == 76 || Key == 108)flash(565, 160);
				if (Key == 58 || Key == 59)flash(620, 160);
				if (Key == 34 || Key == 39)flash(675, 160);
				if (Key == 13) flash(730, 160);

				if (Key == 90 || Key == 122)flash(145, 215);
				if (Key == 88 || Key == 120)flash(200, 215);
				if (Key == 67 || Key == 99)flash(255, 215);
				if (Key == 86 || Key == 118)flash(310, 215);
				if (Key == 66 || Key == 98)flash(365, 215);
				if (Key == 78 || Key == 110)flash(420, 215);
				if (Key == 77 || Key == 109)flash(475, 215);
				if (Key == 60 || Key == 44)flash(530, 215);
				if (Key == 62 || Key == 46)flash(585, 215);
				if (Key == 63 || Key == 47) flash(640, 215);

				if (Key == 32) flash(145, 275);


				IMAGE img1, img2, img3, img4, img5, img6, img7, img8, img11, img12, img13, img14, img15, img16, img17, img18, img19, img20;
				loadimage(&img1, "11.jpg", 100, 100);
				loadimage(&img2, "12.jpg", 100, 100);
				loadimage(&img3, "13.jpg", 100, 100);
				loadimage(&img4, "14.jpg", 100, 100);
				loadimage(&img5, "15.jpg", 100, 100);
				loadimage(&img6, "16.jpg", 100, 100);
				loadimage(&img7, "17.jpg", 100, 100);
				loadimage(&img8, "18.jpg", 100, 100);
				loadimage(&img11, "21.jpg", 130, 100);
				loadimage(&img12, "22.jpg", 100, 100);
				loadimage(&img13, "23.jpg", 100, 100);
				loadimage(&img14, "24.jpg", 100, 100);
				loadimage(&img15, "25.jpg", 100, 100);
				loadimage(&img16, "26.jpg", 100, 100);
				loadimage(&img17, "27.jpg", 100, 100);
				loadimage(&img18, "28.jpg", 100, 100);
				loadimage(&img19, "29.jpg", 100, 100);
				loadimage(&img20, "30.jpg", 180, 100);

				if (j == 3) putimage(340, 350, &img1);
				if (j == 8) putimage(440, 350, &img2);
				if (j == 15) putimage(540, 350, &img3);
				if (j == 22) putimage(640, 350, &img4);
				if (j == 30) putimage(740, 350, &img5);
				if (j == 40) putimage(840, 350, &img6);
				if (j == 48) putimage(940, 350, &img7);
				if (j == 58) putimage(1040, 350, &img8);

				if (k == 1) putimage(1110, 550, &img11);
				if (k == 2) putimage(1010, 550, &img12);
				if (k == 3) putimage(910, 550, &img13);
				if (k == 4) putimage(810, 550, &img14);
				if (k == 5) putimage(710, 550, &img15);
				if (k == 6) putimage(610, 550, &img16);
				if (k == 7) putimage(510, 550, &img17);
				if (k == 8) putimage(410, 550, &img18);
				if (k == 9) putimage(310, 550, &img19);
				if (k == 10) putimage(130, 550, &img20);


				if (j == 132)
				{
					char u[10];
					cleardevice();
					loadimage(NULL, "5.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(350, 100, "恭喜你完成挑战");
					setcolor(MAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, u, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, u);

					IMAGE img31, img32, img33, img34;
					loadimage(&img31, "31.jpg", 156, 150);
					loadimage(&img32, "32.jpg", 150, 150);
					loadimage(&img33, "33.jpg", 200, 150);
					loadimage(&img34, "34.jpg", 294, 150);
					putimage(140, 450, &img31);
					putimage(360, 450, &img32);
					putimage(560, 450, &img33);
					putimage(840, 450, &img34);

				}

				if (k == 11)
				{
					char r[10];
					cleardevice();
					loadimage(NULL, "7.jpg");
					setcolor(RED);
					setbkmode(TRANSPARENT);
					settextstyle(80, 0, "黑体");
					outtextxy(280, 100, "很遗憾没有通过挑战");
					setcolor(MAGENTA);
					setbkmode(TRANSPARENT);
					settextstyle(48, 0, "黑体");
					outtextxy(400, 350, "你的最终得分：");
					_itoa(j - k, r, 10);
					graphdefaults();
					LOGFONT f;
					gettextstyle(&f);
					f.lfHeight = 48;
					f.lfQuality = ANTIALIASED_QUALITY;
					settextstyle(&f);
					setcolor(WHITE);
					setbkmode(TRANSPARENT);
					outtextxy(755, 350, r);


					IMAGE img41, img42, img43;
					loadimage(&img41, "41.jpg", 150, 150);
					loadimage(&img42, "42.jpg", 150, 150);
					loadimage(&img43, "43.jpg", 150, 150);
					putimage(300, 450, &img41);
					putimage(565, 450, &img42);
					putimage(830, 450, &img43);
				}

				if (j == 132||k==11)
				{
					Sleep(2000);
					break;
				}
			}
			break;
		}
	}
}
void select1()
{
	cleardevice();
	loadimage(NULL, "3.jpg");
	setfillcolor(CYAN);
	setlinecolor(DARKGRAY);
	fillroundrect(540, 230, 740, 550, 20, 20);
	fillroundrect(290, 230, 490, 550, 20, 20);
	fillroundrect(790, 230, 990, 550, 20, 20);
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 90;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);
	outtextxy(460, 80, _T("选择难度"));
	settextstyle(50, 0, "黑体");
	setcolor(YELLOW);
	outtextxy(340, 240, "初级");
	outtextxy(590, 240, "中级");
	outtextxy(840, 240, "高级");
	settextstyle(32, 0, "微软雅黑");
	setcolor(BROWN);
	outtextxy(305, 340, "程序员入门之");
	outtextxy(305, 390, "简单的");
	outtextxy(305, 440, "Hello World");
	outtextxy(555, 340, "程序员进阶之");
	outtextxy(555, 390, "稍有难度的");
	outtextxy(555, 440, "a+b");
	outtextxy(805, 340, "程序员高阶之");
	outtextxy(805, 390, "突破自己的");
	outtextxy(805, 440, "数组逆序输出");
	settextstyle(16, 0, "宋体");

	int flag = 0;
	MOUSEMSG m;
	while (true)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 290 && m.x <= 490 && m.y >= 230 && m.y <= 550)
		{
			flag = 1;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 540 && m.x <= 740 && m.y >= 230 && m.y <= 550)
		{
			flag = 2;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 790 && m.x <= 990 && m.y >= 230 && m.y <= 550)
		{
			flag = 3;
			break;
		}
	}
	if (flag == 1)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan();
		daji();
	}
	if (flag == 2)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan2();
		daji2();
	}
	if (flag == 3)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan3();
		daji3();
	}
}

void select2()
{
	cleardevice();
	loadimage(NULL, "3.jpg");
	setfillcolor(CYAN);
	setlinecolor(DARKGRAY);
	fillroundrect(540, 230, 740, 550, 20, 20);
	fillroundrect(290, 230, 490, 550, 20, 20);
	fillroundrect(790, 230, 990, 550, 20, 20);
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 90;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);
	outtextxy(460, 80, _T("选择难度"));
	settextstyle(50, 0, "黑体");
	setcolor(YELLOW);
	outtextxy(340, 240, "初级");
	outtextxy(590, 240, "中级");
	outtextxy(840, 240, "高级");
	settextstyle(32, 0, "微软雅黑");
	setcolor(BROWN);
	outtextxy(305, 340, "程序员入门之");
	outtextxy(305, 390, "简单的");
	outtextxy(305, 440, "Hello World");
	outtextxy(555, 340, "程序员进阶之");
	outtextxy(555, 390, "稍有难度的");
	outtextxy(555, 440, "a+b");
	outtextxy(805, 340, "程序员高阶之");
	outtextxy(805, 390, "突破自己的");
	outtextxy(805, 440, "数组逆序输出");
	settextstyle(16, 0, "宋体");

	int flag = 0;
	MOUSEMSG m;
	while (true)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 290 && m.x <= 490 && m.y >= 230 && m.y <= 550)
		{
			flag = 1;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 540 && m.x <= 740 && m.y >= 230 && m.y <= 550)
		{
			flag = 2;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 790 && m.x <= 990 && m.y >= 230 && m.y <= 550)
		{
			flag = 3;
			break;
		}
	}
	if (flag == 1)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan11();
		daji11();
	}
	if (flag == 2)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan12();
		daji12();
	}
	if (flag == 3)
	{
		cleardevice();
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		jianpan13();
		daji13();
	}
}
void model()
{
	cleardevice();
	loadimage(NULL, "4.jpg");
	setfillcolor(CYAN);
	setlinecolor(DARKGRAY);
	fillroundrect(540, 230, 740, 550, 20, 20);
	fillroundrect(290, 230, 490, 550, 20, 20);
	fillroundrect(790, 230, 990, 550, 20, 20);
	setbkmode(TRANSPARENT);
	settextstyle(90, 0, "宋体");
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 80;
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	setcolor(WHITE);
	outtextxy(460, 80, _T("选择模式"));
	settextstyle(45, 0, "黑体");
	setcolor(YELLOW);
	outtextxy(300, 240, "练习模式");
	outtextxy(550, 240, "计数模式");
	outtextxy(800, 240, "限时模式");
	settextstyle(32, 0, "微软雅黑");
	setcolor(BROWN);
	outtextxy(305, 340, "可以自由的输入");
	outtextxy(305, 390, "不计错误");
	outtextxy(305, 440, "无限时");
	outtextxy(555, 340, "有错误数限制");
	outtextxy(555, 390, "超出上限");
	outtextxy(555, 440, "则游戏结束");
	outtextxy(805, 340, "有时间限制");
	outtextxy(805, 390, "规定时间不完成");
	outtextxy(805, 440, "则游戏结束");
	settextstyle(16, 0, "宋体");

	int flag2 = 0;
	MOUSEMSG m;
	while (true)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 290 && m.x <= 490 && m.y >= 230 && m.y <= 550)
		{
			flag2 = 1;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 540 && m.x <= 740 && m.y >= 230 && m.y <= 550)
		{
			flag2 = 2;
			break;
		}
		if (m.uMsg == WM_LBUTTONDOWN&&m.x >= 790 && m.x <= 990 && m.y >= 230 && m.y <= 550)
		{
			flag2 = 3;
			break;
		}
	}
	if (flag2 == 1) select1();
	if (flag2 == 2) select2();
}

int main()
{   
	initgraph(1280, 720);
	welcome();
	RETURN:
	model();
	while (!_kbhit())
	{
		goto RETURN;
	}
	_getch();			
	closegraph();		
}