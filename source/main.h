#ifndef MAIN_H
#define MAIN_H

#include <wchar.h>

typedef enum {
	FILE_READ_BAD = 0x10,
	FILE_READ_BAD_HEAD,
	FILE_READ_BAD_VERSION,
	FILE_READ_GONE,
	FILE_READ_EOF = 0x20,
	FILE_READ_EOF_SIZE,
	FILE_READ_EOF_PLAYER,
	FILE_READ_EOF_HARDNESS,
	FILE_READ_EOF_ROOMS,
	ARGUMENT_BAD = 0x30,
	ARGUMENT_NO_DASH,
	ARGUMENT_UNKNOWN,
	ARGUMENT_REQ_PARAM,
	ARGUMENT_OOB,
} Error;

void resetBuffer(wchar_t **buffer, size_t length);
void setBufferPad(wchar_t **buffer, wchar_t* text, size_t length);
void setBuffer(wchar_t **buffer, wchar_t* text, size_t length);

#endif
