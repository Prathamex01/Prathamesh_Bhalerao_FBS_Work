#include <stdio.h>

void main() {
    int start, end;
    printf("Enter the starting and ending number: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
    printf("Invalid range! Start should be less than or equal to end.\n" );
    
    return;

}
printf("Armstrong numbers from %d to %d are:\n", start, end);


    for (int num = start; num <= end; num++) {
        int temp = num;
        int count = 0;
        int sum = 0;

        
        int temp1 = temp;
        while (temp1 > 0) {
            count++;
            temp1 = temp1 / 10;
        }

        
        temp1 = temp;
        while (temp1 > 0) {
            int rem = temp1 % 10;
            int res = 1;

            for (int i = 1; i <= count; i++) {
                res= res*rem;
            }

            sum=sum+ res;
            temp1 /= 10;
        }

    
        if (sum == num) {
            printf("%d\n", num);
        }
    }
}
