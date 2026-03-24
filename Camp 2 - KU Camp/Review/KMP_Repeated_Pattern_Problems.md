# KMP Repeated Pattern — Problem Set (8 ข้อ)

> ต่อยอดจาก LeetCode 459: Repeated Substring Pattern  
> ทุกข้อใช้แนวคิด KMP Failure Function เป็นแกนหลัก

---

## Problem 1: Shortest Repeating Unit

### Description

Given a string `s` that is guaranteed to be a repeated substring pattern, find the **shortest substring** `t` such that `s` is formed by repeating `t` multiple times.

If `s` is not a repeated pattern, return `s` itself.

### Input

- A single line containing string `s` (1 ≤ |s| ≤ 10⁵), consisting of lowercase English letters.

### Output

- A single line containing the shortest repeating unit `t`.

### Examples

| Input | Output | Explanation |
|---|---|---|
| `abababab` | `ab` | "ab" repeated 4 times |
| `abcabcabcabc` | `abc` | "abc" repeated 4 times |
| `aaaa` | `a` | "a" repeated 4 times |
| `abcdef` | `abcdef` | Not a repeated pattern → return itself |
| `abaabb` | `abaabb` | Not a repeated pattern → return itself |

### Test Cases

```
Input:  xyzxyzxyz
Output: xyz

Input:  abcabc
Output: abc

Input:  zzzzzzzzzz
Output: z

Input:  abcdabce
Output: abcdabce

Input:  aabaabaab
Output: aab
```

### Hint

> lps[n-1] ให้ความยาว overlap → คาบ = n - lps[n-1] → ถ้า n หารลงตัว → substr(0, คาบ)

---

## Problem 2: Minimum Append to Repeat

### Description

Given a string `s`, find the **minimum number of characters** you need to append to the end of `s` so that the resulting string is a repeated substring pattern (i.e., formed by repeating some substring at least 2 times).

Output the number of characters to append **and** the resulting string.

### Input

- A single line containing string `s` (1 ≤ |s| ≤ 10⁵), consisting of lowercase English letters.

### Output

- First line: the minimum number of characters to append.
- Second line: the resulting repeated string.

### Examples

| Input | Output (count, string) | Explanation |
|---|---|---|
| `abcab` | `1`, `abcabc` | Append "c" → "abcabc" = "abc" × 2 (ซ้ำ 2 ครั้ง เป็นจำนวนน้อยสุดที่ >= 2) |
| `abab` | `0`, `abab` | Already repeated |
| `abc` | `3`, `abcabc` | Append "abc" → "abcabc" = "abc" × 2 |
| `aaa` | `0`, `aaa` | Already repeated |
| `ab` | `2`, `abab` | Append "ab" → "abab" = "ab" × 2 |

### Test Cases

```
Input:  abcabcab
Output: 1
        abcabcabc

Input:  xyzxy
Output: 1
        xyzxyz

Input:  aaab
Output: 4
        aaabaaab

Input:  abcdabcdabcdab
Output: 2
        abcdabcdabcdabcd

Input:  z
Output: 1
        zz
```

### Hint

> หาคาบ len = n - lps[n-1] → ต้องเติมอีก (len - n % len) % len ตัว  
> แต่ถ้า lps[n-1] == 0 → คาบ = n → ต้องเติม n ตัว (ทำซ้ำอีก 1 รอบ)  
> Special case: ถ้าเติม 0 ตัวแต่ซ้ำแค่ 1 ครั้ง (n == len) → ต้องเติม n ตัว

---

## Problem 3: At Least K Repeats

### Description

Given a string `s` and an integer `k`, determine if `s` can be constructed by repeating a substring **at least `k` times**.

### Input

- First line: string `s` (1 ≤ |s| ≤ 10⁵), consisting of lowercase English letters.
- Second line: integer `k` (2 ≤ k ≤ 10⁵).

### Output

- `YES` if `s` is formed by repeating some substring at least `k` times, `NO` otherwise.

### Examples

| Input (s, k) | Output | Explanation |
|---|---|---|
| `abababab`, `2` | `YES` | "ab" × 4, 4 ≥ 2 |
| `abababab`, `4` | `YES` | "ab" × 4, 4 ≥ 4 |
| `abababab`, `5` | `NO` | "ab" × 4, 4 < 5 |
| `abcabc`, `3` | `NO` | "abc" × 2, 2 < 3 |
| `aaa`, `3` | `YES` | "a" × 3, 3 ≥ 3 |

### Test Cases

```
Input:  xyzxyzxyzxyzxyzxyz
        3
Output: YES
(xyz × 6, 6 ≥ 3)

Input:  abcabcabc
        4
Output: NO
(abc × 3, 3 < 4)

Input:  zzzzzzzzzz
        10
Output: YES
(z × 10, 10 ≥ 10)

Input:  abcdabcd
        3
Output: NO
(abcd × 2, 2 < 3)

Input:  aabaabaab
        3
Output: YES
(aab × 3, 3 ≥ 3)
```

### Hint

> หาคาบ len → ถ้า n % len == 0 && n / len >= k → YES

---

## Problem 4: Count Distinct Repeating Units

### Description

Given a string `s` that is guaranteed to be a repeated substring pattern, count the number of **distinct substrings** that can be repeated to form `s`.

### Input

- A single line containing string `s` (2 ≤ |s| ≤ 10⁵), consisting of lowercase English letters.
- Guaranteed that `s` is a repeated substring pattern.

### Output

- A single integer: the number of distinct repeating units.

### Examples

| Input | Output | Explanation |
|---|---|---|
| `abababab` | `2` | "ab" × 4, "abab" × 2 |
| `abcabcabcabc` | `2` | "abc" × 4, "abcabc" × 2 |
| `aaaaaa` | `3` | "a" × 6, "aa" × 3, "aaa" × 2 |
| `abcabc` | `1` | "abc" × 2 only |
| `abababababab` | `2` | "ab" × 6, "ababab" × 2 (also "abab" × 3) → 3 |

### Corrected Example for last row

| Input | Output | Explanation |
|---|---|---|
| `abababababab` | `3` | "ab" × 6, "abab" × 3, "ababab" × 2 |

### Test Cases

```
Input:  abcabcabcabcabcabc
Output: 2
("abc" × 6, "abcabc" × 3 — these are the valid repeating units of length 3 and 6; 
length 9 gives 18/9=2 ✓ → actually 3)

Let's be precise:
n = 18, shortest unit len = 3
Multiples of 3 that divide 18 and are < 18: 3, 6, 9
→ Output: 3

Input:  aaaaaaaaaa
Output: 4
(n=10, len=1, divisors of 10 that are multiples of 1 and < 10: 1,2,5 → 3)
Correction: multiples of 1 that divide 10 and < 10: 1, 2, 5 → 3

Input:  abababab
Output: 2
(n=8, len=2, multiples of 2 dividing 8 and < 8: 2, 4 → 2)

Input:  abcabc
Output: 1
(n=6, len=3, multiples of 3 dividing 6 and < 6: 3 → 1)

Input:  abaababaab
(This is NOT a valid repeated pattern, so this won't appear as input)
```

### Hint

> หาคาบสั้นสุด len → นับจำนวนทวีคูณของ len ที่หาร n ลงตัว และ < n  
> ทวีคูณของ len ที่หาร n ลงตัว ↔ (n/len) ต้องหารด้วย (k) ลงตัว โดย k = ทวีคูณ/len  
> → เท่ากับนับจำนวน divisor ของ (n/len) ที่ > 1

---

## Problem 5: Repeated String Match (LeetCode 686)

### Description

Given two strings `a` and `b`, find the **minimum number of times** you must repeat string `a` so that `b` is a substring of the repeated `a`.

If it is impossible, return `-1`.

### Input

- First line: string `a` (1 ≤ |a| ≤ 10⁴).
- Second line: string `b` (1 ≤ |b| ≤ 10⁴).
- Both consist of lowercase English letters.

### Output

- A single integer: minimum number of repeats, or `-1`.

### Examples

| Input (a, b) | Output | Explanation |
|---|---|---|
| `abcd`, `cdabcdab` | `3` | "abcdabcdabcd" contains "cdabcdab" |
| `a`, `aa` | `2` | "aa" contains "aa" |
| `a`, `b` | `-1` | No matter how many times repeat "a", "b" won't appear |
| `abc`, `cabcabca` | `4` | "abcabcabcabc" contains "cabcabca" |
| `ab`, `ba` | `2` | "abab" contains "ba" |

### Test Cases

```
Input:  xyz
        zxyzxy
Output: 3
("xyzxyzxyz" contains "zxyzxy")

Input:  abcabc
        abcabcabc
Output: 2
("abcabcabcabc" contains "abcabcabc")

Input:  abc
        def
Output: -1

Input:  a
        aaaaaaaaaa
Output: 10

Input:  abab
        abababab
Output: 2
("abababab" contains "abababab" → need "abab" × 2 = "abababab")
Wait, len(b) = 8, len(a) = 4, ceil(8/4) = 2, "abababab" contains "abababab" ✓
Output: 2
```

### Hint

> Repeat a จนยาว ≥ len(b) → เช็ค substring ด้วย KMP  
> ถ้าไม่เจอ → repeat อีก 1 รอบ → ถ้ายังไม่เจอ → -1  
> จำนวนรอบ = ceil(len(b) / len(a)) แล้วลอง +1

---

## Problem 6: Minimum Deletions to Repeat

### Description

Given a string `s`, find the **minimum number of characters to delete** (from any positions) so that the remaining string is a repeated substring pattern (formed by repeating some substring at least 2 times) and has length ≥ 2.

### Input

- A single line containing string `s` (2 ≤ |s| ≤ 500), consisting of lowercase English letters.

### Output

- A single integer: minimum number of deletions.

### Examples

| Input | Output | Explanation |
|---|---|---|
| `abab` | `0` | Already "ab" × 2 |
| `abac` | `1` | Delete 'c' → "aba"? No. Delete 'a'(pos2) → "abc"? No. Delete 'c' → "aba"? No. Better: delete 'b' → "aac"? No. Delete 'c' → "aba"? No. Delete second 'a' → "abc"? No. Hmm... Delete 'c' → keep "aba"? not repeated. Keep "aa" by deleting 'b','c' → 2 deletions. Or keep "abab"? can't. → Output: 2 (keep "aa") |
| `aabcaabc` | `0` | Already "aabc" × 2 |
| `abcabd` | `1` | Delete 'd' → "abcab"? Not repeated. Delete last 2 → "abca"? No. Actually delete 'd' and we need "abcabc" but only have "abcab". Better approach: delete 'd' → "abcab" not repeated. Delete 'c' at pos 2 → "ababd"? No. Keep "abab" by deleting 'c','d' → 2 deletions. Or keep "aa" → 4 deletions. → Output: 2 |
| `aaaa` | `0` | Already "a" × 4 |
| `abcde` | `3` | Keep "aa"? no a's repeated. Keep any 2 same chars → need at least 2 of same char. If none repeat: impossible with len 2. "abcde" has no repeated chars → hmm. Actually we must keep ≥ 2 chars that form a pattern. No two same chars → can we do length 2 with same? No. So this is impossible? Let's say if no valid answer exists, return -1. |

### Revised Constraints

- Guaranteed that `s` contains at least one character that appears ≥ 2 times.

### Revised Examples

| Input | Output | Explanation |
|---|---|---|
| `abab` | `0` | Already repeated |
| `aabcaabc` | `0` | Already repeated |
| `abac` | `2` | Keep "aa" (delete 'b','c') |
| `abcabd` | `2` | Keep "abab" (delete 'c','d') |
| `aaabab` | `0` | "aaabab" → not repeated. Actually: len=6, lps? a-a-a-b-a-b → lps=[0,1,2,0,1,0]. len=6-0=6. 6%6==0 but lps[5]==0. Not repeated. → need deletions. Keep "aaa" (delete 'b','a','b') → 3. Or keep "abab" → delete first 'a' and third 'a' → 2 deletions. → Output: 2 |

### Test Cases

```
Input:  abcabcx
Output: 1
(Delete 'x' → "abcabc" = "abc" × 2... wait "abcabc" has length 7? 
No: "abcabc" length 7 → not divisible. 
Hmm: s = "abcabcx" length 7. Delete 'x' → "abcabc" length 6 = "abc" × 2 ✓)
Output: 1

Input:  aabbaabb
Output: 0
("aabb" × 2 ✓)

Input:  abcxabc
Output: 1
(Delete 'x' → "abcabc" = "abc" × 2)

Input:  xyxzxyxz
Output: 0
("xyxz" × 2)

Input:  aabcaab
Output: 1
(Delete last 'b'? → "aabcaa" not repeated. Delete 'c' → "aab aab" = "aab" × 2 ✓ → 1 deletion)
```

### Hint

> N ≤ 500 → สามารถ brute force ได้  
> ลอง enumerate ทุก possible unit length `len` (1 ≤ len ≤ n/2)  
> สำหรับแต่ละ len → ใช้ greedy/DP หา subsequence ที่เป็น pattern ซ้ำ → นับ deletions  
> หรือ: ลอง generate ทุก possible repeating string แล้วหา LCS กับ s → n - LCS = deletions

---

## Problem 7: Best Rotation for Shortest Period

### Description

Given a string `s`, you can **cyclically rotate** it (move the first character to the end) any number of times (0 to |s|-1). Among all rotations, find the one that has the **shortest repeating period**.

If multiple rotations have the same shortest period, return the **lexicographically smallest** one.

### Input

- A single line containing string `s` (1 ≤ |s| ≤ 10⁵), consisting of lowercase English letters.

### Output

- First line: the shortest period length achievable by any rotation.
- Second line: the lexicographically smallest rotation that achieves this period.

### Examples

| Input | Output (period, rotation) | Explanation |
|---|---|---|
| `abcabc` | `3`, `abcabc` | Already period 3, all rotations with period 3 → "abcabc" is lex smallest |
| `aab` | `1`, `aab` | Rotations: "aab"(period 3), "aba"(period 3), "baa"(period 3). Hmm none are period 1. Let's reconsider. Actually: "aab" lps=[0,1,0] period=3. "aba" lps=[0,0,1] period=2 (3%2≠0 so not repeated, period=3). "baa" period=3. All have period 3 (not fully repeated). Shortest period = 3. Lex smallest rotation = "aab". |
| `abab` | `2`, `abab` | Period 2 ("ab" × 2). Rotations: "baba" period 2. "abab" < "baba" lex → output "abab" |
| `cababab` | `2`, `ababbc`? Let's compute properly. |

### Simpler Examples

| Input | Output (period, rotation) | Explanation |
|---|---|---|
| `abcabc` | `3`, `abcabc` | Period 3, lex smallest |
| `abab` | `2`, `abab` | "ab" × 2 |
| `aabb` | `2`, `aabb` | Rotations: "aabb" period 4, "abba" period 4, "bbaa" period 4, "baab" period 4. None are periodic. Shortest = 4, lex smallest = "aabb" |
| `aaaa` | `1`, `aaaa` | All rotations same, period 1 |
| `abcabcabc` | `3`, `abcabcabc` | "abc" × 3 |

### Test Cases

```
Input:  xyzxyz
Output: 3
        xyzxyz

Input:  zzzz
Output: 1
        zzzz

Input:  baba
Output: 2
        abab

Input:  cabcab
Output: 3
        abcabc

Input:  dcbadcba
Output: 4
        adcbadcb
(Rotation "adcbadcb" → wait, need to verify. 
Rotations of "dcbadcba": dcbadcba, cbadcbad, badcbadc, adcbadcb, dcbadcba...
"adcbadcb" → lps check → period 4? "adcb" × 2 ✓ → period 4.
Lex smallest with period 4: "adcbadcb" vs others → yes.)
Output: 4
        adcbadcb
```

### Hint

> Brute force: ลอง n rotations → ทำ KMP หาคาบแต่ละตัว → O(n²)  
> Optimized: สังเกตว่า ถ้า string มีคาบ p → ทุก rotation ก็มีคาบ p → คาบไม่เปลี่ยน!  
> ดังนั้นแค่หาคาบของ s แล้วหา lex smallest rotation (ใช้ Booth's algorithm O(n))

---

## Problem 8: 2D Repeated Tile

### Description

Given an `R × C` matrix of lowercase English letters, determine if it can be formed by **tiling** a smaller `r × c` sub-matrix. The sub-matrix is repeated to fill the entire matrix.

Find the **smallest such tile** (smallest area `r × c`).

### Input

- First line: two integers `R` and `C` (1 ≤ R, C ≤ 500).
- Next `R` lines: each containing `C` lowercase English letters.

### Output

- First line: `r c` (dimensions of the smallest tile).
- Next `r` lines: the tile itself.

### Examples

**Example 1:**

```
Input:
4 6
abcabc
abcabc
abcabc
abcabc

Output:
1 3
abc
```

Explanation: Tile "abc" (1×3) repeated 4 rows × 2 cols.

**Example 2:**

```
Input:
4 4
abab
cdcd
abab
cdcd

Output:
2 2
ab
cd
```

Explanation: Tile 2×2 "ab/cd" repeated 2×2.

**Example 3:**

```
Input:
3 3
abc
def
ghi

Output:
3 3
abc
def
ghi
```

Explanation: No smaller tile exists → the matrix itself is the tile.

**Example 4:**

```
Input:
2 2
aa
aa

Output:
1 1
a
```

### Test Cases

```
Input:
6 4
abab
abab
cdcd
abab
abab
cdcd

Output:
3 2
ab
ab
cd

---

Input:
3 6
xyzxyz
xyzxyz
xyzxyz

Output:
1 3
xyz

---

Input:
4 4
abcd
abcd
abcd
abcd

Output:
1 4
abcd

---

Input:
2 6
abcabc
defdef

Output:
2 3
abc
def
```

### Hint

> แยกทำ 2 มิติ:  
> 1) หาคาบแนวแถว: เอาแต่ละแถวมาเป็น "ตัวอักษร" → ทำ KMP บน sequence of rows → ได้ r  
> 2) หาคาบแนวคอลัมน์: ทำ KMP บนแต่ละแถว → ได้คาบแต่ละแถว → เอา GCD ของทุกคาบ → ได้ c  
> หรือง่ายกว่า: ทำ KMP บนแถวแรก → ได้ c, ทำ KMP บน column of rows → ได้ r  
> Tile = matrix[0..r-1][0..c-1]

---

## Summary Table

| # | Problem | Difficulty | Key Concept |
|---|---|---|---|
| 1 | Shortest Repeating Unit | ⭐ Easy | KMP → len = n - lps[n-1] |
| 2 | Minimum Append to Repeat | ⭐⭐ Easy-Med | KMP + modular arithmetic |
| 3 | At Least K Repeats | ⭐ Easy | KMP + เงื่อนไข n/len ≥ k |
| 4 | Count Distinct Repeating Units | ⭐⭐ Medium | KMP + number theory (divisors) |
| 5 | Repeated String Match | ⭐⭐ Medium | Full KMP substring search |
| 6 | Minimum Deletions to Repeat | ⭐⭐⭐ Hard | KMP + DP/Brute force |
| 7 | Best Rotation for Shortest Period | ⭐⭐⭐ Hard | KMP + Booth's Algorithm |
| 8 | 2D Repeated Tile | ⭐⭐⭐ Hard | 2D KMP + GCD |

---

*ทุกข้อใช้ KMP Failure Function เป็นเครื่องมือหลัก — ฝึกให้คล่องแล้วจะแก้ได้ทุกข้อ!*
