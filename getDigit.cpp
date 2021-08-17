int getDigit(int n) {
    int res = 0;
    while(n) {
        n /= 10;
        res++;
    }
    return res;
}