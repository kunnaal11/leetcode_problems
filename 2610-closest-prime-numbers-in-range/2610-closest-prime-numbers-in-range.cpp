class Solution {
public:
    vector<int> closestPrimes(int left, int right) 
    {
        vector<bool>isPrime(right + 1, true);                     //Sieve of Eratosthenes
        isPrime[0] = false;
        isPrime[1] = false;
       
        for (int i = 2; i * i <= right; i++)
        {
            if (isPrime[i])
            {
                for (int j = 2; i*j <= right;j++) 
                isPrime[i*j] = false;
            }
        }
    
         vector<int>primes;
        for (int i = left; i <= right; i++)                  //push all the prime numbers in "primes" array
        {
            if (isPrime[i]) primes.push_back(i);  
        }
            
        
        int mnDiff = INT_MAX;
        int leftAns = -1, rightAns = -1;
        for (int i = 0; primes.size() != 0 && i < primes.size() - 1; i++)   //check for minimum difference between consecutive primes
        {
                                                        //int curr=primes[i]; int next= primes[i+1];
            int diff = primes[i + 1] - primes[i];
            if (diff < mnDiff)
            {
                mnDiff = diff;
                leftAns = primes[i];;
                rightAns = primes[i+1];;
            }
            //else if (diff == mnDiff) leftAns = min(leftAns, curr); 
        }

       
        if (leftAns != -1 && rightAns != -1) return {leftAns, rightAns};
        else return {-1, -1};
    }
};