class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> a;
    for(int i=1;i<=n;i++)
    {
        if(i%15==0) a.push_back("FizzBuzz");
        else if(i%3==0) a.push_back("Fizz");
        else if(i%5==0) a.push_back("Buzz");
        else {
        string m=to_string(i); 
            a.push_back(m); 
        }
    }
    return a;
}
};