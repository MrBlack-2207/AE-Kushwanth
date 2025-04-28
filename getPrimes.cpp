vii primes;
function<void(int)> getPrimes = [&](int n){
        vbl isPrime(n+1 , true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2 ; i*i <= n ; i++){
            if(isPrime[i]){
                for(int j = i*i ; j <= n ; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        fori(i , 2 , n+1){
            if(isPrime[i]){
                primes.pb(i);
            }
        }
    };
