### 🔐 Caesar Cipher Word Encryptor

This C++ program performs a Caesar cipher-style encryption on a given word, based on the shift determined from two input words. It demonstrates string manipulation and basic modular arithmetic for character shifting.

## 📋 Description

The program reads three words:

1. `originalWord` – the original, unencrypted word
2. `encryptedOriginalWord` – the encrypted version of the first word
3. `newWordToEncrypt` – the word you want to encrypt using the same shift logic

The logic calculates the shift by comparing the first letters of `originalWord` and `encryptedOriginalWord`. It then applies this shift to each character of `newWordToEncrypt`, assuming all characters are uppercase English letters (`A–Z`), and wraps around using modular arithmetic.

---

## 🧠 Example

### Input:

```
HELLO KHOOR WORLD
```

### Output:

```
ZRUOG
```

**Explanation**:

* First character shift: `K - H = 3`
* Apply shift of `+3` to each letter in `WORLD` → `ZRUOG`

---

## 🛠️ How It Works

### Functions:

* `encryptLogic()`
  Calculates the alphabetic shift between `originalWord` and `encryptedOriginalWord`.

* `encryptWord()`
  Applies the shift to each letter of `newWordToEncrypt` using Caesar cipher logic.

---

## ✅ Assumptions

* All input words contain only uppercase English letters.
* Shift is applied cyclically (e.g., `Z` shifted by 1 becomes `A`).
* Only the first character is used to determine the encryption shift.

---

## 🚀 How to Run

### Compilation:

```bash
g++ -o encrypt encrypt.cpp
```

### Execution:

```bash
./encrypt
```

### Then input three space-separated words:

```text
HELLO KHOOR WORLD
```

---

## 📦 Sample Use Case

This can be used in:

* Simple secure word games
* Intro to cryptography concepts
* Teaching string and character manipulation in C++

---

## 📁 File Structure

```
encrypt.cpp    # Main C++ source file
README.md      # You're reading it!
```

---

## ✍️ Author

Taniksha Shah
Made as part of C++ string and logic practice.

---

Let me know if you want a version with screenshots or terminal output visuals!
