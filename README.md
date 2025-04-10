# 🛡️ Compact Secure Disk

A C program that acts as a secure mini storage system. Files are stored in a dedicated `secure_disk/` directory, and can be decrypted and decompressed later.

---

## Features

- 🗜️ Run-Length Encoding (RLE) compression
- 🔐 XOR cipher encryption
- 📁 Secure storage in a dedicated directory
- 🖥️ Interactive menu mode
- 🧾 Batch mode with CLI support

---

## Requirements

- GCC (tested with `gcc 11+`)
- `make` (for building)

---

## How to Compile

```bash
make
```

---

## How to Clean Build Files

```bash
make clean
```
