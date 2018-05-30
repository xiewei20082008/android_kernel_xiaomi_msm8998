#include <linux/types.h>
#include <linux/string.h>

#define SHIFT 5
#define MASK 0x1F
#define MOD_SPACE 30011

void init(void);
void add_in_list(char *str);
int check_in_list(char *str);
