// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers


struct MyPoint
{
	int row;
	int col;
};



// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <time.h>
#include <timeapi.h>
#include <wingdi.h>
#include <Mmsystem.h>
#include <wchar.h>
// TODO: reference additional headers your program requires here
#include "MyThing.h"
#include "Manage.h"
#include "Welcome.h"
#pragma  comment(lib, "Winmm.lib")
#pragma  comment(lib,"Msimg32.lib")