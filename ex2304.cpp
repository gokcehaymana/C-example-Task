#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    DIR* folder;
    struct dirent* file;
    struct stat filestat;

    folder = opendir(".");
    if (folder == NULL)
    {
        puts("Unable to read directory");
        exit(1);
    }
    while ((file = readdir(folder)) != NULL)
    {
        stat(file->d_name, &filestat);
        if (S_ISDIR(filestat.st_mode))
        {
            printf("%-14s %-5s %s",
                file->d_name,
                "<DIR>",
                ctime(&filestat.st_mtime));
        }
        else
        {
            printf("%-14s %5ld %s",
                file->d_name,
                filestat.st_size,
                ctime(&filestat.st_mtime));
        }
    }
    closedir(folder);
    return(0);
}