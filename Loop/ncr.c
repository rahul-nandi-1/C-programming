#include<stdio.h>
int main(){
    int n;
    printf ("Enter the number n:");
    scanf ("%d",&n);
    int r;
    printf ("Enter the number r:");
    scanf ("%d", &r);
    //ncr=n!/r!*(n-r)!
    int nfact=1;
    int rfact=1;
    int nrfact=1;//(for n-r factorial)
    for (int i=2;i<=n;i++){
        nfact=nfact*i;
    }
    for (int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    for (int i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf ("%d", ncr);
    return 0;
}