#pragma once

#define BPS 460800
#define DEFAULT_DEVICE "/dev/ttyUSB0"

#define SIMMEMSIZE (512 * 1024)

bool offset_given;
bool mem_type_given;

void skip_white(FILE *file);
void ignore_rest_of_line(FILE *file);

int get_hex(FILE *file);                            // nibble
int get_hex2(FILE *file, int *check);               // 8 bit
int get_hex4(FILE *file, int *check);               // 16 bit
int get_hex6(FILE *file, int *check);               // 24 bit
long long int get_hex8(FILE *file, int *check);     // 32 bit
