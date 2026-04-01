class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers() {
        
    }
    
void add(int num) {
    if (num == 0) 
    {
        if(prefix.size()>0)
            prefix.clear();
    }
    else 
    {
        if(prefix.size()==0)
            prefix.push_back(num);
        else
            prefix.push_back(prefix.back() * num);
    }
}    
    int getProduct(int k) {
        int n=prefix.size();
        if(k>n)
            return 0;
        if(k==n)
            return prefix[n-1];
        return prefix[n-1] / prefix[n-1-k];
    }
};
