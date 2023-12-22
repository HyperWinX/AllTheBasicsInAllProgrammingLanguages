#include <cstdint>

int main(){
	//Default data types, platform-dependent
	//Range: CHAR_MIN/CHAR_MAX, size may differ on different platforms
	char a;
	//Same, but its guaranteed to be signed
	signed char b;
	//Unsigned char, range 0/UCHAR_MAX
	unsigned char c;
	//Signed short, range SHRT_MIN/SHRT_MAX
	short d;
	short int e;
	signed short f;
	signed short int g;
	//Unsigned short, range 0/USHRT_MAX
	unsigned short h;
	unsigned short int i;
	//Basic signed integer, range INT_MIN/INT_MAX
	int j;
	signed k;
	signed int l;
	//Basic unsigned integer, range 0/UINT_MAX
	unsigned m;
	unsigned n;
	//Long signed integer, range LONG_MIN/LONG_MAX
	long o;
	long int p;
	signed long q;
	signed long int r;
	//Long unsigned integer, range 0/ULONG_MAX
	unsigned long s;
	unsigned long int t;
	//Long long signed integer, range LLONG_MIN/LLONG_MAX
	long long u;
	long long int v;
	signed long long w;
	signed long long int x;
	//Long long unsigned integer, range 0/ULLONG_MAX
	unsigned long long y;
	unsigned long long int z;
	//Real single precision floating-point type
	float aa;
	//Real double precision floating-point type
	double ab;
	//Real quadruple precision floating-point type
	long double ac;
	//Fixed-length integer types, platform-independent
	//Exact width signed integers
	int8_t ad;
	int16_t ae;
	int32_t af;
	int64_t ag;
	//Exact width unsigned integers
	uint8_t ah;
	uint16_t ai;
	uint32_t aj;
	uint64_t ak;
	//Least width signed integers
	int_least8_t al;
	int_least16_t am;
	int_least32_t an;
	int_least64_t ao;
	//Least width unsigned integers
	uint_least8_t ap;
	uint_least16_t aq;
	uint_least32_t ar;
	uint_least64_t as;
	//Fastest signed integers
	int_fast8_t at;
	int_fast16_t au;
	int_fast32_t av;
	int_fast64_t aw;
	//Fastest unsigned integers
	uint_fast8_t ax;
	uint_fast16_t ay;
	uint_fast32_t az;
	uint_fast64_t ba;
	//Signed pointer
	intptr_t bb;
	//Unsigned pointer
	uintptr_t bc;
	//Maximum width signed integer
	intmax_t bd;
	//Maximum width unsigned integer
	uintmax_t be;
	//Arrays
	//Single dimension array
	int bf[10];
	//Multidimensional array (count of dimensions not fixed
	int bg[10][10];
}
//Structs
struct Human{
	char name[64];
	uint8_t age;
};
