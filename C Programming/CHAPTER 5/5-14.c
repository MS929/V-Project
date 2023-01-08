#include <stdio.h>

int main()
{
    char data = 'a';
    char key = 0xff;

    char encrapted_data;
    encrapted_data = data ^ key;

    printf("암호화된 문자=%c\n", encrapted_data);

    char orig_data;
    orig_data = encrapted_data ^ key;
    printf("원래의 데이터= %c\n", orig_data);

    return 0;
}