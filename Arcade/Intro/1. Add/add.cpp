
int add(int param1, int param2) {
return param1+param2;
}
int main()
{  
    int a[2];
    std::cin>>a[0];
    std::cin>>a[1];
    if(a[0]>=-100&&a[0]<=1000&&a[1]>=-100&&a[1]<=1000)
        std::cout<<add(a[0],a[1]);
    else
        return -1;
    
    return 0;
    
  }