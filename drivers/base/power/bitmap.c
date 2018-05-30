#include "bitmap.h"

uint32_t bitmap[1 + MOD_SPACE/32];

void init()
{
	memset(bitmap,0, (1 + MOD_SPACE/32)*4);
}

void set(unsigned int i)  
{  
	bitmap[i>>SHIFT] |= (1<<(i & MASK));  
}  
// static void clr(unsigned int i)  
// {  
// 	bitmap[i>>SHIFT] &= ~(1<<(i & MASK));  
// }  
int test(unsigned int i)  
{  
	return bitmap[i>>SHIFT] & (1<<(i & MASK));  
}  

void add_in_list(char *str)
{
	uint32_t *v = (uint32_t *)str;
	set((*v) % MOD_SPACE);
}
int check_in_list(char *str)
{
	uint32_t *v = (uint32_t *)str;
	return test((*v) % MOD_SPACE);
} 
   
