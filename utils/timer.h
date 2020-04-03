//
// Created by sebastian on 03/04/2020.
//

#ifndef PROTOTUT_UTILS_H
#define PROTOTUT_UTILS_H
#include <chrono>

namespace duration {
class Timer
{
  public:
    Timer() = default;
    Timer(bool start_timer)
    {
        if (start_timer)
            start();
    }
    void start() { m_begin = std::chrono::steady_clock::now(); }
    void stop_and_print()
    {
        m_end = std::chrono::steady_clock::now();
        print_result();
    }

  private:
    std::chrono::steady_clock::time_point m_begin;
    std::chrono::steady_clock::time_point m_end;

    void print_result()
    {
        auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(m_end - m_begin);
        auto seconds = std::chrono::duration_cast<std::chrono::seconds>(milliseconds);
        auto milliseconds_remainder =
            milliseconds - std::chrono::duration_cast<std::chrono::seconds>(milliseconds);

        std::cout << "Time difference = " << seconds.count() << "[s] : "
                  << milliseconds_remainder.count() << "[ms]" << std::endl;
    }
};
} // namespace duration

#endif // PROTOTUT_UTILS_H
