void mx_printchar(char c);
void mx_print_alphabet(void);

void mx_print_alphabet(void){

    int swap = 1;
    for(int i = 65; i <= 90; i++){
        if(swap == 1){
            mx_printchar(i);
            swap = 0;
        }
        else{
            mx_printchar(i+32);
            swap = 1;
        }
    }
    mx_printchar('\n');
}

