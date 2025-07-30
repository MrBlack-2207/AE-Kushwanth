const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 7;

long long power(long long a, long long b) {
    long long result = 1;
    a = a%MOD;
    while(b) {
        if (b & 1) 
        result = result * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return result%MOD;
}

vii fact(MAXN+1);
vii invFact(MAXN + 1);

void precompute(){
    fact[0] = 1;
    invFact[0] = 1;
    fori(i , 1 , MAXN + 1){
        fact[i] = i * fact[i-1] % MOD;
    }
    invFact[MAXN] = power(fact[MAXN] , MOD - 2);
    for(int i = MAXN - 1 ; i >= 0 ; i--){
        invFact[i] = (i+1) * invFact[i+1] % MOD;
    }
}
