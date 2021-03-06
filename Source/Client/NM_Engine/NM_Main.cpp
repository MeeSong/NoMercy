#include "NM_Index.h"
#include "NM_Main.h"
#include "Defines.h"

#include <lazy_importer.hpp>

#ifdef _M_X64
	#pragma comment(lib, "cryptopp/cryptlib_x64_release.lib")
	#pragma comment(lib, "xxHash/xxhash_x64_release.lib")
#elif _M_IX86
	#pragma comment(lib, "cryptopp/cryptlib_x86_release.lib")
	#pragma comment(lib, "xxHash/xxhash_x86_release.lib")
#else
	#error "architecture unsupported"
#endif

#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "wsock32.lib")
#pragma comment(lib, "Wintrust.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "MPR")
#pragma comment(lib, "wbemuuid.lib")
#pragma comment(lib, "dbghelp.lib")
#pragma comment(lib, "wtsapi32.lib")
#pragma comment(lib, "userenv.lib")
#pragma comment(lib, "imagehlp.lib")

std::shared_ptr <CNM_App> g_nmApp = nullptr;

#pragma optimize("", off)
void CNoMercy::InitTest(bool bClient)
{
	return;
}

bool CNoMercy::InitCore(const char* c_szLicenseCode, LPCVOID c_pModuleInfo, bool bStandaloneProcess)
{
	return true;
}

bool CNoMercy::InitMasterServer(WORD wPort)
{
	return true;
}

bool CNoMercy::InitLauncher(const char* c_szLicenseCode, bool bProtected)
{
	return true;
}

bool CNoMercy::InitService(bool bProtected)
{
	return true;
}

bool CNoMercy::InitShadow(HMODULE hModule, HWND hWnd, HINSTANCE hInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	return true;
}

bool CNoMercy::InitHelper()
{
	return true;
}


bool CNoMercy::Release()
{
	return true;
}


bool CNoMercy::CreateMessageHandler(TNMCallback lpMessageHandler)
{
	return true;
}
bool CNoMercy::SendNMMessage(int Code, const void* lpMessage)
{
	return true;
}

void CNoMercy::OnGameTick()
{
	return;
}

#pragma optimize("", on)
