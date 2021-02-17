#include "common.h"
#include "main.h"


void main()
{
	int driver=VGA;
    int mode=VGAHI;  
	initgraph(&driver,&mode,"C:\\BORLANDC\\bgi");
    mouseinit();
    while(1)
    {
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(0,0,MAX_X-1,MAX_Y-1);
        puthz(100, 300, "»¶Ó­", 24, 34, WHITE);
    }

}