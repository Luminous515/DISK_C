/*------------------------------------------------------------*/
/* filename -       smnuview.cpp                              */
/*                                                            */
/* Registeration object for the class TMenuView               */
/*------------------------------------------------------------*/

/*------------------------------------------------------------*/
/*                                                            */
/*    Turbo Vision -  Version 1.0                             */
/*                                                            */
/*                                                            */
/*    Copyright (c) 1991 by Borland International             */
/*    All Rights Reserved.                                    */
/*                                                            */
/*------------------------------------------------------------*/

#define Uses_TMenuView
#define Uses_TStreamableClass
#include <tv.h>
__link( RView )

TStreamableClass RMenuView( TMenuView::name,
                            TMenuView::build,
                            __DELTA(TMenuView)
                          );

