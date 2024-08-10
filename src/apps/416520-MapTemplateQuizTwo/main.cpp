#include <iostream>
 
template <typename T, typename P>
struct Map
{
    T m_key;
    P m_value;
    Map(T key, P value)
     : m_key(key), m_value(value)
    {}
    void print_info() const{
      std::cout << "key: " << m_key << " , value : " << m_value << std::endl;
    }
  ~Map(){}
};
 
int main()
{
    Map<int,std::string> map1(111222,std::string{"Steve Murphy"});
    Map<double,double> mappings(22.1,36.2);
    mappings.print_info();
 
    return 0;
}