/* Program 3.6 Multiple discount levels */
#include <stdio.h>

/*Problem:
Suppose you have the unit price of the product still at
$3.50, but you now offer three levels of discount: 15 percent for more than 50, 10 percent for more than 20, and the
original 5 percent for more than 10.

*/

int main(void)
{
    const double unit_price =3.50;      /*Unit price in Euro */
    const double discount1 = 0.05;      /*Discount for more then 10 */
    const double discount2 = 0.1;       /*Discount for more then 20 */
    const double discount3 = 0.15;      /*Discount for more then 50 */
    double total_price = 0.0;
    int quantity = 0;
    double discount = 0.0;

    printf("Let me know how much dou you want to buy:");
    scanf("%d", &quantity);

    /*Calculate which Discount is to be applied */

    discount = 100*(quantity>50 ? discount3:(
                                  quantity>20 ? discount2:(
                                                 quantity>10 ? discount1:0.0)));

    total_price = unit_price*quantity*1.0-(quantity>50 ? discount3:
                                                         (quantity>20 ? discount2:(
                                                                            quantity>10 ? discount1:0.0)));

    printf("Since you ordered %d you get a Discount of %.0f Percent\n",quantity, discount);
    printf("So your Total Price is %.2f Euro \n",total_price);
    return 0;


}
