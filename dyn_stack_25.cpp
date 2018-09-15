//

struct node {
    int value;
    node* prev = nullptr;
};


node* g_top(nullptr); // init top of stack

bool is_empty() {
    return !g_top;
}

void push(int value) {
    node* tmp = new node();
    tmp->value = value;
    tmp->prev = g_top;
    g_top = tmp;
}

int* pop() {
    if (!is_empty()) {
        //int tmp_val = g_top->value;
        int* tmp_val = new int(g_top->value);
        node* tmp_top = g_top;
        g_top = g_top->prev;
        delete tmp_top;
        return tmp_val;
    }
    return nullptr;
}


int main() {

    //TODO:
    return 0;
}
