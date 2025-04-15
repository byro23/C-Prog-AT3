#ifndef FILE_OPS_H
#define FILES_OPS_H

void encrypt_and_compress_file(const char *filename, const char *password);
void decrypt_and_decompress_file(const char *filename, const char *password);
void process_file_batch(const char *filename, const char *password);


#endif