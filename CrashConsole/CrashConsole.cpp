// CrashConsole.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int *p = (int*)0x00000000;

	*p = NULL;
	return 0;
}

