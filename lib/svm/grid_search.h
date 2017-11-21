#ifndef GRID_SEARCH_H
#define GRID_SEARCH_H

#include <vector>
#include <utility>

class grid_search
{
public:
        grid_search(float c_from, float c_to, float c_step, float g_from, float g_to, float g_step);
        virtual ~grid_search();
        std::vector<std::pair<float,float>> get_sequence();

        static grid_search around(float c_center, float c_range, float c_step, float g_center, float g_range, float g_step);

private:
        template<class T>
        std::vector<T> range(T from, T to, T step);

        float c_from;
        float c_to;
        float c_step;
        float g_from;
        float g_to;
        float g_step;
};


#endif /* GRID_SEARCH_H */