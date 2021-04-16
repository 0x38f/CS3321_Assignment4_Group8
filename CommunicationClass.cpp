/*The Communication class derives the chat transcript from the Request Class and emails the record to the associated firm.*/

class Communication {

	Request request;
	
	
	void email() {
		if (request.getChatTranscript() != empty())
			send email(request.getChatTranscript());
	}

	void displayMessage() {
		int chat = request.getChatTranscript.length();
		for (int i = 0; i < chat; i++) {
			if (chat != 0) {
				cout << request.getChatTranscript() << endl;
			}
		}
	}

};
