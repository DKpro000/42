extern void ft_putchar(char c);
void rush(int x, int y);

void rush(int x, int y) {

    int i=0;
    int j=0;
    while (i < y && j < x) {
        if (i == 0) {
            if (j == 0) {
                ft_putchar('o');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('o');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar('-');
                j++;
            }
        } else if (i == y - 1) {
            if (j == 0) {
                ft_putchar('o');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('o');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar('-');
                j++;
            }
        } else {
            if (j == 0) {
                ft_putchar('|');
                (j == x - 1) ? (ft_putchar('\n'), j=0, i++) : j++;
            } else if (j == x - 1) {
                ft_putchar('|');
                ft_putchar('\n');
                j=0; i++;
            } else {
                ft_putchar(' ');
                j++;
            }
        }
    }
}

