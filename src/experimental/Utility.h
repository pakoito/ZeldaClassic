
#pragma once

#include "Config.h"

struct SMinuteSecondsInfo
{
	int32 minutes;
	float seconds;

	SMinuteSecondsInfo operator +(SMinuteSecondsInfo msi)
	{
		SMinuteSecondsInfo result = { minutes + msi.minutes, seconds + msi.seconds };
		return result;
	}
};


struct SimpleTimer
{
	long startTime;

	void Start();
	SMinuteSecondsInfo GetElapsedTime();
};


u32 Strlen(const char* str); // Safe for NULL pointers.

u32 FindFirstWhitespaceOrLE(const char* str, u32 stringLength, u32 position);
u32 FindFirstNonWhitespaceOrLE(const char* str, u32 stringLength, u32 position);

bool SaveMemoryToFileWithMode(const char* filename, const void* data, u32 size, const char* mode);
bool SaveMemoryToFile(const char* filename, const void* data, u32 size);
bool SaveStringToFile(const char* filename, const char* str, u32 stringLength);

void* LoadFileIntoMemory(const char* filename, u32& filesize, bool addTerminatingNull = true);




u32 StringNormalizeLineEndingsCRLF(char* RESTRICT buffer, const char* RESTRICT str, u32 stringLength);


