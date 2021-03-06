/* A very simple subnet calculator in C, written by
 * Jack-Benny Persson (jack-benny@cyberinfo.se).
 * Released under GNU GPLv2.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int net;
    long int hosts, addr;
    printf("Enter netmask in slash-notation without the slash: ");
    scanf("%2d", &net);

    if (net >= 0 && net <= 32) /* Sanity check the user input */
    {
        printf("Netmask bit: %d\n\n", net);	
        addr = pow(2, 32-net); /* Calculate number of addresses */
        printf("%ld total addresses\n", addr);

        hosts = addr-2;
        /* Check if number of usable hosts is a negative value */ 
        if (hosts < 0)
        {
            hosts = 0;   /* Set usable hosts to zero if it was negative */
        }   
        printf("%ld usable addresses for hosts\n", hosts);
        return 0;
    }
    else  /* If the user entered anything else than 0-32 */
    {
        printf("Only values between 0-32 are accepted\n");
        return 1;
    }

    return 1;
}
