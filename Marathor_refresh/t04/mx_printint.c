#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int n);

void mx_printint(int n){
    int i = 0;
    char arr[12];

    if (n == 0) {
        write(1, "0", 1);
        return;
    }
        
    if (n < 0){
        n = n * -1;
        mx_printchar('-');
    }

    if (n == -2147483648) {
        write(1, "2147483648", 10);
        return;
    }
    
    while(n != 0){
        arr[i] = '0' + n % 10;
        i++;
        n = n / 10;
    }
    
    for (int j = i - 1; j >= 0; j--){
        mx_printchar(arr[j]);
    }
}

