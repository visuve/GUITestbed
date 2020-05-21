#include "PCH.hpp"

void OnButtonClicked(Fl_Widget *, void *) 
{
  std::cout << "HELLO!" << std::endl;
}

int main(int argc, char* argv[]) 
{
	auto window = new Fl_Window(300, 200);
	{
		auto button = new Fl_Button(0, 0, 300, 200, "?");
		button->callback(OnButtonClicked);
	}
	window->end();
	window->show(argc, argv);
	return Fl::run();
}