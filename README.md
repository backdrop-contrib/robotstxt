# RobotsTxt

Control the contents of your robots.txt file through Backdrop configuration.

Use this module when you are running multiple Backdrop sites from a single code
base (multisite) and you need a different robots.txt file for each one. This
module generates the robots.txt file dynamically and gives you the chance to
edit it, on a per-site basis.

## Installation

Delete or rename the robots.txt file in the root of your Backdrop installation.
Otherwise, the module cannot intercept requests for the /robots.txt path.

## Usage

Read or contribute to instructions and FAQ in the
[Wiki](https://github.com/backdrop-contrib/robotstxt/wiki).

For developers, you can automatically add paths to the robots.txt file by
implementing `hook_robotstxt()`. See robotstxt.api.php for more documentation.

## Current Maintainer

- [Laryn Kragt Bakker](https://github.com/laryn)

## Credits

- Originally written [for Drupal](https://www.drupal.org/project/robotstxt)
- Ported to Backdrop by [David Norman](https://github.com/deekayen)

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
