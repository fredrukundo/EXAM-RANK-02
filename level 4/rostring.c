// #include <unistd.h>

// void ft_rostring(char *s)
// {
//     int i;
//     int start;
//     int end;
//     int flag;

//     flag = 0;
//         i = 0;
//         while (s[i] == ' ' || s[i] == '\t')
//             i++;
//         start = i;
//         while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
//             i++;
//         end = i;
//         while (s[i] == ' ' || s[i] == '\t')
//             i++;
//         while(s[i]) 
//         {
//             while ((s[i] == ' ' && s[i + 1] == ' ') || (s[i] == '\t' && s[i + 1] == '\t'))
//                 i++; 
//             if (s[i] == ' ' || s[i] == '\t')
//                 flag = 1; 
//             write(1, &s[i], 1);
//             i++;
//         }
//         if (flag)
//             write(1, " ", 1);
//         while (start < end)
//         {
//             write(1, &s[start], 1);
//             start++;
//         }
// }

// int main()
// {
// 	char s[] = "Que la      lumiere soit et la lumiere fut";
// 	ft_rostring(s);
// }

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int start;
    int end;
    int flag;
    if (ac > 1 && av[1][0])
    {
        i = 0;
        flag = 0;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        start = i;
        while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i++;
        end = i;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            while((av[1][i] == ' ' && av[1][i + 1] == ' ') || (av[1][i] == '\t' && av[1][i + 1] == '\t'))
                i++;
            if(av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            write(1, &av[1][i], 1);
            i++;
        }
        if(flag)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
        
    }
    else
    write(1, " ", 1);
}