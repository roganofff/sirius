#include <stdio.h>

struct University {
    char* name;
    int numberOfStudents;
	int rating;
};

struct University* biggestUniversity(struct University data[], int n)
{
    int maxStudents = 0, ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i].numberOfStudents > maxStudents)
        {
            maxStudents = data[i].numberOfStudents;
            ind = i;
        }
    }
    
    return &data[ind];
}

int main()
{
    int n = 3;
    struct University data[3] = {
        {"MGU", 10000, 1},
        {"Sirius", 330, 2},
        {"PTU", 100000, 228}
    };
    
    printf("%p\n", biggestUniversity(data, n));

    return 0;
}