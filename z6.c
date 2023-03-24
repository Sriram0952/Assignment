main() {

    int a = 10;      

    if ((fork ( ) == 0))      

    a++;      

    printf ("%dn", a ); 

}
// output: 10n11n//