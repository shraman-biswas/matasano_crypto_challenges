#ifndef HEX_TO_BASE64_H
#define HEX_TO_BASE64_H

#include <ctype.h>

/* hex to decimal converter */
#define H2D(x) ((x <= '9') ? x - '0' : tolower(x) - 'a' + 10)

/* base64 look up table */
static const char base64_lut[64] = {
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'+', '/'
};

void str_to_hex(const char *s1, char *s2);
void hex_to_base64(const char *s1, char *s2);

#endif