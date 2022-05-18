static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

static

Node* append_left(size_t n, char new_data[n]){
    Node* new = (Node*)malloc(sizeof(Node));
    strcpy(new->data, new_data);

    new->next = _head->next;
    _head->next->prev = new;

    _head->next = new;
    new->prev = _head;

    return _head;
}

// move
Node* insert_after(Node* cur_node, Node* new_node){
    new_node->prev->next = new_node->next;
    new_node->next->prev = new_node->prev;

    new_node->next = cur_node->next;
    cur_node->next->prev = new_node;

    cur_node->next = new_node;
    new_node->prev = cur_node;

    return _head;
}