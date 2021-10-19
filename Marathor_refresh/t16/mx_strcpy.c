char* mx_strcpy(char* dst, const char* src);

char *mx_strcpy(char *dst, const char *src)
{
    int counter = 0;
    while(src[counter] != '\0') counter++;
 
    for (int i = 0; src[i] && i < counter; i++) 
        dst[i] = src[i];
   
    dst[counter] = '\0';

    return dst;
}

