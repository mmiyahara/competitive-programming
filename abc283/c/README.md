## `main_1.cpp`

- To count the number of digits, use `cin >> s` and `s.length()`.
- Compare the two digits in each loop, and if they are both `0`, skip the next comparison.
- e.g. `s = 40004`
  - Compare `4` (index 0) and `0` (index 1). They are not both `0`.
  - Compare `0` (index 1) and `0` (index 2). They are both `0`, so skip the next comparison.
  - Compare `0` (index 3) and `4` (index 4). They are not both `0`.

## `main_2.cpp`

- e.g. `s = 40004`
  - Compare `4` (one's place) and `0` (ten's place).
  - Compare `0` (ten's place) and `0` (hundred's place). They are both `0`. so skip hundred's vs thousand's.
  - Compare `0` (thousand's) and `4` (ten thousand's).
