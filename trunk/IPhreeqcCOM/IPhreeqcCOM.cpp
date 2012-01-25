// IPhreeqcCOM.cpp : Implementation of DLL Exports.


#include "stdafx.h"
#include "resource.h"
#include "IPhreeqcCOM.h"


class CIPhreeqcCOMModule : public CAtlDllModuleT< CIPhreeqcCOMModule >
{
public :
	DECLARE_LIBID(LIBID_IPhreeqcCOMLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_IPHREEQCCOM, "{9D82F65C-3B0F-4A65-A18C-95A231A04089}")
};

CIPhreeqcCOMModule _AtlModule;


#ifdef _MANAGED
#pragma managed(push, off)
#endif

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}

#ifdef _MANAGED
#pragma managed(pop)
#endif




// Used to determine whether the DLL can be unloaded by OLE
STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}


// Returns a class factory to create an object of the requested type
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
    HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}


// DllUnregisterServer - Removes entries from the system registry
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}

