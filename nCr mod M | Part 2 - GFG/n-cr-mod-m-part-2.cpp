// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
std::vector<int> findPrimeFactors(int x) {
    std::vector<int> factors;
    int square_root = (int) std::sqrt(x);
    int factor = 2;
    while (factor <= square_root && x != 1) {
        if (x % factor == 0) {
            factors.push_back(factor);
            x /= factor;
            square_root = (int) std::sqrt(x);
        }
        factor++;
    }
    if (x != 1) {
        factors.push_back(x);
    }
    return factors;
}


int findByCrt(const std::vector<int> x, const std::vector<int> r) {
    const int kN = x.size();
    int min_x = 0;
    while (true) {
        bool found = true;
        for (int i = 0; i < kN; i++) {
            if (min_x % x[i] != r[i]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            return min_x;
        }
        
        min_x++;
    }
}

int rCnModP(int n, int r, int p) {
    if (r == 0 || r == n) {
        return 1;
    }
    int triangle[r+1];
    std::memset(triangle, 0, sizeof(triangle));
    triangle[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = std::min(i,r); j > 0; j--) {
            triangle[j] = (triangle[j]+triangle[j-1]) % p;
        }
    }
    return triangle[r];
}

int rCnModPrimeLucas(int n, int r, int p) {
    if (r == 0) {
        return 1;
    }
    int ni = n % p;
    int ri = r % p;
    return rCnModPrimeLucas(n/p, r/p, p) * rCnModP(ni, ri, p) % p;
}

int nCrModM(int n, int r, int m) {
    const auto primes = findPrimeFactors(m);
    
    std::vector<int> rem;
    for (const int p : primes) {
        rem.push_back(rCnModPrimeLucas(n, r, p));
    }
    
    return findByCrt(primes, rem);
}
};


// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, r, m;
		cin >> n >> r >> m;
		Solution obj;
		int ans = obj.nCrModM(n, r, m);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends