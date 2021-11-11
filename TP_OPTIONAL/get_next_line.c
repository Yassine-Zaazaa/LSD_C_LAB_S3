#include "get_next_line.h"

char *ft_strchr_perso(const char * s, int c){
    int i = 0;
    char * tmp = NULL;
    while(s[i] != '\0'){
        if(s[i] == c){
            return tmp;
        }
        tmp = ft_strapp(tmp, s[i]);
        i++;
    }
    return NULL;
}

char *ft_strapp(const char *s, char c){
    int i = 0;
    char * res; 
    if(!s){
        res = malloc(2 * sizeof(char));
        res[0] = c;
        res[1] = '\0';
        return res;
    }
    res = (char *)malloc((ft_strlen(s) + 2) * sizeof(char));
    
    strncpy(res, s, ft_strlen(s));
    while(s[i] != '\0')
        i++;
    res[i] = c;
    res[i+1] = '\0';
    return res;
}


char * get_next_line(int fd){
    char *buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    char *tmp;
    char *tmp2 = NULL;
    size_t r;
    char c;
    static int pos = 0;

    while(r = read(fd, buffer, BUFFER_SIZE)){
        
        tmp = ft_strjoin(tmp, buffer);
        pos = pos + 1024;
        if(ft_strchr_perso(tmp, '\n') != NULL)
        {

            tmp2 = ft_strchr_perso(tmp, '\n');
            printf("%s\n", tmp2);
            break;
        }
    }
    return tmp2;
}

int main()
{
    char *s;
    
    int fd = open("s.txt", O_RDONLY);
    if (!fd)
    {
        printf("file doesnt exist\n");
        return 0;
    }
    s = get_next_line(fd);
    //get_next_line(fd);

    close(fd);
    /*s = "aaoee\noojaoejea\nhahaha";
    s = ft_strapp(s, 'G');
    s = ft_strchr_perso(s, '\n');
    printf("%s", s);*/
    return 0;
}
