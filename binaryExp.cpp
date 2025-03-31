long long power(long long a, long long b) {
    long long result = 1;
    while(b) {
        if (b & 1) 
        result = result * a;
        a = a * a;
        b >>= 1;
    }
    return result;
}
