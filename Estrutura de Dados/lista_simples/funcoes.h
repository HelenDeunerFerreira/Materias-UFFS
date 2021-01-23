struct Node{
    int num;
    struct Node *prox;
};
typedef struct Node node;

node* init();
int empty_queue(int size);
int full_queue(int size, int max);
node * push(node *last, int value);
node * pop(node *head);
node * middlepush(node *head, int pos, int value);
void print_queue(node *head);
