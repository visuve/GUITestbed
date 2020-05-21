#include "PCH.hpp"

void OnButtonClicked()
{
	std::cout << "HELLO!" << std::endl;
}

int main(int argc, char* argv[])
{
	nana::form fm(nana::API::make_center(300, 200));
	fm.caption(L"Hello, World!");
	nana::button btn(fm, nana::rectangle(0, 0, 300, 200));
	btn.caption(L"?");
	btn.events().click(OnButtonClicked);
	fm.show();
	nana::exec();

	return 0;
}