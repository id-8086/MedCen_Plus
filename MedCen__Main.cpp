/***************************************************************
 * Name:      MedCen__Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    id-8086 ()
 * Created:   2020-03-01
 * Copyright: id-8086 (https://github.com/id-8086/MedCen_Plus)
 * License:
 **************************************************************/

#include "MedCen__Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(MedCen__Frame)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
#include <cmath> //double_to_string(double d, int numDecPlaces)
#include <cstdint> //double_to_string(double d, int numDecPlaces)
#include <string> //double_to_string(double d, int numDecPlaces)
#include <wx/log.h> //wxLogNull
using namespace std::literals; //Consult Class, toStringConsult()

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(MedCen__Frame)
const long MedCen__Frame::ID_STATICTEXT20 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL7 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT21 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL13 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT22 = wxNewId();
const long MedCen__Frame::ID_COMBOBOX5 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT23 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL14 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT24 = wxNewId();
const long MedCen__Frame::ID_DATEPICKERCTRL3 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT25 = wxNewId();
const long MedCen__Frame::ID_RADIOBUTTON3 = wxNewId();
const long MedCen__Frame::ID_RADIOBUTTON4 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT26 = wxNewId();
const long MedCen__Frame::ID_COMBOBOX6 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT27 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL15 = wxNewId();
const long MedCen__Frame::ID_STATICBITMAP1 = wxNewId();
const long MedCen__Frame::ID_BUTTON1 = wxNewId();
const long MedCen__Frame::ID_BUTTON2 = wxNewId();
const long MedCen__Frame::ID_BUTTON3 = wxNewId();
const long MedCen__Frame::ID_BUTTON4 = wxNewId();
const long MedCen__Frame::ID_BUTTON5 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT14 = wxNewId();
const long MedCen__Frame::ID_COMBOBOX4 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT15 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL9 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT16 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL10 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT17 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL11 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT18 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL12 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT11 = wxNewId();
const long MedCen__Frame::ID_DATEPICKERCTRL2 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT12 = wxNewId();
const long MedCen__Frame::ID_COMBOBOX3 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT19 = wxNewId();
const long MedCen__Frame::ID_CHECKBOX1 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT2 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL1 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT4 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL4 = wxNewId();
const long MedCen__Frame::ID_STATICTEXT13 = wxNewId();
const long MedCen__Frame::ID_TEXTCTRL8 = wxNewId();
const long MedCen__Frame::panel_Main = wxNewId();
const long MedCen__Frame::ID_MENUITEM1 = wxNewId();
const long MedCen__Frame::idMenuAbout = wxNewId();
const long MedCen__Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MedCen__Frame,wxFrame)
    //(*EventTable(MedCen__Frame)
    //*)
END_EVENT_TABLE()

MedCen__Frame::MedCen__Frame(wxWindow* parent,wxWindowID id)
{
    wxLogNull logNo;
    //(*Initialize(MedCen__Frame)
    wxBoxSizer* boxsizer_ApplyDiscount;
    wxBoxSizer* boxsizer_AppointDate;
    wxBoxSizer* boxsizer_Buttons;
    wxBoxSizer* boxsizer_Buttons_1;
    wxBoxSizer* boxsizer_Buttons_2;
    wxBoxSizer* boxsizer_ConsultationCost;
    wxBoxSizer* boxsizer_DataEntry;
    wxBoxSizer* boxsizer_DocFirstNam;
    wxBoxSizer* boxsizer_DocLastNam;
    wxBoxSizer* boxsizer_DocPhoneNumber;
    wxBoxSizer* boxsizer_ExtraButton;
    wxBoxSizer* boxsizer_FinalCost;
    wxBoxSizer* boxsizer_FirstConsult;
    wxBoxSizer* boxsizer_InsuranceCost;
    wxBoxSizer* boxsizer_LeftSide;
    wxBoxSizer* boxsizer_Main;
    wxBoxSizer* boxsizer_MedLicNum;
    wxBoxSizer* boxsizer_MedSpecialty;
    wxBoxSizer* boxsizer_PatBiologicalSex;
    wxBoxSizer* boxsizer_PatBirthDate;
    wxBoxSizer* boxsizer_PatFirstNam;
    wxBoxSizer* boxsizer_PatHealthInsurance;
    wxBoxSizer* boxsizer_PatIdNumber;
    wxBoxSizer* boxsizer_PatIdType;
    wxBoxSizer* boxsizer_PatLastNam;
    wxBoxSizer* boxsizer_PatPhoneNumber;
    wxBoxSizer* boxsizer_RightSide;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;
    wxStaticBoxSizer* staticboxsizer_AppointmentInfo;
    wxStaticBoxSizer* staticboxsizer_Buttons;
    wxStaticBoxSizer* staticboxsizer_DocData;
    wxStaticBoxSizer* staticboxsizer_Logo;
    wxStaticBoxSizer* staticboxsizer_PatData;

    Create(parent, wxID_ANY, _("MedCen++"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxBORDER_RAISED, _T("wxID_ANY"));
    SetClientSize(wxSize(690,620));
    Panel1 = new wxPanel(this, panel_Main, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL, _T("panel_Main"));
    boxsizer_Main = new wxBoxSizer(wxVERTICAL);
    boxsizer_DataEntry = new wxBoxSizer(wxHORIZONTAL);
    boxsizer_LeftSide = new wxBoxSizer(wxVERTICAL);
    staticboxsizer_PatData = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Patient\'s Data"));
    boxsizer_PatFirstNam = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatFirstNam = new wxStaticText(Panel1, ID_STATICTEXT20, _("First Name:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT20"));
    boxsizer_PatFirstNam->Add(statictext_PatFirstNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_PatFirstNam = new wxTextCtrl(Panel1, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxSize(120,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    boxsizer_PatFirstNam->Add(textctrl_PatFirstNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatFirstNam, 0, wxALL, 5);
    boxsizer_PatLastNam = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatLastNam = new wxStaticText(Panel1, ID_STATICTEXT21, _("Last Name:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT21"));
    boxsizer_PatLastNam->Add(statictext_PatLastNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_PatLastNam = new wxTextCtrl(Panel1, ID_TEXTCTRL13, wxEmptyString, wxDefaultPosition, wxSize(120,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
    boxsizer_PatLastNam->Add(textctrl_PatLastNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatLastNam, 0, wxALL, 5);
    boxsizer_PatIdType = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatIdType = new wxStaticText(Panel1, ID_STATICTEXT22, _("ID Type:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT22"));
    boxsizer_PatIdType->Add(statictext_PatIdType, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    combobox_PatIdType = new wxComboBox(Panel1, ID_COMBOBOX5, wxEmptyString, wxDefaultPosition, wxSize(245,21), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX5"));
    boxsizer_PatIdType->Add(combobox_PatIdType, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatIdType, 0, wxALL, 5);
    boxsizer_PatIdNumber = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatIdNumber = new wxStaticText(Panel1, ID_STATICTEXT23, _("ID Number:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT23"));
    boxsizer_PatIdNumber->Add(statictext_PatIdNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_PatIdNumber = new wxTextCtrl(Panel1, ID_TEXTCTRL14, wxEmptyString, wxDefaultPosition, wxSize(100,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
    boxsizer_PatIdNumber->Add(textctrl_PatIdNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatIdNumber, 0, wxALL, 5);
    boxsizer_PatBirthDate = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatBirthDate = new wxStaticText(Panel1, ID_STATICTEXT24, _("Birth Date:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT24"));
    boxsizer_PatBirthDate->Add(statictext_PatBirthDate, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    datepickerctrl_PatBirthDate = new wxDatePickerCtrl(Panel1, ID_DATEPICKERCTRL3, wxDefaultDateTime, wxDefaultPosition, wxSize(110,30), wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL3"));
    boxsizer_PatBirthDate->Add(datepickerctrl_PatBirthDate, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticboxsizer_PatData->Add(boxsizer_PatBirthDate, 0, wxALL, 5);
    boxsizer_PatBiologicalSex = new wxBoxSizer(wxHORIZONTAL);
    statixtext_PatBiologicalSex = new wxStaticText(Panel1, ID_STATICTEXT25, _("Biological Sex:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT25"));
    boxsizer_PatBiologicalSex->Add(statixtext_PatBiologicalSex, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    radiobutton_PatMale = new wxRadioButton(Panel1, ID_RADIOBUTTON3, _("Male"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
    boxsizer_PatBiologicalSex->Add(radiobutton_PatMale, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    radiobutton_PatFemale = new wxRadioButton(Panel1, ID_RADIOBUTTON4, _("Female"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
    boxsizer_PatBiologicalSex->Add(radiobutton_PatFemale, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatBiologicalSex, 0, wxALL, 5);
    boxsizer_PatHealthInsurance = new wxBoxSizer(wxHORIZONTAL);
    statictext_PatHealthInsurance = new wxStaticText(Panel1, ID_STATICTEXT26, _("Health Insurance:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT26"));
    boxsizer_PatHealthInsurance->Add(statictext_PatHealthInsurance, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    combobox_PatHealthInsurance = new wxComboBox(Panel1, ID_COMBOBOX6, wxEmptyString, wxDefaultPosition, wxSize(158,21), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX6"));
    boxsizer_PatHealthInsurance->Add(combobox_PatHealthInsurance, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatHealthInsurance, 0, wxALL, 5);
    boxsizer_PatPhoneNumber = new wxBoxSizer(wxHORIZONTAL);
    statixtext_PatPhoneNumber = new wxStaticText(Panel1, ID_STATICTEXT27, _("Phone Number:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT27"));
    boxsizer_PatPhoneNumber->Add(statixtext_PatPhoneNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_PatPhoneNumber = new wxTextCtrl(Panel1, ID_TEXTCTRL15, wxEmptyString, wxDefaultPosition, wxSize(135,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
    boxsizer_PatPhoneNumber->Add(textctrl_PatPhoneNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_PatData->Add(boxsizer_PatPhoneNumber, 0, wxALL, 5);
    boxsizer_LeftSide->Add(staticboxsizer_PatData, 1, wxTOP|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticboxsizer_Logo = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, wxEmptyString);
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/charlesdward/C++ Projects/MedCen++/MedCen_Plus_Logo_Borders.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    staticboxsizer_Logo->Add(StaticBitmap1, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 8);
    boxsizer_LeftSide->Add(staticboxsizer_Logo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticboxsizer_Buttons = new wxStaticBoxSizer(wxVERTICAL, Panel1, wxEmptyString);
    boxsizer_Buttons = new wxBoxSizer(wxHORIZONTAL);
    boxsizer_Buttons_1 = new wxBoxSizer(wxHORIZONTAL);
    button_NewEntry = new wxButton(Panel1, ID_BUTTON1, _("New Entry"), wxDefaultPosition, wxSize(88,35), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    boxsizer_Buttons_1->Add(button_NewEntry, 0, wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    button_List = new wxButton(Panel1, ID_BUTTON2, _("List"), wxDefaultPosition, wxSize(85,35), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    boxsizer_Buttons_1->Add(button_List, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    boxsizer_Buttons->Add(boxsizer_Buttons_1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    boxsizer_Buttons_2 = new wxBoxSizer(wxHORIZONTAL);
    button_RecordData = new wxButton(Panel1, ID_BUTTON3, _("Record Data"), wxDefaultPosition, wxSize(88,35), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    boxsizer_Buttons_2->Add(button_RecordData, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    button_Cancel = new wxButton(Panel1, ID_BUTTON4, _("Cancel"), wxDefaultPosition, wxSize(88,35), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    boxsizer_Buttons_2->Add(button_Cancel, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    boxsizer_Buttons->Add(boxsizer_Buttons_2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_Buttons->Add(boxsizer_Buttons, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    boxsizer_ExtraButton = new wxBoxSizer(wxHORIZONTAL);
    button_Statistics = new wxButton(Panel1, ID_BUTTON5, _("Statistics"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    button_Statistics->SetMinSize(wxSize(365,32));
    boxsizer_ExtraButton->Add(button_Statistics, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    staticboxsizer_Buttons->Add(boxsizer_ExtraButton, 0, wxALL|wxEXPAND, 0);
    boxsizer_LeftSide->Add(staticboxsizer_Buttons, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    boxsizer_DataEntry->Add(boxsizer_LeftSide, 0, wxALL, 0);
    boxsizer_RightSide = new wxBoxSizer(wxVERTICAL);
    staticboxsizer_DocData = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Doctor\'s Data"));
    boxsizer_MedSpecialty = new wxBoxSizer(wxHORIZONTAL);
    statictext_MedSpecialty = new wxStaticText(Panel1, ID_STATICTEXT14, _("Medical Specialty:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT14"));
    boxsizer_MedSpecialty->Add(statictext_MedSpecialty, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    combobox_MedSpecialty = new wxComboBox(Panel1, ID_COMBOBOX4, wxEmptyString, wxDefaultPosition, wxSize(155,21), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX4"));
    boxsizer_MedSpecialty->Add(combobox_MedSpecialty, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_DocData->Add(boxsizer_MedSpecialty, 0, wxALL, 5);
    boxsizer_MedLicNum = new wxBoxSizer(wxHORIZONTAL);
    statictext_MedLicNum = new wxStaticText(Panel1, ID_STATICTEXT15, _("Medical License Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    boxsizer_MedLicNum->Add(statictext_MedLicNum, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_MedLicNum = new wxTextCtrl(Panel1, ID_TEXTCTRL9, wxEmptyString, wxDefaultPosition, wxSize(85,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    boxsizer_MedLicNum->Add(textctrl_MedLicNum, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_DocData->Add(boxsizer_MedLicNum, 0, wxALL, 5);
    boxsizer_DocFirstNam = new wxBoxSizer(wxHORIZONTAL);
    statictext_DocFirstNam = new wxStaticText(Panel1, ID_STATICTEXT16, _("First Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    boxsizer_DocFirstNam->Add(statictext_DocFirstNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_DocFirstNam = new wxTextCtrl(Panel1, ID_TEXTCTRL10, wxEmptyString, wxDefaultPosition, wxSize(120,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    boxsizer_DocFirstNam->Add(textctrl_DocFirstNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_DocData->Add(boxsizer_DocFirstNam, 0, wxALL, 5);
    boxsizer_DocLastNam = new wxBoxSizer(wxHORIZONTAL);
    statictext_DocLastNam = new wxStaticText(Panel1, ID_STATICTEXT17, _("Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    boxsizer_DocLastNam->Add(statictext_DocLastNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_DocLastNam = new wxTextCtrl(Panel1, ID_TEXTCTRL11, wxEmptyString, wxDefaultPosition, wxSize(120,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
    boxsizer_DocLastNam->Add(textctrl_DocLastNam, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_DocData->Add(boxsizer_DocLastNam, 0, wxALL, 5);
    boxsizer_DocPhoneNumber = new wxBoxSizer(wxHORIZONTAL);
    statictext_DocPhoneNumber = new wxStaticText(Panel1, ID_STATICTEXT18, _("Phone Number:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT18"));
    boxsizer_DocPhoneNumber->Add(statictext_DocPhoneNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_DocPhoneNumber = new wxTextCtrl(Panel1, ID_TEXTCTRL12, wxEmptyString, wxDefaultPosition, wxSize(135,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    boxsizer_DocPhoneNumber->Add(textctrl_DocPhoneNumber, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_DocData->Add(boxsizer_DocPhoneNumber, 0, wxALL, 5);
    boxsizer_RightSide->Add(staticboxsizer_DocData, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticboxsizer_AppointmentInfo = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Appointment Info"));
    boxsizer_AppointDate = new wxBoxSizer(wxHORIZONTAL);
    statictext_AppointDate = new wxStaticText(Panel1, ID_STATICTEXT11, _("Date:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT11"));
    boxsizer_AppointDate->Add(statictext_AppointDate, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    datepickerctrl_AppointDate = new wxDatePickerCtrl(Panel1, ID_DATEPICKERCTRL2, wxDefaultDateTime, wxDefaultPosition, wxSize(110,30), wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL2"));
    boxsizer_AppointDate->Add(datepickerctrl_AppointDate, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_AppointmentInfo->Add(boxsizer_AppointDate, 0, wxALL, 5);
    boxsizer_ApplyDiscount = new wxBoxSizer(wxHORIZONTAL);
    statictext_ApplyDiscount = new wxStaticText(Panel1, ID_STATICTEXT12, _("Apply Discount:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    boxsizer_ApplyDiscount->Add(statictext_ApplyDiscount, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    combobox_ApplyDiscount = new wxComboBox(Panel1, ID_COMBOBOX3, wxEmptyString, wxDefaultPosition, wxSize(120,21), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX3"));
    boxsizer_ApplyDiscount->Add(combobox_ApplyDiscount, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_AppointmentInfo->Add(boxsizer_ApplyDiscount, 0, wxALL, 5);
    boxsizer_FirstConsult = new wxBoxSizer(wxHORIZONTAL);
    statictext_FirstConsult = new wxStaticText(Panel1, ID_STATICTEXT19, _("First Consult:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    boxsizer_FirstConsult->Add(statictext_FirstConsult, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkbox_FirstConsult = new wxCheckBox(Panel1, ID_CHECKBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    checkbox_FirstConsult->SetValue(false);
    boxsizer_FirstConsult->Add(checkbox_FirstConsult, 1, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticboxsizer_AppointmentInfo->Add(boxsizer_FirstConsult, 0, wxALL, 5);
    boxsizer_ConsultationCost = new wxBoxSizer(wxHORIZONTAL);
    statictext_ConsultationCost = new wxStaticText(Panel1, ID_STATICTEXT2, _("Consultation Cost:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    boxsizer_ConsultationCost->Add(statictext_ConsultationCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_ConsultationCost = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(70,25), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    textctrl_ConsultationCost->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    boxsizer_ConsultationCost->Add(textctrl_ConsultationCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_AppointmentInfo->Add(boxsizer_ConsultationCost, 0, wxALL, 5);
    boxsizer_InsuranceCost = new wxBoxSizer(wxHORIZONTAL);
    statictext_InsuranceCost = new wxStaticText(Panel1, ID_STATICTEXT4, _("Cost (with insurance):"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    boxsizer_InsuranceCost->Add(statictext_InsuranceCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_InsuranceCost = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(70,25), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    textctrl_InsuranceCost->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    boxsizer_InsuranceCost->Add(textctrl_InsuranceCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_AppointmentInfo->Add(boxsizer_InsuranceCost, 0, wxALL, 5);
    boxsizer_FinalCost = new wxBoxSizer(wxHORIZONTAL);
    statictext_FinalCost = new wxStaticText(Panel1, ID_STATICTEXT13, _("Final Cost:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT13"));
    boxsizer_FinalCost->Add(statictext_FinalCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textctrl_FinalCost = new wxTextCtrl(Panel1, ID_TEXTCTRL8, wxEmptyString, wxDefaultPosition, wxSize(70,25), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    textctrl_FinalCost->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    boxsizer_FinalCost->Add(textctrl_FinalCost, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticboxsizer_AppointmentInfo->Add(boxsizer_FinalCost, 0, wxALL, 5);
    boxsizer_RightSide->Add(staticboxsizer_AppointmentInfo, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    boxsizer_DataEntry->Add(boxsizer_RightSide, 0, wxRIGHT, 0);
    boxsizer_Main->Add(boxsizer_DataEntry, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Panel1->SetSizer(boxsizer_Main);
    boxsizer_Main->Fit(Panel1);
    boxsizer_Main->SetSizeHints(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_COMBOBOX6,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&MedCen__Frame::On_ComboBox_PatHealthInsurance_Selected);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_Button_NewEntry_Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_Button_List_Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_Button_RecordData_Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_Button_Cancel_Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_Button_Statistics_Click);
    Connect(ID_COMBOBOX3,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&MedCen__Frame::On_ComboBox_ApplyDiscount_Selected);
    Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&MedCen__Frame::On_CheckBox_FirstConsult_Checked);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MedCen__Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&MedCen__Frame::OnAbout);
    //*)
}

MedCen__Frame::~MedCen__Frame()
{
    //(*Destroy(MedCen__Frame)
    //*)
}

void MedCen__Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void MedCen__Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

std::string double_to_string(double d, int numDecPlaces)
{
    const std::int64_t pow10 = static_cast<std::int64_t>(std::pow(10, numDecPlaces));
    const std::int64_t mult  = static_cast<std::int64_t>(d * pow10);
    return std::to_string(mult / pow10) + "." + std::to_string(mult % pow10);
}

class Person
{
public:

    std::string pFirstName = "";
    std::string pLastName = "";
	int pIdType = 0;
	int pIdNumber = 0;
	std::string pBirthDate = "";
	bool pBiologicalSex = TRUE;
	std::string pPhoneNumber = "";

	std::string determineIdType()
	{
		switch (pIdType)
		{
			case 1:
			return "Social Security Card";
			case 2:
			return "Driver's License";
			case 3:
			return "Passport";
			default:
		    return "Department of Defense ID Card";
		}

	}

	std::string determineBiologicalSex()
	{
		if (pBiologicalSex == TRUE)
			{
				return "Male";
			}

			else

			{
				return "Female";
			}
	}

	std::string toStringPerson()
	{
		return "First Name: " + pFirstName + "\nLast Name: " + pLastName +
		"\nID Type: " + determineIdType() + "\nID Number: " + std::to_string(pIdNumber) +
		"\nBirth Date: " + pBirthDate + "\nBiological Sex: " + determineBiologicalSex() +
		"\nPhone Number: " + pPhoneNumber;
	}

};

class Doctor : public Person
{
public:

	int pLicenseNumber = 0;
	int pMedSpecialty = 0;


	std::string checkMedSpecialty()
	{
		switch (pMedSpecialty)
		{
			case 1:
			return "Pediatrics";
			case 2:
			return "Internal Medicine";
			case 3:
			return "Traumatology";
			default:
			return "Cardiology";
		}

	}


	std::string toStringDoctor()
	{
		return "License Number: " + std::to_string(pLicenseNumber) +
		"\nMed Specialty: " + checkMedSpecialty() +
		"\nFirst Name: " + pFirstName + "\nLast Name: " + pLastName +
		"\nPhone Number: " + pPhoneNumber;
	}

};

class Patient : public Person
{
public:

	int pHealthInsurance = 0;


	std::string determineHealthInsurance()
	{
		switch (pHealthInsurance)
		{
			case 1:
			return "No insurance";
			case 2:
			return "Kaiser Foundation";
			case 3:
			return "Caresource";
			case 4:
			return "UnitedHealth";
			default:
			return "Wellcare";
		}

	}


	std::string toStringPatient()
	{
		return "Patient's Data: " + "\n"s + toStringPerson() +
		"\nHealth Insurance: " + determineHealthInsurance();

	}

};


class Consult
{
public:

	std::string pConsultDate = "";
    int pConsultType = 0;
	double pFinalCost = 0.0;
	double pConsultationCost = 850;
	Doctor pDoctor;
	Patient pPatient;
    double pDiscount = 1.0;

	std::string checkConsultType()
	{
		if (pConsultType == 1)
		{
			return "First Consult";
		}
		else
		{
			return "Regular Patient";
		}
	}

	std::string checkDiscount()
	{
		if (pDiscount > 1.0)
		{
			return "Discount: " + double_to_string((pDiscount - 1), 2)  + "%";
		}
		else
		{
			return "";
		}
	}

	std::string checkInsurance()
	{
		if (pPatient.pHealthInsurance !=1)
		{
			return "$" + double_to_string(consultationCost(), 2);
		}
		else
		{
			return "-";
		}
	}

	std::string toStringConsult()
	{
		std::string pAdditional = "\nAdditional 5% Charge";

		return pPatient.toStringPatient() + "\n"s + "\n" +
		"Physician's Data: " +
		"\n"s + pDoctor.toStringDoctor() + "\n" + "\n" +
		"Consultation Data: " + "\n"s + checkConsultType() + pAdditional +
		"\nAppointment Date: " + pConsultDate +
		"\nConsultation Cost: " + "$" + double_to_string(pConsultationCost, 2) +
		"\nCost (with Insurance): "s + checkInsurance() +
		"\n"s + checkDiscount() +
		"\Final Cost: " + "$" + double_to_string(calculateFinalCost(), 2);
	}

	double consultationCost()
	{
		double _total = 0;
		switch (pPatient.pHealthInsurance)
		{
			case 1:
			_total = 850;
			break;
			case 2:
			_total= 250;
			break;
			case 3:
			_total = 100;
			break;
			case 4:
			_total = 300;
			break;
			case 5:
			_total = 460;
			break;
		}

		return _total;
	}


	double calculateFinalCost()
	{
		double _total = consultationCost();

		if (pConsultType ==1)
		{
			_total = _total * 1.05;
		}

		_total = _total / pDiscount;

		return _total;
	}

};


Doctor Doc = Doctor();
Patient Pat = Patient();
Consult Con = Consult();

int recordedEntries = 0;

void MedCen__Frame::loadComboBoxItems()
{
	std::vector<wxString> IdTypes;
    IdTypes.reserve(4);
    IdTypes.push_back("Social Security Card");
    IdTypes.push_back("Driver's License");
    IdTypes.push_back("Passport");
    IdTypes.push_back("Department of Defense ID Card");
    combobox_PatIdType->Set(IdTypes);

	std::vector<wxString> HealthInsurances;
    HealthInsurances.reserve(5);
    HealthInsurances.push_back("No insurance");
    HealthInsurances.push_back("Kaiser Foundation");
    HealthInsurances.push_back("Caresource");
    HealthInsurances.push_back("UnitedHealth");
	HealthInsurances.push_back("Wellcare");
    combobox_PatHealthInsurance->Set(HealthInsurances);

	std::vector<wxString> MedSpecialties;
    MedSpecialties.reserve(4);
    MedSpecialties.push_back("Pediatrics");
    MedSpecialties.push_back("Internal Medicine");
    MedSpecialties.push_back("Traumatology");
    MedSpecialties.push_back("Cardiology");
    combobox_MedSpecialty->Set(MedSpecialties);

    std::vector<wxString> DiscountOptions;
    DiscountOptions.reserve(5);
    DiscountOptions.push_back("No discount");
    DiscountOptions.push_back("10%");
    DiscountOptions.push_back("15%");
    DiscountOptions.push_back("20%");
	DiscountOptions.push_back("25%");
    combobox_ApplyDiscount->Set(DiscountOptions);
}

void MedCen__Frame::calculateCost()
{
	if (checkbox_FirstConsult->IsChecked())
	{
		Con.pConsultType = 1;
	}
	else
	{
		Con.pConsultType = 2;
    }

	Pat.pHealthInsurance = combobox_PatHealthInsurance->GetSelection()+1;

	switch (combobox_ApplyDiscount->GetSelection())
	{
		case 0:
		Con.pDiscount = 1;
		break;
		case 1:
		Con.pDiscount = 1.10;
		break;
		case 2:
		Con.pDiscount = 1.15;
		break;
		case 3:
		Con.pDiscount = 1.20;
		break;
		case 4:
		Con.pDiscount = 1.25;
		break;
	}


	Con.pDoctor = Doc;
	Con.pPatient = Pat;

	textctrl_ConsultationCost->SetValue("$ " + double_to_string(Con.pConsultationCost, 2));

	if (Pat.pHealthInsurance != 1)
	{
		textctrl_InsuranceCost->SetValue("$ " + double_to_string(Con.consultationCost(), 2));
	}
	else
	{
		textctrl_InsuranceCost->SetValue("-");
	}

	textctrl_FinalCost->SetValue("$ " + double_to_string(Con.calculateFinalCost(), 2));
}


void MedCen__Frame::checkAdditionalControls()
{
	if (recordedEntries >= 1)
	{
		button_List->Enable(true);
		button_Statistics->Enable(true);
	}
	else
	{
		button_List->Enable(false);
		button_Statistics->Enable(false);
	}
}


void MedCen__Frame::defaultSelection(bool x)
{
	if (x == true)
	{
	    combobox_PatIdType->SetSelection(0);
	    combobox_PatHealthInsurance->SetSelection(1);
		combobox_MedSpecialty->SetSelection(1);
		combobox_ApplyDiscount->SetSelection(0);
        calculateCost();
	}
	else
	{
		std::vector<wxString> Unselected;
	    Unselected.reserve(1);
        Unselected.push_back("");
	    combobox_PatIdType->Set(Unselected);
	    combobox_PatHealthInsurance->Set(Unselected);
	    combobox_MedSpecialty->Set(Unselected);
	    combobox_ApplyDiscount->Set(Unselected);
		textctrl_PatFirstNam->SetValue("");
		textctrl_PatLastNam->SetValue("");
		textctrl_PatIdNumber->SetValue("");
		textctrl_PatPhoneNumber->SetValue("");
		textctrl_MedLicNum->SetValue("");
		textctrl_DocFirstNam->SetValue("");
		textctrl_DocLastNam->SetValue("");
		textctrl_DocPhoneNumber->SetValue("");
		textctrl_ConsultationCost->SetValue("");
	    textctrl_InsuranceCost->SetValue("");
	    textctrl_FinalCost->SetValue("");
	}
	radiobutton_PatMale->SetValue(true);
	checkAdditionalControls();
}


void MedCen__Frame::controlsHabilitation(bool x)
{
	//Patient's Data
	textctrl_PatFirstNam->Enable(x);
	textctrl_PatLastNam->Enable(x);
	combobox_PatIdType->Enable(x);
	textctrl_PatIdNumber->Enable(x);
	datepickerctrl_PatBirthDate->Enable(x);
	radiobutton_PatMale->Enable(x);
	radiobutton_PatFemale->Enable(x);
	combobox_PatHealthInsurance->Enable(x);
	textctrl_PatPhoneNumber->Enable(x);

	//Doctor's Data
	combobox_MedSpecialty->Enable(x);
	textctrl_MedLicNum->Enable(x);
	textctrl_DocFirstNam->Enable(x);
	textctrl_DocLastNam->Enable(x);
	textctrl_DocPhoneNumber->Enable(x);

	//Appointment Info
	datepickerctrl_AppointDate->Enable(x);
	combobox_ApplyDiscount->Enable(x);
	checkbox_FirstConsult->Enable(x);
	textctrl_ConsultationCost->Enable(x);
	textctrl_InsuranceCost->Enable(x);
	textctrl_FinalCost->Enable(x);

	//Button Group
	button_NewEntry->Enable(!x);
	button_RecordData->Enable(x);
	button_Cancel->Enable(x);
    defaultSelection(x);
}

void MedCen__Frame::OnInit()
{
	controlsHabilitation(false);
}

void MedCen__Frame::On_Button_NewEntry_Click(wxCommandEvent& event)
{
	loadComboBoxItems();
	controlsHabilitation(true);
}

void MedCen__Frame::On_Button_List_Click(wxCommandEvent& event)
{
    ::wxMessageBox(_(Con.toStringConsult()));
}

void MedCen__Frame::On_Button_RecordData_Click(wxCommandEvent& event)
{
	Doc.pMedSpecialty = combobox_MedSpecialty->GetSelection()+1;
	Doc.pLicenseNumber = wxAtoi(textctrl_MedLicNum->GetValue());
	Doc.pFirstName = textctrl_DocFirstNam->GetValue().ToStdString();
	Doc.pLastName = textctrl_DocLastNam->GetValue().ToStdString();
	Doc.pPhoneNumber = textctrl_DocPhoneNumber->GetValue().ToStdString();

    Pat.pFirstName = textctrl_PatFirstNam->GetValue().ToStdString();
	Pat.pLastName = textctrl_PatLastNam->GetValue().ToStdString();
	Pat.pIdType = combobox_PatIdType->GetSelection()+1;
	Pat.pIdNumber = wxAtoi(textctrl_PatIdNumber->GetValue());
	Pat.pBirthDate = datepickerctrl_PatBirthDate->GetValue().Format().ToStdString();
	Pat.pBiologicalSex = radiobutton_PatMale->GetValue();
	Pat.pHealthInsurance = combobox_PatHealthInsurance->GetSelection()+1;
	Pat.pPhoneNumber = textctrl_PatPhoneNumber->GetValue().ToStdString();

    Con.pConsultDate = datepickerctrl_AppointDate->GetValue().Format().ToStdString();
    Con.pDoctor = Doc;
	Con.pPatient = Pat;
	recordedEntries++;
	controlsHabilitation(false);
}

void MedCen__Frame::On_Button_Cancel_Click(wxCommandEvent& event)
{
    controlsHabilitation(false);
}

void MedCen__Frame::On_Button_Statistics_Click(wxCommandEvent& event)
{
    ::wxMessageBox(_("\nRecorded Entries: " + std::to_string(recordedEntries)));
}

void MedCen__Frame::On_ComboBox_PatHealthInsurance_Selected(wxCommandEvent& event)
{
    calculateCost();
}

void MedCen__Frame::On_ComboBox_ApplyDiscount_Selected(wxCommandEvent& event)
{
    calculateCost();
}

void MedCen__Frame::On_CheckBox_FirstConsult_Checked(wxCommandEvent& event)
{
    calculateCost();
}
