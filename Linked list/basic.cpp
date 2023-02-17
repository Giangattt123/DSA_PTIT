#include<bits/stdc++.h>
using ll = long long;
using namespace std;
// Các node đằng trước sẽ lưu địa chỉ của node đằng sau
// Bản chất mỗi node trong DSLK là 1 con trỏ kiểu node đang quản lí node khác 
struct node{
	int data; // phần dữ liệu
	struct node *next;// phần liên kết : lưu địa chỉ của node tiếp theo trong DSLK -> cấu trúc tự trỏ
};

// Khi muốn tạo 1 node mới -- > cấp phát động;
// Hàm cấp phát 1 node mới lưu số x(data)
// CON TRỎ KIỂU NULL
// newNode : con trỏ kiểu node
node* makeNode(int init_data){ // -> trả về con trỏ kiểu node và lưu địa chỉ của newNode
	node *newNode = new node;// cấp phát động một node mới
	newNode->data = init_data;
	newNode->next = NULL; // 
	return newNode;	// node vừa tạo chưa thêm vào danh sách nên chưa liên kết với 
	// phần tử nào cả nên phần liên kết gán bằng NULL
}

// Duyệt DSLK
void duyet(node *head){ // duyệt thông qua con trỏ head
	while(head != NULL){ // (head->next != NULL) -> ko in ra node cuối cùng
		cout << head->data << " ";
		// dịch node head sang bên phải
		head = head->next;// head -> next : địa chỉ của node tiếp theo
	}
	cout << endl;
}

// Đếm số node có trong DSLK
int size(node *head){
	int cnt = 0;
	while(head != NULL){
		++cnt;
		head = head->next;
	}
	return cnt;
}

// Thêm node vào DSLK
// Thêm vào đầu DSLK : pushFront
void pushFront(node **head , int x){ // con trỏ đến con trỏ
	node* newNode = makeNode(x);
	newNode->next = (*head);// địa chỉ của node đầu tiên trong danh sách liên kết
	(*head) = newNode;
}

// Thêm vào cuối DSLK : pushBack
void pushBack(node **head , int x){
	node* newNode = makeNode(x);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	node* tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode; // lấy địa chỉ của node mới gán cho phần next của node cuối cùng hiện tại
}

// Thêm vào vị trí thứ K trong DSLK
void insert(node **head , int x , int k){
	int n = size(*head);
	if(k < 1 || k > n + 1) return; // truy cập đến 1 vị trí không hợp lệ;
	if(k == 1) pushFront(head , x);
	else if(k == n + 1) pushBack(head , x);
	else{
		node *newNode = makeNode(x);
		node *temp = *head;
		for(int i = 1 ; i <= k - 2 ; i++){
			temp = temp->next;
		}
		// temp : k - 1
		newNode->next = temp->next;
		temp->next = newNode;
	}
}
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	struct node *head = NULL;
//	for(int i = 1; i <= 10; i++) pushFront(&head , i);
//	pushBack(&head , 100);
//	duyet(head);
	while(1){
		cout << "---------------------------\n";
		cout << "1. Them vao dau DSLK\n";
		cout << "2. Them vao cuoi DSLK\n";
		cout << "3. Them vao giua DSLk\n";
		cout << "7. Duyet\n";
		cout << "0. Thoat!\n";
		cout << "---------------------------\n";
		cout << "Nhap lua chon cua ban :";
		int option; cin >> option;
		if(option == 1){
			int x;
			cout << "Nhap gia tri can them :";
			cin >> x;
			pushFront(&head , x);
		}
		else if(option == 2){
			int x;
			cout << "Nhap gia tri can them :";
			cin >> x;
			pushBack(&head , x);
		}
		else if(option == 3){
			int x;
			cout << "Nhap gia tri can them :";
			cin >> x;
			int k;
			cout << "Nhap vi tri can them :";
			cin >> k;
			insert(&head , x , k);
		}
		else if(option == 7) duyet(head);
		else if(option == 0) break;
	}
}

