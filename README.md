# Get Next Line

Get the next line of a file.

Authorized functions:
 - All the fonctions from my own libc https://github.com/AnthonyLedru/libft_v2
 - Read
 - Malloc
 - Free
 
## Usage

### Example to read all a file
```
char *line;
int fd = open(path, O_RDONLY);
while (get_next_line(fd, &line) == 1)
{
    printf("%d\n", line);
    free(line);
}
```

## Subject 
 
https://github.com/AnthonyLedru/get_next_line/blob/master/get_next_line.pdf
 
 

