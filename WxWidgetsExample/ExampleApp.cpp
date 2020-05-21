#include "PCH.hpp"
#include "ExampleApp.hpp"

IMPLEMENT_APP(ExampleApp);

bool ExampleApp::OnInit()
{
	wxLog::SetActiveTarget(new wxLogStderr());

	wxFrame* frame = new wxFrame(nullptr, wxID_ANY, wxT("Hello wxWidgets World!"), wxDefaultPosition, wxSize(300, 200));
	wxButton* button = new wxButton(frame, wxID_ANY, wxT("?"));

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, [](wxCommandEvent&)->void { wxLogMessage("HELLO!"); }, wxID_ANY);

	frame->Show(true);
	frame->CenterOnScreen();

	SetTopWindow(frame);
	return true;
}