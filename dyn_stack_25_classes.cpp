


class stack {

private:
	struct node {
    	int value;
    	node* prev = nullptr; //NULL
	};
	node* top;
	bool is_empty();

public: //public API
	stack() : top(nullptr) {}
	~stack() {}
	void push(int value);
	int* pop();
};


bool stack::is_empty() {
    return !top;
}


// stack::stack() {
// 	top = nullptr;
// }


void stack::push(int value) {
    node* tmp = new node();
    tmp->value = value;
    tmp->prev = top;
    top = tmp;
}


int* stack::pop() {
    if (!is_empty()) {
        int* tmp_val = new int(top->value);
        node* tmp_top = top;
        top = top->prev;
        delete tmp_top;
        return tmp_val;
    }
    return nullptr;
}



int main() {

	//TODO
	// implement stack filling
	// implement read method
	// implement reverse() with pointer mangling

    return 0;
}
