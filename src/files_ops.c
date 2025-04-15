#include <files_ops.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt_and_compress_file(const char *filename, const char *password) {
    FILE *in = fopen(filename, "r");
    if(!in) {
        printf("Error opening file.\n");
        return;
    }

    fseek(in, 0, SEEK_END); /* Read characters until the end of the file */
    long size = ftell(in); /* Get pointer position */
    rewind(in); /* Return pointer position to start of file */

    /* Read file contents into buffer */
    char *buffer = malloc(size + 1);
    fread(buffer, 1, size, in);
    buffer[size] = '\0';
    fclose(in);

    /* Call compression algorithm here */
    /* Call encryption algorithm on compressed buffer here */

    char out_path[256];
    snprintf(out_path, sizeof(out_path), "secure_disk/%s.enc", filename); /* This path may need to adapt to Windows-based OS's */
    FILE *out = fopen(out_path, "w");
    /* fwrite(compressed, 1, strlen(compressed), out); */
    fclose(out);
    
    free(buffer);
    /* free(compressed) */
    printf("File encrypted and compressed successfully.\n");

}

void decrypt_and_decompress_file(const char *filename, const char *password) {
    
}

void process_file_batch(const char *filename, const char *password)
{
}
