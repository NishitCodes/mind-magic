# 🎩 Number Mind Reader (1 to 52)
A classic interactive console-based "mind reading" game written in C.
## 🔮 How It Works
The player secretly picks any number between **1 and 52**. By asking the player whether their secret number appears across 6 different number sets, the program successfully reveals the chosen number.
Under the hood, the trick is based on **binary arithmetic**:
- Each list represents a specific bit place value ($2^0=1, 2^1=2, 2^2=4, 2^3=8, 2^4=16, 2^5=32$).
- The combination of "Yes" and "No" answers reconstructs the unique binary representation of the thought-of number.
## 🚀 How to Run
Compile and run using GCC:
```bash
gcc -o mind_reader main.c
./mind_reader
