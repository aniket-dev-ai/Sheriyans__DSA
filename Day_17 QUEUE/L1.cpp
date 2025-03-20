// Queue ek linear data structure hai jo FIFO (First In, First Out) principle follow karta hai. Matlab jo element pehle queue me aata hai, wahi pehle bahar nikalta hai. Ye ek real-world analogy se samjho:

// 🚍 Bus Queue Example:
// Agar log ek bus stop par line me khade hain, toh jo pehle line me aaya hoga, wahi pehle bus me chadhega.
// 🔥 Queue ke Important Concepts:
// 🔷 Basic Terminology:

//     Front: Queue ke first element ko point karta hai (jo sabse pehle remove hoga).
//     Rear: Queue ke last element ko point karta hai (jo sabse last me insert hota hai).
//     Enqueue (Insertion): Queue me naya element add karna.
//     Dequeue (Deletion): Queue se first element remove karna.
//     isEmpty(): Check karta hai ki queue empty hai ya nahi.
//     isFull(): Check karta hai ki queue full hai ya nahi (agar fixed size queue ho toh).
//     Peek() / Front(): Queue ke first element ko return karta hai bina remove kiye.

// 🔥 Types of Queue (Bahut Important!)

// Queue ke alag-alag types hote hain jo alag-alag situations me use hote hain.
// 1️⃣ Simple Queue (Linear Queue)

//     FIFO (First In, First Out) follow karta hai.
//     Ek hi direction me insert aur delete hote hain.
//     Insertion rear se hoti hai aur deletion front se.
//     Drawback: Agar queue me elements delete ho jaayein, toh bhi space reuse nahi hoti.

//     ⏩ Time Complexity:

//     Enqueue: O(1)
//     Dequeue: O(1)
//     Display: O(n)

// 2️⃣ Circular Queue

//     Ye bhi FIFO follow karta hai, lekin space reuse karta hai.
//     Circular behavior me rear agar last position par pahunch jaye, toh starting se dobara elements insert ho sakte hain (agar space ho toh).
//     Advantage: Memory utilization better hoti hai.

//     ⏩ Time Complexity:

//     Enqueue: O(1)
//     Dequeue: O(1)

// 3️⃣ Priority Queue

//     Isme elements priority ke according insert hote hain, FIFO follow nahi karta.
//     Higher priority wala element pehle process hota hai.
//     Types:
//         Max Priority Queue: Sabse bada element pehle nikalta hai.
//         Min Priority Queue: Sabse chhota element pehle nikalta hai.
//     Implementation: Heap Data Structure se hoti hai.

// 4️⃣ Deque (Double-Ended Queue)

//     Isme elements front aur rear dono jagah se insert aur delete ho sakte hain.
//     Types:
//         Input Restricted Deque: Sirf rear se insert, dono se delete.
//         Output Restricted Deque: Dono se insert, sirf front se delete.

// Queue ka Implementation Array vs Linked List
// Feature	Array Queue	Linked List Queue
// Memory	Fixed	Dynamic
// Insert/Delete	O(1) (rear/front)	O(1) (rear/front)
// Overflow	Possible	Not Possible
// 💡 Real-Life Applications of Queue

// ✔ CPU Scheduling (OS me Process Execution)
// ✔ Printer Queue (Documents print order)
// ✔ Call Center (First customer, first service)
// ✔ Breadth-First Search (Graph Traversal)
// ✔ Network Routers (Data Packets transmission)
// 🔥 Conclusion

// Queue ek powerful data structure hai jo bahut sari real-world problems solve karta hai. Circular Queue, Priority Queue, Deque aur Linked List Implementation jaise advanced topics bhi bahut useful hote hain.

// Agar Competitive Programming me strong banna hai, toh Priority Queue (Heap) aur Deque par dhyan do! 🚀🔥

// Koi aur doubt ya deep explanation chahiye toh batao, main aur details me bata dunga! 😘