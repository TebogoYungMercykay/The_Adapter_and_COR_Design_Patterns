#include "RequestProcessingHandler.h"
#include <iostream>

void RequestProcessingHandler::handle_request(const std::string& request) {
    if (request == "3") {
        std::cout << "Processing the request." << std::endl;
        std::cout << "Request Successfully processed." << std::endl;
    } else if (this->next_handler) {
        this->next_handler->handle_request(request);
    }
}
