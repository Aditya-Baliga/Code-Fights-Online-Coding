
int centuryFromYear(int year) {

    return year%100?((year/100)+1):(year/100) ;
    
}
int main()
{
    int year1;
    std::cin>>year1;
    if(year1>=1&&year1<=2005)
        std::cout<<year1;
    else
        return -1;
        
        return 0;    
}