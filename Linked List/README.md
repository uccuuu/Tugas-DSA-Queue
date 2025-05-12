# Struktur Data - Linked List

<pre>
<strong>NAMA         :</strong> MUH. YUSUF MA'RUF
<strong>NIM          :</strong> D121241077
<strong>Problem Link :</strong> <a href="https://www.hackerrank.com/challenges/queue-using-two-stacks/problem?isFullScreen=true"> Delete a Node - HackerRank</a>
<strong>Difficulty   :</strong> Easy
</pre>

## Penjelasan

Program ini mengimplementasikan struktur data **Singly Linked List** menggunakan bahasa C dengan beberapa operasi dasar, seperti:
<pre>
<strong>1. createNode**: Membuat node baru.</strong>
<strong>2. append**: Menambahkan node baru di akhir Linked List.</strong>
<strong>3. **printList**: Mencetak semua data dalam Linked List.</strong>
<strong>4. **deleteAt**: Menghapus node pada posisi tertentu.</strong>
</pre>
Linked List adalah struktur data yang terdiri dari serangkaian node, di mana setiap node memiliki dua bagian:
<pre>
<strong>- Data (nilai yang disimpan dalam node).</strong>
<strong>- Pointer ke node berikutnya** (yang disebut dengan `next`).</strong>
</pre>

## Kompleksitas Waktu
<pre>
<strong>1. createNode: O(1)</strong>
   Fungsi ini membuat node baru dalam waktu konstan.
</pre> 
<pre>
<string>2. append: O(n)</string> 
   Fungsi ini menelusuri Linked List untuk menemukan node terakhir sebelum menambahkan node baru.
</pre>
<pre>
<strong>3. printList: O(n)</strong> 
   Fungsi ini menelusuri seluruh Linked List untuk mencetak data.
</pre>
<pre>
<stroong>4. deleteAt: O(n)</stroong>  
   Fungsi ini mencari node pada posisi tertentu, dan kemudian menghapusnya. Pencarian posisi membutuhkan waktu O(n).
</pre>
