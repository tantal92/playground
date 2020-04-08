
#include "../req-rep/textMessage.pb.h"
#include <fstream>
#include <iostream>
#include <thread>

struct Num
{
  public:
    Num() = default;
    void operator()()
    {
        n++;
        std::cout << n << std::endl;
    }

  public:
    int n = 5;
};

int main()
{
    Num         n;
    std::thread t(n);
    t.join();
    return 0;
}


void f()
{
    std::vector<std::thread>threads;
    for(unsigned i=0;i<20;++i)
    {
        threads.emplace_back(do_work,i);
    }
    for(auto&entry: threads)
    entry.join();
}