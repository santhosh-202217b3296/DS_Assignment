#include<stdio.h>

int main() {
    int n, i;
    int a[100], b[100], t[100], w[100], g[100];
    float att = 0, awt = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Enter the arrival times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    g[0] = 0;
    for (i = 0; i < n; i++) {
        g[i + 1] = g[i] + b[i];
    }

    for (i = 0; i < n; i++) {
        w[i] = g[i] - a[i];
        t[i] = g[i + 1] - a[i];
        awt += w[i];
        att += t[i];
    }

    awt = awt / n;
    att = att / n;

    printf("\n\tProcess\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("\tP%d\t\t%d\t\t%d\n", i, w[i], t[i]);
    }
    printf("Average Waiting Time: %.2f\n", awt);
    printf("Average Turnaround Time: %.2f\n", att);

    return 0;
}
