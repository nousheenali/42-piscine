#include <unistd.h>

char *ft_strcpy(char *dest,char *src);

int main(void)
{
    char arr[6] = "hello";
    char arr2[6]= "grade";
    ft_strcpy(&arr[0], &arr2[0]);

    int i;
    i = 0;
    while(i < 6)
    {
        write(1,&arr[i],1);
        i++;
    }
}
