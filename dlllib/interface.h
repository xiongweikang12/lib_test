// #pragma once
#ifndef INTERFACE_H
#define INTERFACE_H
#define _CRT_SECURE_NO_WARINGS //��ʾ�Բ���ȫ�ĺ���������

#define fengzhuangcpp_API _declspec(dllexport)

class fengzhuangcpp_API Iinterface
{
public:
	static Iinterface* creatinterface();
	virtual void init() = 0;
	virtual void Destroy() = 0;
	virtual char* Get() = 0;

private:

};



#endif // !INTERFACE_H

