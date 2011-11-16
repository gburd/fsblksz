#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>


int main(int argc, char **argv)
{
  struct stat fi;
  char *fs = "/";
  if (argc == 2)
    fs = argv[1];
  printf("%s\n", fs);
  stat(fs, &fi);
  printf("%d\n", fi.st_blksize);
  return 0;
}
