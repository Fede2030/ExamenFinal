#include "TercerPunto.h"
#include <algorithm>

void Inbox::addEmail(const Email& email) {
    emails.push_back(email);
}

void Inbox::deleteEmail(size_t index) {
    if (index >= 0 && index < emails.size()) {
        emails.erase(emails.begin() + index);
    }
}

std::vector<Email> Inbox::filterEmails(FilterOption filterOption) {
    std::vector<Email> filteredEmails;

    // Utilizamos std::copy_if para filtrar los correos electrónicos
    switch (filterOption) {
    case FilterOption::All:
        filteredEmails = emails;
        break;
    case FilterOption::Read:
        std::copy_if(emails.begin(), emails.end(), std::back_inserter(filteredEmails),
            [](const Email& email) { return email.isRead; });
        break;
    case FilterOption::Unread:
        std::copy_if(emails.begin(), emails.end(), std::back_inserter(filteredEmails),
            [](const Email& email) { return !email.isRead; });
        break;
    case FilterOption::Starred:
        std::copy_if(emails.begin(), emails.end(), std::back_inserter(filteredEmails),
            [](const Email& email) { return email.isStarred; });
        break;
    case FilterOption::Unstarred:
        std::copy_if(emails.begin(), emails.end(), std::back_inserter(filteredEmails),
            [](const Email& email) { return !email.isStarred; });
        break;
    }

    return filteredEmails;
}



