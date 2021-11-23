
#include "ft_stock_str.h"
#include <stdio.h>

int main(void)
{
    char *arr[9] = {"hi","hello","baba","hsjh","fkk","jijso","fk","sjkjk"};
    t_stock_str  *arr2 =  ft_strs_to_tab(8, arr);
    ft_show_tab(arr2);

	return (0);
}
