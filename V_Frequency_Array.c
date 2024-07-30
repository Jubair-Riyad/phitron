#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int cnt[m+1];//array declearation
    
    for(int i=0; i<=m; i++) 
    {
        cnt[i] = 0;
    }//all counting value assigned as zero

    int val;
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &val);
        cnt[val]++;
    }
    
    for(int i=1; i<=m; i++) 
    {
        printf("%d\n", cnt[i]);
    }
    
    return 0;
}
