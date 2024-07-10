// #pragma once
#ifndef INTERFACE_H
#define INTERFACE_H
#define _CRT_SECURE_NO_WARINGS //表示对不安全的函数不警告

#define fengzhuangcpp_API _declspec(dllexport)

class fengzhuangcpp_API Iinterface //表示导出当前类
{
public:
	static Iinterface* creatinterface();
	virtual void init() = 0;
	virtual void Destroy() = 0;
	virtual char* Get() = 0;

private:

};



#endif // !INTERFACE_H

