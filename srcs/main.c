#include "../includes/ft_printf.h"

int main (void)
{
    // char c;
    int ret;
    ret = 0;


    // int a = 10;
    // void *b;

    // b = &a;
    // c = 'a';

    // printf("------CHARACTER TESTS-------\n");
    // ret = ft_printf("this %c is a test %c in%c\n", c,c,c);
    // printf("ret = %d\n", ret);
    // ret = printf("this %c is a test %c in%c\n", c,c,c);
    // printf("ret = %d\n", ret);
    // printf("------CHARACTER TESTS END-------\n");
    // ret = 0;
    // char *str = "test string done";
    // printf("------STRING TESTS-------\n");
    // ret = ft_printf("%sthis is a test in %s\n", str,str);
    // printf("ret = %d\n", ret);
    // ret = printf("%sthis is a test in %s\n", str,str);
    // printf("ret = %d\n", ret);
    // printf("------STRING TESTS END-------\n");
    // ret = 0;
    // int i = 12345;
    // printf("------INTEGER TESTS-------\n");
    // ret = ft_printf("%ithis is a test in %i\n", i,i);
    // printf("ret = %d\n", ret);
    // ret = printf("%ithis is a test in %i\n", i,i);
    // printf("ret = %d\n", ret);
    // printf("------INTEGER TESTS END-------\n");
    // printf("------POINTER TESTS-------\n");
    // ret = ft_printf("%pthis is a test in %p\n", b,b);
    // printf("ret = %d\n", ret);
    // ret = printf("%pthis is a test in %p\n", b,b);
    // printf("ret = %d\n", ret);
    // printf("------POINTER TESTS END-------\n");
    printf("------HEX TESTS-------\n");
    ret = ft_printf("%u this is a test in %u\n", 1, -2147483648);
    printf("ret = %d\n", ret);
    ret = printf("%u this is a test in %u\n", 1,-2147483648);
    printf("ret = %d\n", ret);
    printf("------HEX TESTS END-------\n");
}