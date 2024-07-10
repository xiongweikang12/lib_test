#include "dlllib/interface.h"
#include "iostream"

#pragma comment(lib,"fengzhuangcpp.lib") 

int main()
{
	Iinterface* test = Iinterface::creatinterface();
	std::cout << test->Get() << std::endl;
	test->init();
	test->Destroy();
	return 0;
}