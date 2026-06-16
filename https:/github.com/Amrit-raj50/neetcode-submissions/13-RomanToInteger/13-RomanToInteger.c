// Last updated: 16/06/2026, 14:13:51
int romanToInt(char* s) {
     int sum = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        int val = 0;
        if (s[i] == 'I') {
            if (s[i+1] == 'V') { val = 4; ++i; }
            else if (s[i+1] == 'X') { val = 9; ++i; }
            else val = 1;
        } else if (s[i] == 'V') val = 5;
        else if (s[i] == 'X') {
            if (s[i+1] == 'L') { val = 40; ++i; }
            else if (s[i+1] == 'C') { val = 90; ++i; }
            else val = 10;
        } else if (s[i] == 'L') val = 50;
        else if (s[i] == 'C') {
            if (s[i+1] == 'D') { val = 400; ++i; }
            else if (s[i+1] == 'M') { val = 900; ++i; }
            else val = 100;
        } else if (s[i] == 'D') val = 500;
        else if (s[i] == 'M') val = 1000;
        else val = 0; /* invalid character -> treat as 0 or handle error */

        sum += val;
    }
    return sum;
}
    
