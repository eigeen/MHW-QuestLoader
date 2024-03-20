// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "loader.h"

using namespace loader;

extern "C" void Log(int level, char* message) {
	LogLevel l;
	if (level == 0) {
		l = LogLevel::DEBUG;
	}
	else if (level == 1) {
		l = LogLevel::INFO;
	}
	else if (level == 2) {
		l = LogLevel::WARN;
	}
	else if (level == 3) {
		l = LogLevel::ERR;
	}
	else {
		l = LogLevel::INFO;
	}
	LOG(l) << message;
}
