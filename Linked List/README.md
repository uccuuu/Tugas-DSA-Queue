# Implementasi Linked List dalam C

''' Nama : MUH. YUSUF MA'RUF
''' NIM : D121241077
''' Problem Link : https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
''' Difficulty : Easy

## Penjelasan

Program ini mengimplementasikan struktur data **Singly Linked List** menggunakan bahasa C dengan beberapa operasi dasar, seperti:

1. **createNode**: Membuat node baru.
2. **append**: Menambahkan node baru di akhir Linked List.
3. **printList**: Mencetak semua data dalam Linked List.
4. **deleteAt**: Menghapus node pada posisi tertentu.

Linked List adalah struktur data yang terdiri dari serangkaian node, di mana setiap node memiliki dua bagian:
- **Data** (nilai yang disimpan dalam node).
- **Pointer ke node berikutnya** (yang disebut dengan `next`).

## Kompleksitas Waktu

1. **createNode**: O(1)  
   Fungsi ini membuat node baru dalam waktu konstan.
   
2. **append**: O(n)  
   Fungsi ini menelusuri Linked List untuk menemukan node terakhir sebelum menambahkan node baru.

3. **printList**: O(n)  
   Fungsi ini menelusuri seluruh Linked List untuk mencetak data.

4. **deleteAt**: O(n)  
   Fungsi ini mencari node pada posisi tertentu, dan kemudian menghapusnya. Pencarian posisi membutuhkan waktu O(n).

## Contoh Penggunaan
