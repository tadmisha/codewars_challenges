int num_to_int(char num) {
    switch (num) {
        case 'I':return 1;
        case 'V':return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

unsigned decode_roman (const char *roman_number)
{   
    unsigned result = 0;
    for (int i = 0; roman_number[i]!='\0'; i++) {
        short this = num_to_int(roman_number[i]);
        short next = num_to_int(roman_number[i+1]);
        if (next>this) {
            result-=this;
        }
        else {
            result+=this;
        }
    }
	return result;
}
