#include "get_next_line.h"

size_t ft_strchr_perso(const char *s, int c){
	size_t 	i = 0;
	while (*(char *)s != '\0' && *s != (char)c){
		s++;
		i++;
	}
	if (*(char *)s == (char)c)
		return i;
	return -1;
}

char *get_next_line(int fd){
    char	*buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    char    *s;
    char	*tmp;
    static char*    str;
    size_t	r;
    int     len;
    if(!tmp)
        tmp = ft_strdup("");
    if(ft_strchr_perso(str, '\n') != -1)
    {
        len = ft_strchr_perso(str, '\n');
        s = ft_substr(str, 0, len);
        return s;
    }
    if(!str){
        while(r = read(fd, buffer, BUFFER_SIZE)){
            tmp = ft_strjoin(tmp, buffer);
            if(ft_strchr_perso(tmp, '\n') != -1)
            {
                len = ft_strchr_perso(tmp, '\n');
                s = ft_substr(tmp, 0, len);
                str = ft_substr(tmp, len, ft_strlen(tmp));
                printf("%s\n\n", str);
                break;
            }
        }
    }
    
    if(!s)
        return NULL;
    return s;
}
    
int main()
{
    char    *s;
    int     i = 0;
    
    int fd = open("s.txt", O_RDONLY);
    if (!fd)
    {
        printf("file doesnt exist\n");
        return 0;
    }
    s = get_next_line(fd);
    printf("%s\n", s);
    close(fd);
    return 0;
}