/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list;
    list.push_front(20);
    list.push_front(15);
    list.push_front(10);
    list.push_front(5);
    
    list.remove(15);
    
    for(int n : list){
        std::cout << n << " ";
    }
    
    

    return 0;
}