


struct msg {
	msg() {
		prev = nullptr; // NULL -> #define NULL 0
	}
	//char* currency_name_fst;
	double currency_amt_fst;
	//char* currency_name_scd;
	double currency_amt_scd;
	msg* prev;
};


// Stack implementation using dynamic memory

msg* create_msg() {
	return new msg();
}

void init_msg(const msg* msg_ptr) {
	//(*msg).currency_name_fst;
	//msg->currency_name_fst; strcpy()
	msg->currency_amt_fst = 130.0;
	msg->currency_amt_scd = 70.0;
}

// main //C89

msg* g_top(nullptr);

void main() {

}

void push(const msg* msg_ptr) {
	if (!is_empty()) {
		msg_ptr->prev = g_top;
	}
	g_top = msg_ptr;
}

msg* pop() {
	if (!is_empty()) {
		msg* top = g_top;
		g_top = g_top->prev;
		return top;
	}
}

bool is_empty() {
	return g_top == nullptr;
}

void del(const msg* msg_ptr) {
	delete msg_ptr;
}


void fill_stack() {
	for (int i = 0; i < 10; ++i) {
		msg* msg_ptr = create_msg();
		init_msg(msg_ptr);
		push(msg_ptr);
	}
}


void read() {
	//TODO: read from top of stack
	//TODO: print to stdout
	//TODO: delete
}


// @deadWasabi