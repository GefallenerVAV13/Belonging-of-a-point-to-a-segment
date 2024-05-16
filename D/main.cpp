#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <cmath>

using std::endl;

int main()
{
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    int n = 9;
    float x, y, S;

    std::vector< std::vector<float> > dot(2, std::vector <float>(n));
    for (int i = 0; i < n; i++)
    {
        input >> x >> y;
        dot[0][i] = x;
        dot[1][i] = y;
    }

    if ((dot[0][0] - dot[0][1]) * (dot[1][2] - dot[1][1]) == (dot[0][2] -dot[0][1]) * (dot[1][0] - dot[1][1])) {
        if (std::min(dot[1][1], dot[1][2]) <= dot[1][0] && (std::max(dot[1][1],dot[1][2]) >= dot[1][0]) && std::min(dot[0][1], dot[0][2]) <= dot[0][0] && std::max(dot[0][1],dot[0][2]) >= dot[0][0]) {
            output << "YES";
            return 0;
        }
    }
    output << "NO";
}