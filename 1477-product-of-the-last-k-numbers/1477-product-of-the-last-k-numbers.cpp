class ProductOfNumbers {
public:
    vector<int>product;

    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            product.clear();
        }
        else{
            product.push_back(num*(product.empty()?1:product.back()) );
        }
    }
    
    int getProduct(int k) {
        int n=product.size();
        if(n==0 || k>n) return 0;
        if(k==n) return product.back();
        return product.back()/product[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */