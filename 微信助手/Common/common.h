﻿#pragma once

//#define WM_THREAD_ID (WM_USER+100)
//#define WM_PAUSE_RECORD (WM_USER+101)
#define WM_THREAD_MIN (WM_USER+100)
#define WM_THREAD_MAX (WM_USER+500)

enum MyMessage {

	WM_THREAD_ID = WM_THREAD_MIN,
	WM_PAUSE_RECORD,
	WM_RECONTINUE_RECORD,
	WM_FREEDLL,
	WM_FREELIBRARY,
	WM_FORCEEXIT,
	WM_FREESUCCESS
};
