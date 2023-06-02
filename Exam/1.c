#include <stdio.h>
#include <math.h>

struct Coord {
	int x;
	int y;
};

int canGet(struct Coord start, struct Coord finish)
{
    if( (start.x != finish.x && start.y == finish.y) || 
        (start.x == finish.x && start.y != finish.y) )
    {
        return 1;
    } else
    {
        return 0;
    }
}

int main()
{
    struct Coord start, finish;

    printf("Start: ");
    scanf("%d %d", &start.x, &start.y);
    printf("Finish: ");
    scanf("%d %d", &finish.x, &finish.y);

    printf("%d\n", canGet(start, finish));

    // struct Coord start1 = {5, 8}, finish1 = {7, 8}; // 
    // printf("%d\n", canGet(start1, finish1));

    // struct Coord start2 = {1, 2}, finish2 = {3, 4};
    // printf("%d\n", canGet(start2, finish2));

    return 0;
}