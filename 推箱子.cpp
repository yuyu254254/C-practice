#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char a[7][12] = {
        "##########",
        "#O   X   #",
        "#        #",
        "#        #",
        "#   *    #",
        "##########"
    };
    int i;
    int x=1,y=1;
    int tx=4,ty=4;
    char ch;
    while(1)
	{
	system("cls");
	for(i=1;i<=5;i++)
	{
		puts(a[i]);
	}
	if(a[tx][ty]=='X')
	{
		printf("\nÄãÓ®ÁË\n");
		system("pause");
		break;
	}
	ch=getch();
	if(ch=='d')
	{
		if(a[x][y+1]==' '||a[x][y+1]=='*')
		{
			a[x][y]=' ';
			y++;;
			a[x][y]='O';
		}
		else if(a[x][y+1]=='X')
		{
			if(a[x][y+2]==' '||a[x][y+2]=='*')
			{
				a[x][y+2]='X';
				a[x][y+1]='O';
				a[x][y]=' ';
				y++;
			}
		}
	}
	if(ch=='s')
	{
		if(a[x+1][y]==' '||a[x+1][y]=='*')
		{
			a[x][y]=' ';
			x++;;
			a[x][y]='O';
		}
		else if(a[x+1][y]=='X')
		{
			if(a[x+2][y]==' '||a[x+2][y]=='*')
			{
				a[x+2][y]='X';
				a[x+2][y]='O';
				a[x][y]=' ';
				x++;
			}
		}
	}
	if(ch=='a')
	{
		if(a[x-1][y]==' '||a[x-1][y]=='*')
		{
			a[x][y]=' ';
			x--;
			a[x][y]='O';
		}
		else if(a[x-1][y]=='X')
		{
			if(a[x-1][y]==' '||a[x-1][y]=='*')
			{
				a[x-1][y]='X';
				a[x-1][y]='O';
				a[x][y]=' ';
				x--;
			}
		}
	}
	if(ch=='w')
	{
		if(a[x-1][y]==' '||a[x-1][y]=='*')
		{
			a[x][y]=' ';
			x--;
			a[x][y]='O';
		}
		else if(a[x-1][y-1]=='X')
		{
			if(a[x-2][y]==' '||a[x-2][y]=='*')
			{
				a[x-2][y]='X';
				a[x-1][y]='O';
				a[x][y]=' ';
				y--;
			}
		}
	}
	if(a[tx][ty]==' ')
	{
		a[tx][ty]='*';
	}
}
	return 0;
}
