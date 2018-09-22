

struct node_t {
	node_t() {
		prev = nullptr;
	}
	int value;
	node_t* prev;
};


class stack {
private:
	node_t* top;
	bool is_empty();
public:
	stack() {
		top = nullptr;
	};
	~stack() {
		//TODO
	};

	void push(int);
	int pop();
};


void stack::push(int value) {
    node_t* tmp = new node_t();
    tmp->value = value;
    tmp->prev = top;
    top = tmp;
}


int* stack::pop() {
    if (!is_empty()) {
        int* tmp_val = new int(top->value);
        node_t* tmp_top = top;
        top = top->prev;
        delete tmp_top;
        return tmp_val;
    }
    return nullptr;
}

bool stack::is_empty() {
	return top == nullptr;
}

int main() {
	// int val;
	stack my_stack;

	for (int i = 0; i < 10; ++i) {
		my_stack.push(i);
	}

	//TODO: read stack content

	return 0;
}


// API
// Application Programming Interface



