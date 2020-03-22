/***************************************************************
 * Name:      MedCen__App.cpp
 * Purpose:   Code for Application Class
 * Author:    id-8086 ()
 * Created:   2020-03-01
 * Copyright: id-8086 (https://github.com/id-8086/MedCen_Plus)
 * License:
 **************************************************************/

#include "MedCen__App.h"

//(*AppHeaders
#include "MedCen__Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(MedCen__App);

bool MedCen__App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	MedCen__Frame* Frame = new MedCen__Frame(0);
    	Frame->OnInit();
		Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
