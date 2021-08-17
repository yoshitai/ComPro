template<typename T>
map<T, long long> factorize(T x){
    map<T, long long> res;
    for(long long i = 2; i * i <= x; ++i){
        while(x % i == 0){
        x /= i;
        res[i]++;
        }
    }
    if(x != 1) res[x]++;
    return res;
}