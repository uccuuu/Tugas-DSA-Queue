# **Struktur Data - Queue**

**NAMA :** ADIN RAFI FAHREZI

**NIM :** D121241056

**Problem Link :** [Queue using Two Stacks - HackerRank](https://www.hackerrank.com/challenges/queue-using-two-stacks/problem?isFullScreen=true)

**Difficulty :** Medium

## **Short Approach Summary**

**Gunakan dua stack:**

1. `stack1` → untuk **enqueue**
2. `stack2` → untuk **dequeue** dan **print**
   Jika `stack2` kosong, pindahkan semua elemen dari `stack1` ke `stack2`.  
   Hal ini menjaga urutan elemen tetap **FIFO** (First In First Out).

**Efisiensi:**

Setiap elemen hanya dipindah sekali → rata-rata waktu per operasi O(1).
