
//#include "AngelscriptUnity.cpp"
#include "../Config.h"

#ifdef _MSC_VER
#pragma warning ( push )
#pragma warning ( disable : 151 241 138 ) //stupid dinkumware can't fucking write libraries worth shit.
#pragma warning ( disable : 4275 4996 ) //clib "may be unsafe" warnings.
#endif

#include <direct.h>

#include "../Array.cpp"
#include "../Utility.cpp"
#include "../Preprocessor.cpp"
#include "../ScriptEngine.cpp"
#include "../ScriptRegistrar.cpp"


#ifdef _MSC_VER
#pragma warning ( pop )
#endif


int main()
{
	InitScriptEngine();
	bool r = LoadAndBuildScriptFile("../Scripts/Test1.cs");

	//////////////////////////////////////////////////////////////////////////
	//Todo: All the script messin' goes here.
	//////////////////////////////////////////////////////////////////////////







	//////////////////////////////////////////////////////////////////////////
	ShutdownScriptEngine();

	return r ? 0 : 1;
}

