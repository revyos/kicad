///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-39-g3487c3cb)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class FONT_CHOICE;

#include "widgets/resettable_panel.h"
#include <wx/sizer.h>
#include <wx/gdicmn.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/gbsizer.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class PANEL_EESCHEMA_DISPLAY_OPTIONS_BASE
///////////////////////////////////////////////////////////////////////////////
class PANEL_EESCHEMA_DISPLAY_OPTIONS_BASE : public RESETTABLE_PANEL
{
	private:

	protected:
		wxBoxSizer* m_galOptionsSizer;
		wxStaticText* m_appearanceLabel;
		wxStaticLine* m_staticline1;
		wxStaticText* m_defaultFontLabel;
		FONT_CHOICE* m_defaultFontCtrl;
		wxCheckBox* m_checkShowHiddenPins;
		wxCheckBox* m_checkShowHiddenFields;
		wxCheckBox* m_checkShowERCErrors;
		wxCheckBox* m_checkShowERCWarnings;
		wxCheckBox* m_checkShowERCExclusions;
		wxCheckBox* m_checkPageLimits;
		wxStaticText* m_selectionLabel;
		wxStaticLine* m_staticline2;
		wxCheckBox* m_checkSelDrawChildItems;
		wxCheckBox* m_checkSelFillShapes;
		wxStaticText* m_selWidthLabel;
		wxSpinCtrlDouble* m_selWidthCtrl;
		wxStaticText* m_highlightColorNote;
		wxStaticText* m_highlightWidthLabel;
		wxSpinCtrlDouble* m_highlightWidthCtrl;
		wxStaticText* m_crossprobeLabel;
		wxStaticLine* m_staticline3;
		wxCheckBox* m_checkCrossProbeOnSelection;
		wxCheckBox* m_checkCrossProbeCenter;
		wxCheckBox* m_checkCrossProbeZoom;
		wxCheckBox* m_checkCrossProbeAutoHighlight;

	public:

		PANEL_EESCHEMA_DISPLAY_OPTIONS_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~PANEL_EESCHEMA_DISPLAY_OPTIONS_BASE();

};

