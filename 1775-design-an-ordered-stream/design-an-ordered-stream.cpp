class OrderedStream{
    vector<string>v;int p=1;
public:
    OrderedStream(int n):v(n+1){}
    vector<string>insert(int i,string s){
        v[i]=s;vector<string>r;
        while(p<v.size()&&v[p]!="")r.push_back(v[p++]);
        return r;
    }
};