#[Stanford FAQ](https://github.com/SU-SWS/stanford_faq)
##### Version: 7.x-4.x

Drupal Features module for creating Frequently asked questions (FAQ). Contains a content type for FAQ and a few default views.

Sub Modules
---

**[Stanford FAQ Related Show Hide View] (modules/stanford_faq_related_show_hide_view)**
FAQs view with bootstrap collapse (show/hide) classes. Displays FAQs related to the page.

**[Stanford FAQ Related Views] (modules/stanford_faq_related_views)**
Displays FAQs related to the taxonomy terms on the page.

**[Stanford FAQ Show Hide Hierarchy] (modules/stanford_faq_show_hide_hierarchy)**
FAQs view with bootstrap collapse (show/hide) classes. Displays FAQs within the hierarchy related to the page.

Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)
This depends on the [FAQ contrib module] (https://www.drupal.org/project/faq). It will need to be installed and enabled.

Configuration
---

After this module is installed and enabled:

1. Create terms for FAQ Categories
2. Add FAQ term reference to content types. 
..* Allow only one term per content type
..* On the Manage Display for the content type, hide the FAQ field from display
2. Create a context to display the FAQs 
..* For the condition, consider either path or node type
..* For the reaction, place the appropriate block view


Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
