#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int file_from, file_to;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open %s for reading\n", argv[1]);
        exit(98);
    }
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open %s for writing\n", argv[2]);
        exit(99);
    }

    while ((bytes_read = read(file_from, buffer, 1024)) > 0)
    {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }
    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close to fd %d\n", file_to);
        exit(100);
    }
    return (0);
}
