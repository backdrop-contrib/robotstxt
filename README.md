RobotsTxt
=========

Control the contents of your robots.txt file through Backdrop configuration.

Use this module when you are running multiple Backdrop sites from a single code base (multisite) and you need a different robots.txt file for each one. This module generates the robots.txt file dynamically and gives you the chance to edit it, on a per-site basis.

For developers, you can automatically add paths to the robots.txt file by implementing `hook_robotstxt()`. See robotstxt.api.php for more documentation.


Installation
------------

Delete or rename the robots.txt file in the root of your Backdrop installation. Otherwise, the module cannot intercept requests for the /robots.txt path.

Frequently Asked Questions
--------------------------

### Can this module work if I have clean URLs disabled?

Yes it can! In the .htaccess file of your Backdrop's root directory, add the following two lines to the mod_rewrite section, immediately after the line that says "RewriteEngine on":

```
    # Add redirection for the robots.txt path for use with the RobotsTxt module.
    RewriteRule ^(robots.txt)$ index.php?q=$1
```

### How can I install the module with custom default robots.txt?

The module allows adding a default.robots.txt to the defaults folder.

1. Remove the robots.txt from site root.
2. Save your custom robots.txt to "/sites/default/default.robots.txt"
3. Run the module installation.

Current Maintainer
------------------

- David Norman (https://github.com/deekayen)

Credits
-------

- Originally written for Drupal (https://www.drupal.org/project/robotstxt)
- Ported to Backdrop by David Norman (https://github.com/deekayen)

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
