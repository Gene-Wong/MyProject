#include <iostream> // #include "stdio.h"
#include <cstring>  // #include "stdlib.h"

#include "basic_test.h"

//todo1: 打印文件名、函数名、行数
// typedef ENTER {printf("%s %d\n", __FILE__, __LINE__);}

//todo2: debug log，可以通过宏一键关闭

/* BC13 ASCII码
 * BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储
 * BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
 * 输入描述：
 * 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 
 * 输出描述：
 */
void bc13test()
{
    char a[128];
    char b;
    int i=0;

    // ENTER;
    printf("bc13test\n");

    // for(int i=0; ; i++) {
    //     scanf("%d", &a[i]);
    //     printf("i:%d, %c\n", i, a[i]);
    //     scanf("%c", &b);
    //     if (b==10) { // 换行符
    //         break;
    //     }
    // }

    while(EOF != scanf("%d", &a[i])) {
        printf("i:%d, %c\n", i, a[i]);
        b=getchar();
        i++;
    } //getchar 可以吃掉回车换行，crtl+z结束输入；

    //EXIT;
}

/* BC19 反向输出一个四位数
 * 描述
 * 将一个四（n）位数，反向输出。
 * 输入描述：
 * 一行，输入一个整数n（1000 <= n <= 9999）。
 * 输出描述：
 * 针对每组输入，反向输出对应四（n）位数。
 */
void bc19test_way1()
{
    int a,b;
    char c[256]={0};

    printf("bc19test_way1\n");

    scanf("%d", &a);
    while(1) {
        b=a%10;
        // printf("b %d",b);
        sprintf(c,"%s%d",c,b);
        // printf("c %d",atoi(c));
        a/=10;
        // printf("a %d",a);
        if (a==0)
            break;
    }

    printf("%04d\n", atoi(c));
}

static int fenjie(int a)
{
    printf("%d", a%10);
    return (a/10);
}

void bc19test_way2()
{
    int a;

    printf("bc19test_way2\n");

    scanf("%d", &a);

    while(a) {
        a=fenjie(a);
    }
}