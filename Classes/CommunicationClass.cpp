/*The Communication class derives the chat transcript from the Request Class and emails the record to the associated firm.*/
#include <iostream>
#include <string>
#include <iomanip>
#include <array>

#include "RequestClass.cpp"

using namespace std;
using namespace EASendMail;

class Communication {


    void email(string args[]) {

        try
        {
            SmtpMail oMail = gcnew SmtpMail("TryIt");

            // Your Gmail email address
            oMail->From = "deponmore@gmail.com";
            // Set recipient email address, please change it to yours
            oMail->To = "support@deponmore.com";

            // Set email subject
            oMail->Subject = "test email from Managed C++ with Gmail account";
            // Set email body
            oMail->TextBody = "this is a test email sent from Managed C++ project with gmail";

            // Gmail SMTP server address
            SmtpServer^ oServer = gcnew SmtpServer("smtp.gmail.com");
            // Gmail user authentication
            oServer->User = "gmailid@gmail.com";
            oServer->Password = "********";

            // Use 465 port
            oServer->Port = 465;

            // detect SSL/TLS automatically
            oServer->ConnectType = SmtpConnectType::ConnectSSLAuto;

            Console::WriteLine("start to send email with SSL connection...");

            SmtpClient^ oSmtp = gcnew SmtpClient();
            oSmtp->SendMail(oServer, oMail);

            Console::WriteLine("email was sent successfully!");
        }
        catch (Exception^ ep)
        {
            Console::WriteLine("failed to send email with the following error:");
            Console::WriteLine(ep->Message);
        }

    }

    //Displays chat transcript for viewer
	void displayMessage() {
        Request request;

		string chat = request.getChatTranscript();

        //traverse and display the chat transcript
		for (int i = 0; i != chat.end(); i++) {
				cout << request.getChatTranscript() << endl;
			}
		}
	}
void setEmail(string e){
  string email = e;
}
string getEmail(){
  return email;
}
};
