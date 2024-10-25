#include <stdio.h>
#include <stdbool.h>

int main()
{
  
  char a = 'C'; // Single character %c
  char b[] = "Bro"; // Array of characters %s
  
  
  float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf
  
  bool e = true; // boolean, true = 1 - 0 = false %d
  
  char f = 120; // 1 byte (-128 to +127) %d or %c
  unsigned char g = 255; // 1 byte (0 to +255) %d or %c
  
  short int h = 32767; // 2 bytes (-32768 to +32767) %d
  unsigned short int i = 65535; // 2 bytes (0 to +65535) %d
  
  int j = 2147483647; // 4 bytes (-2147483648 to +2147483647) %d
  unsigned int k = 4294967295; // 4 bytes (0 to +4294967295) %d
  
  long long int l = 9223372036854775807; // 8 bytes (-9223372036854775808 to +9223372036854775807) %lld
  unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18446744073709551615) %lld
  
  printf("%0.15f\n", c);
  printf("%0.15lf\n",d);
  printf("%d\n",e);
  printf("%c\n", f);
  printf("%d\n",g);
  printf("%d\n",h);
  printf("%d\n",i);
  printf("%d\n",j);
  printf("%u\n",k);
  printf("%lld\n",l);
  printf("%llu\n",m);
  
  return 0;
}
