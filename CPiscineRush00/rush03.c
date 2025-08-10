extern void ft_putchar(char c);
void rush(int x, int y);

void rush(int x, int y) {
    if (x <= 0 || y <= 0) {
        char *msg = "Please enter positive integers!";
        for (int i = 0; msg[i] != '\0'; i++) {
            ft_putchar(msg[i]);
        }
        return;
    }

    int i=0;
    int j=0;
    while (i < y && j < x) {
        if (i == 0) {
            if (j == 0) {
                ft_putchar('A');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('C');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar('B');
                j++;
            }
        } else if (i == y - 1) {
            if (j == 0) {
                ft_putchar('A');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('C');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar('B');
                j++;
            }
        } else {
            if (j == 0) {
                ft_putchar('B');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('B');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar(' ');
                j++;
            }
        }
    }
}

