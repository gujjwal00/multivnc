// -*- C++ -*- generated by wxGlade 0.6.3

#include "FrameLog.h"

// begin wxGlade: ::extracode

// end wxGlade


FrameLog::FrameLog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: FrameLog::FrameLog
    panel_top = new wxPanel(this, wxID_ANY);
    text_ctrl_log = new wxTextCtrl(panel_top, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY|wxHSCROLL);
    button_clear = new wxButton(panel_top, wxID_CLEAR, wxEmptyString);
    button_save = new wxButton(panel_top, wxID_SAVEAS, wxEmptyString);
    button_close = new wxButton(panel_top, wxID_CLOSE, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


BEGIN_EVENT_TABLE(FrameLog, wxFrame)
    // begin wxGlade: FrameLog::event_table
    EVT_BUTTON(wxID_CLEAR, FrameLog::log_clear)
    EVT_BUTTON(wxID_SAVEAS, FrameLog::log_saveas)
    EVT_BUTTON(wxID_CLOSE, FrameLog::log_close)
    // end wxGlade
END_EVENT_TABLE();


void FrameLog::log_clear(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (FrameLog::log_clear) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void FrameLog::log_saveas(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (FrameLog::log_saveas) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


void FrameLog::log_close(wxCommandEvent &event)
{
    event.Skip();
    wxLogDebug(wxT("Event handler (FrameLog::log_close) not implemented yet")); //notify the user that he hasn't implemented the event handler yet
}


// wxGlade: add FrameLog event handlers


void FrameLog::set_properties()
{
    // begin wxGlade: FrameLog::set_properties
    button_close->SetDefault();
    panel_top->SetMinSize(wxSize(500, 500));
    // end wxGlade
}


void FrameLog::do_layout()
{
    // begin wxGlade: FrameLog::do_layout
    wxBoxSizer* sizer_top = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_log = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_buttons = new wxBoxSizer(wxHORIZONTAL);
    sizer_log->Add(text_ctrl_log, 1, wxALL|wxEXPAND, 3);
    sizer_buttons->Add(button_clear, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 3);
    sizer_buttons->Add(button_save, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 3);
    sizer_buttons->Add(button_close, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 3);
    sizer_log->Add(sizer_buttons, 0, wxALIGN_RIGHT, 0);
    panel_top->SetSizer(sizer_log);
    sizer_top->Add(panel_top, 2, wxEXPAND, 0);
    SetSizer(sizer_top);
    sizer_top->Fit(this);
    Layout();
    // end wxGlade
}

