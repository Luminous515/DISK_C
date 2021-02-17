# include "mygraph.h"

int main()
{
    initscreen();
    initmouse(0);
    setmousearrange(0,0,639,479);
    show_mouse();
    s_main();

    return 0;
}

void g_main(void)
{
    hide_mouse();
    barxy(0,0,640,480,WHITE);

    show_mouse();
}

void s_main(void)
{
    g_main();
    getmouse;
    while(1)
    {

        if (M_sc>0)
        {

        }
        getmouse();
    }
}