#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <functional>

#define WINDOW_WIDTH  1280
#define WINDOW_HEIGHT 860

#define APP_NAME "Quake 1 Compile GUI"

#define APP_VERSION "v0.4.1"

struct ScopeGuard
{
    std::function<void()> func;

    ~ScopeGuard() { func(); }
};

LPCTSTR ErrorMessage(DWORD error);

bool StrReplace(std::string& str, const std::string& from, const std::string& to);