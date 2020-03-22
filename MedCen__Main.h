/***************************************************************
 * Name:      MedCen__Main.h
 * Purpose:   Defines Application Frame
 * Author:    id-8086 ()
 * Created:   2020-03-01
 * Copyright: id-8086 (https://github.com/id-8086/MedCen_Plus)
 * License:
 **************************************************************/

#ifndef MEDCEN__MAIN_H
#define MEDCEN__MAIN_H

//(*Headers(MedCen__Frame)
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/combobox.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class MedCen__Frame: public wxFrame
{
    public:

        MedCen__Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~MedCen__Frame();
		void OnInit();

	private:

		void checkAdditionalControls();
		void controlsHabilitation(bool x);
		void loadComboBoxItems(); //Custom Function
		void defaultSelection(bool x);
		void calculateCost(); //Custom Function
        //(*Handlers(MedCen__Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void On_Button_NewEntry_Click(wxCommandEvent& event);
        void On_Button_RecordData_Click(wxCommandEvent& event);
        void On_Button_List_Click(wxCommandEvent& event);
        void On_ComboBox_PatHealthInsurance_Selected(wxCommandEvent& event);
        void On_ComboBox_ApplyDiscount_Selected(wxCommandEvent& event);
        void On_CheckBox_FirstConsult_Checked(wxCommandEvent& event);
        void On_Button_Cancel_Click(wxCommandEvent& event);
        void On_Button_Statistics_Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(MedCen__Frame)
        static const long ID_STATICTEXT20;
        static const long ID_TEXTCTRL7;
        static const long ID_STATICTEXT21;
        static const long ID_TEXTCTRL13;
        static const long ID_STATICTEXT22;
        static const long ID_COMBOBOX5;
        static const long ID_STATICTEXT23;
        static const long ID_TEXTCTRL14;
        static const long ID_STATICTEXT24;
        static const long ID_DATEPICKERCTRL3;
        static const long ID_STATICTEXT25;
        static const long ID_RADIOBUTTON3;
        static const long ID_RADIOBUTTON4;
        static const long ID_STATICTEXT26;
        static const long ID_COMBOBOX6;
        static const long ID_STATICTEXT27;
        static const long ID_TEXTCTRL15;
        static const long ID_STATICBITMAP1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_STATICTEXT14;
        static const long ID_COMBOBOX4;
        static const long ID_STATICTEXT15;
        static const long ID_TEXTCTRL9;
        static const long ID_STATICTEXT16;
        static const long ID_TEXTCTRL10;
        static const long ID_STATICTEXT17;
        static const long ID_TEXTCTRL11;
        static const long ID_STATICTEXT18;
        static const long ID_TEXTCTRL12;
        static const long ID_STATICTEXT11;
        static const long ID_DATEPICKERCTRL2;
        static const long ID_STATICTEXT12;
        static const long ID_COMBOBOX3;
        static const long ID_STATICTEXT19;
        static const long ID_CHECKBOX1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT13;
        static const long ID_TEXTCTRL8;
        static const long panel_Main;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(MedCen__Frame)
        wxButton* button_Cancel;
        wxButton* button_List;
        wxButton* button_NewEntry;
        wxButton* button_RecordData;
        wxButton* button_Statistics;
        wxCheckBox* checkbox_FirstConsult;
        wxComboBox* combobox_ApplyDiscount;
        wxComboBox* combobox_MedSpecialty;
        wxComboBox* combobox_PatHealthInsurance;
        wxComboBox* combobox_PatIdType;
        wxDatePickerCtrl* datepickerctrl_AppointDate;
        wxDatePickerCtrl* datepickerctrl_PatBirthDate;
        wxPanel* Panel1;
        wxRadioButton* radiobutton_PatFemale;
        wxRadioButton* radiobutton_PatMale;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* statictext_ApplyDiscount;
        wxStaticText* statictext_AppointDate;
        wxStaticText* statictext_ConsultationCost;
        wxStaticText* statictext_DocFirstNam;
        wxStaticText* statictext_DocLastNam;
        wxStaticText* statictext_DocPhoneNumber;
        wxStaticText* statictext_FinalCost;
        wxStaticText* statictext_FirstConsult;
        wxStaticText* statictext_InsuranceCost;
        wxStaticText* statictext_MedLicNum;
        wxStaticText* statictext_MedSpecialty;
        wxStaticText* statictext_PatBirthDate;
        wxStaticText* statictext_PatFirstNam;
        wxStaticText* statictext_PatHealthInsurance;
        wxStaticText* statictext_PatIdNumber;
        wxStaticText* statictext_PatIdType;
        wxStaticText* statictext_PatLastNam;
        wxStaticText* statixtext_PatBiologicalSex;
        wxStaticText* statixtext_PatPhoneNumber;
        wxStatusBar* StatusBar1;
        wxTextCtrl* textctrl_ConsultationCost;
        wxTextCtrl* textctrl_DocFirstNam;
        wxTextCtrl* textctrl_DocLastNam;
        wxTextCtrl* textctrl_DocPhoneNumber;
        wxTextCtrl* textctrl_FinalCost;
        wxTextCtrl* textctrl_InsuranceCost;
        wxTextCtrl* textctrl_MedLicNum;
        wxTextCtrl* textctrl_PatFirstNam;
        wxTextCtrl* textctrl_PatIdNumber;
        wxTextCtrl* textctrl_PatLastNam;
        wxTextCtrl* textctrl_PatPhoneNumber;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MEDCEN__MAIN_H
