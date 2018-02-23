<?php

/**
 * @file
 * Functions that need to be loaded on every Drupal request.
 */

/**
 * The current system version.
 */
define('VERSION', '7.56');

/**
 * Core API compatibility.
 */
define('DRUPAL_CORE_COMPATIBILITY', '7.x');

/**
 * Minimum supported version of PHP.
 */
define('DRUPAL_MINIMUM_PHP', '5.2.4');

/**
 * Minimum recommended value of PHP memory_limit.
 */
define('DRUPAL_MINIMUM_PHP_MEMORY_LIMIT', '32M');

/**
 * Error reporting level: display no errors.
 */
define('ERROR_REPORTING_HIDE', 0);

/**
 * Error reporting level: display errors and warnings.
 */
define('ERROR_REPORTING_DISPLAY_SOME', 1);

/**
 * Error reporting level: display all messages.
 */
define('ERROR_REPORTING_DISPLAY_ALL', 2);

/**
 * Indicates that the item should never be removed unless explicitly selected.
 *
 * The item may be removed using cache_clear_all() with a cache ID.
 */
define('CACHE_PERMANENT', 0);

/**
 * Indicates that the item should be removed at the next general cache wipe.
 */
define('CACHE_TEMPORARY', -1);

/**
 * @defgroup logging_severity_levels Logging severity levels
 * @{
 * Logging severity levels as defined in RFC 3164.
 *
 * The WATCHDOG_* constant definitions correspond to the logging severity levels
 * defined in RFC 3164, section 4.1.1. PHP supplies predefined LOG_* constants
 * for use in the syslog() function, but their values on Windows builds do not
 * correspond to RFC 3164. The associated PHP bug report was closed with the
 * comment, "And it's also not a bug, as Windows just have less log levels,"
 * and "So the behavior you're seeing is perfectly normal."
 *
 * @see http://www.faqs.org/rfcs/rfc3164.html
 * @see http://bugs.php.net/bug.php?id=18090
 * @see http://php.net/manual/function.syslog.php
 * @see http://php.net/manual/network.constants.php
 * @see watchdog()
 * @see watchdog_severity_levels()
 */

/**
 * Log message severity -- Emergency: system is unusable.
 */
define('WATCHDOG_EMERGENCY', 0);

/**
 * Log message severity -- Alert: action must be taken immediately.
 */
define('WATCHDOG_ALERT', 1);

/**
 * Log message severity -- Critical conditions.
 */
define('WATCHDOG_CRITICAL', 2);

/**
 * Log message severity -- Error conditions.
 */
define('WATCHDOG_ERROR', 3);

/**
 * Log message severity -- Warning conditions.
 */
define('WATCHDOG_WARNING', 4);

/**
 * Log message severity -- Normal but significant conditions.
 */
define('WATCHDOG_NOTICE', 5);

/**
 * Log message severity -- Informational messages.
 */
define('WATCHDOG_INFO', 6);

/**
 * Log message severity -- Debug-level messages.
 */
define('WATCHDOG_DEBUG', 7);

/**
 * @} End of "defgroup logging_severity_levels".
 */

/**
 * First bootstrap phase: initialize configuration.
 */
define('DRUPAL_BOOTSTRAP_CONFIGURATION', 0);

/**
 * Second bootstrap phase: try to serve a cached page.
 */
define('DRUPAL_BOOTSTRAP_PAGE_CACHE', 1);

/**
 * Third bootstrap phase: initialize database layer.
 */
define('DRUPAL_BOOTSTRAP_DATABASE', 2);

/**
 * Fourth bootstrap phase: initialize the variable system.
 */
define('DRUPAL_BOOTSTRAP_VARIABLES', 3);

/**
 * Fifth bootstrap phase: initialize session handling.
 */
define('DRUPAL_BOOTSTRAP_SESSION', 4);

/**
 * Sixth bootstrap phase: set up the page header.
 */
define('DRUPAL_BOOTSTRAP_PAGE_HEADER', 5);

/**
 * Seventh bootstrap phase: find out language of the page.
 */
define('DRUPAL_BOOTSTRAP_LANGUAGE', 6);

/**
 * Final bootstrap phase: Drupal is fully loaded; validate and fix input data.
 */
define('DRUPAL_BOOTSTRAP_FULL', 7);

/**
 * Role ID for anonymous users; should match what's in the "role" table.
 */
define('DRUPAL_ANONYMOUS_RID', 1);

/**
 * Role ID for authenticated users; should match what's in the "role" table.
 */
define('DRUPAL_AUTHENTICATED_RID', 2);

/**
 * The number of bytes in a kilobyte.
 *
 * For more information, visit http://en.wikipedia.org/wiki/Kilobyte.
 */
define('DRUPAL_KILOBYTE', 1024);

/**
 * The language code used when no language is explicitly assigned.
 *
 * Defined by ISO639-2 for "Undetermined".
 */
define('LANGUAGE_NONE', 'und');

/**
 * The type of language used to define the content language.
 */
define('LANGUAGE_TYPE_CONTENT', 'language_content');

/**
 * The type of language used to select the user interface.
 */
define('LANGUAGE_TYPE_INTERFACE', 'language');

/**
 * The type of language used for URLs.
 */
define('LANGUAGE_TYPE_URL', 'language_url');

/**
 * Language written left to right. Possible value of $language->direction.
 */
define('LANGUAGE_LTR', 0);

/**
 * Language written right to left. Possible value of $language->direction.
 */
define('LANGUAGE_RTL', 1);

/**
 * Time of the current request in seconds elapsed since the Unix Epoch.
 *
 * This differs from $_SERVER['REQUEST_TIME'], which is stored as a float
 * since PHP 5.4.0. Float timestamps confuse most PHP functions
 * (including date_create()).
 *
 * @see http://php.net/manual/reserved.variables.server.php
 * @see http://php.net/manual/function.time.php
 */
define('REQUEST_TIME', (int) $_SERVER['REQUEST_TIME']);

/**
 * Flag used to indicate that text is not sanitized, so run check_plain().
 *
 * @see drupal_set_title()
 */
define('CHECK_PLAIN', 0);

/**
 * Flag used to indicate that text has already been sanitized.
 *
 * @see drupal_set_title()
 */
define('PASS_THROUGH', -1);

/**
 * Signals that the registry lookup cache should be reset.
 */
define('REGISTRY_RESET_LOOKUP_CACHE', 1);

/**
 * Signals that the registry lookup cache should be written to storage.
 */
define('REGISTRY_WRITE_LOOKUP_CACHE', 2);

/**
 * Regular expression to match PHP function names.
 *
 * @see http://php.net/manual/language.functions.php
 */
define('DRUPAL_PHP_FUNCTION_PATTERN', '[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*');

/**
 * A RFC7231 Compliant date.
 *
 * http://tools.ietf.org/html/rfc7231#section-7.1.1.1
 *
 * Example: Sun, 06 Nov 1994 08:49:37 GMT
 *
 * This constant was introduced in PHP 7.0.19 and PHP 7.1.5 but needs to be
 * defined by Drupal for earlier PHP versions.
 */
if (!defined('DATE_RFC7231')) {
  define('DATE_RFC7231', 'D, d M Y H:i:s \G\M\T');
}

/**
 * Provides a caching wrapper to be used in place of large array structures.
 *
 * This class should be extended by systems that need to cache large amounts
 * of data and have it represented as an array to calling functions. These
 * arrays can become very large, so ArrayAccess is used to allow different
 * strategies to be used for caching internally (lazy loading, building caches
 * over time etc.). This can dramatically reduce the amount of data that needs
 * to be loaded from cache backends on each request, and memory usage from
 * static caches of that same data.
 *
 * Note that array_* functions do not work with ArrayAccess. Systems using
 * DrupalCacheArray should use this only internally. If providing API functions
 * that return the full array, this can be cached separately or returned
 * directly. However since DrupalCacheArray holds partial content by design, it
 * should be a normal PHP array or otherwise contain the full structure.
 *
 * Note also that due to limitations in PHP prior to 5.3.4, it is impossible to
 * write directly to the contents of nested arrays contained in this object.
 * Only writes to the top-level array elements are possible. So if you
 * previously had set $object['foo'] = array(1, 2, 'bar' => 'baz'), but later
 * want to change the value of 'bar' from 'baz' to 'foobar', you cannot do so
 * a targeted write like $object['foo']['bar'] = 'foobar'. Instead, you must
 * overwrite the entire top-level 'foo' array with the entire set of new
 * values: $object['foo'] = array(1, 2, 'bar' => 'foobar'). Due to this same
 * limitation, attempts to create references to any contained data, nested or
 * otherwise, will fail silently. So $var = &$object['foo'] will not throw an
 * error, and $var will be populated with the contents of $object['foo'], but
 * that data will be passed by value, not reference. For more information on
 * the PHP limitation, see the note in the official PHP documentation at·
 * http://php.net/manual/arrayaccess.offsetget.php on
 * ArrayAccess::offsetGet().
 *
 * By default, the class accounts for caches where calling functions might
 * request keys in the array that won't exist even after a cache rebuild. This
 * prevents situations where a cache rebuild would be triggered over and over
 * due to a 'missing' item. These cases are stored internally as a value of
 * NULL. This means that the offsetGet() and offsetExists() methods
 * must be overridden if caching an array where the top level values can
 * legitimately be NULL, and where $object->offsetExists() needs to correctly
 * return (equivalent to array_key_exists() vs. isset()). This should not
 * be necessary in the majority of cases.
 *
 * Classes extending this class must override at least the
 * resolveCacheMiss() method to have a working implementation.
 *
 * offsetSet() is not overridden by this class by default. In practice this
 * means that assigning an offset via arrayAccess will only apply while the
 * object is in scope and will not be written back to the persistent cache.
 * This follows a similar pattern to static vs. persistent caching in
 * procedural code. Extending classes may wish to alter this behavior, for
 * example by overriding offsetSet() and adding an automatic call to persist().
 *
 * @see SchemaCache
 */
abstract class DrupalCacheArray implements ArrayAccess {

  /**
   * A cid to pass to cache_set() and cache_get().
   */
  protected $cid;

  /**
   * A bin to pass to cache_set() and cache_get().
   */
  protected $bin;

  /**
   * An array of keys to add to the cache at the end of the request.
   */
  protected $keysToPersist = array();

  /**
   * Storage for the data itself.
   */
  protected $storage = array();

  /**
   * Constructs a DrupalCacheArray object.
   *
   * @param $cid
   *   The cid for the array being cached.
   * @param $bin
   *   The bin to cache the array.
   */
  public function __construct($cid, $bin) {
    $this->cid = $cid;
    $this->bin = $bin;

    if ($cached = cache_get($this->cid, $this->bin)) {
     $this->storage = $cached->data;
    }
  }

  /**
   * Implements ArrayAccess::offsetExists().
   */
  public function offsetExists($offset) {
    return $this->offsetGet($offset) !== NULL;
  }

  /**
   * Implements ArrayAccess::offsetGet().
   */
  public function offsetGet($offset) {
    if (isset($this->storage[$offset]) || array_key_exists($offset, $this->storage)) {
      return $this->storage[$offset];
    }
    else {
      return $this->resolveCacheMiss($offset);
    }
  }

  /**
   * Implements ArrayAccess::offsetSet().
   */
  public function offsetSet($offset, $value) {
    $this->storage[$offset] = $value;
  }

  /**
   * Implements ArrayAccess::offsetUnset().
   */
  public function offsetUnset($offset) {
    unset($this->storage[$offset]);
  }

  /**
   * Flags an offset value to be written to the persistent cache.
   *
   * If a value is assigned to a cache object with offsetSet(), by default it
   * will not be written to the persistent cache unless it is flagged with this
   * method. This allows items to be cached for the duration of a request,
   * without necessarily writing back to the persistent cache at the end.
   *
   * @param $offset
   *   The array offset that was requested.
   * @param $persist
   *   Optional boolean to specify whether the offset should be persisted or
   *   not, defaults to TRUE. When called with $persist = FALSE the offset will
   *   be unflagged so that it will not be written at the end of the request.
   */
  protected function persist($offset, $persist = TRUE) {
    $this->keysToPersist[$offset] = $persist;
  }

  /**
   * Resolves a cache miss.
   *
   * When an offset is not found in the object, this is treated as a cache
   * miss. This method allows classes implementing the interface to look up
   * the actual value and allow it to be cached.
   *
   * @param $offset
   *   The offset that was requested.
   *
   * @return
   *   The value of the offset, or NULL if no value was found.
   */
  abstract protected function resolveCacheMiss($offset);

  /**
   * Writes a value to the persistent cache immediately.
   *
   * @param $data
   *   The data to write to the persistent cache.
   * @param $lock
   *   Whether to acquire a lock before writing to cache.
   */
  protected function set($data, $lock = TRUE) {
    // Lock cache writes to help avoid stampedes.
    // To implement locking for cache misses, override __construct().
    $lock_name = $this->cid . ':' . $this->bin;
    if (!$lock || lock_acquire($lock_name)) {
      if ($cached = cache_get($this->cid, $this->bin)) {
        $data = $cached->data + $data;
      }
      cache_set($this->cid, $data, $this->bin);
      if ($lock) {
        lock_release($lock_name);
      }
    }
  }

  /**
   * Destructs the DrupalCacheArray object.
   */
  public function __destruct() {
    $data = array();
    foreach ($this->keysToPersist as $offset => $persist) {
      if ($persist) {
        $data[$offset] = $this->storage[$offset];
      }
    }
    if (!empty($data)) {
      $this->set($data);
    }
  }
}

/**
 * Starts the timer with the specified name.
 *
 * If you start and stop the same timer multiple times, the measured intervals
 * will be accumulated.
 *
 * @param $name
 *   The name of the timer.
 */
function timer_start($name) {
  global $timers;

  $timers[$name]['start'] = microtime(TRUE);
  $timers[$name]['count'] = isset($timers[$name]['count']) ? ++$timers[$name]['count'] : 1;
}

/**
 * Reads the current timer value without stopping the timer.
 *
 * @param $name
 *   The name of the timer.
 *
 * @return
 *   The current timer value in ms.
 */
function timer_read($name) {
  global $timers;

  if (isset($timers[$name]['start'])) {
    $stop = microtime(TRUE);
    $diff = round(($stop - $timers[$name]['start']) * 1000, 2);

    if (isset($timers[$name]['time'])) {
      $diff += $timers[$name]['time'];
    }
    return $diff;
  }
  return $timers[$name]['time'];
}

/**
 * Stops the timer with the specified name.
 *
 * @param $name
 *   The name of the timer.
 *
 * @return
 *   A timer array. The array contains the number of times the timer has been
 *   started and stopped (count) and the accumulated timer value in ms (time).
 */
function timer_stop($name) {
  global $timers;

  if (isset($timers[$name]['start'])) {
    $stop = microtime(TRUE);
    $diff = round(($stop - $timers[$name]['start']) * 1000, 2);
    if (isset($timers[$name]['time'])) {
      $timers[$name]['time'] += $diff;
    }
    else {
      $timers[$name]['time'] = $diff;
    }
    unset($timers[$name]['start']);
  }

  return $timers[$name];
}

/**
 * Returns the appropriate configuration directory.
 *
 * Returns the configuration path based on the site's hostname, port, and
 * pathname. See default.settings.php for examples on how the URL is converted
 * to a directory.
 *
 * @param bool $require_settings
 *   Only configuration directories with an existing settings.php file
 *   will be recognized. Defaults to TRUE. During initial installation,
 *   this is set to FALSE so that Drupal can detect a matching directory,
 *   then create a new settings.php file in it.
 * @param bool $reset
 *   Force a full search for matching directories even if one had been
 *   found previously. Defaults to FALSE.
 *
 * @return
 *   The path of the matching directory.
 *
 * @see default.settings.php
 */
function conf_path($require_settings = TRUE, $reset = FALSE) {
  $conf = &drupal_static(__FUNCTION__, '');

  if ($conf && !$reset) {
    return $conf;
  }

  $confdir = 'sites';

  $sites = array();
  if (file_exists(DRUPAL_ROOT . '/' . $confdir . '/sites.php')) {
    // This will overwrite $sites with the desired mappings.
    include(DRUPAL_ROOT . '/' . $confdir . '/sites.php');
  }

  $uri = explode('/', $_SERVER['SCRIPT_NAME'] ? $_SERVER['SCRIPT_NAME'] : $_SERVER['SCRIPT_FILENAME']);
  $server = explode('.', implode('.', array_reverse(explode(':', rtrim($_SERVER['HTTP_HOST'], '.')))));
  for ($i = count($uri) - 1; $i > 0; $i--) {
    for ($j = count($server); $j > 0; $j--) {
      $dir = implode('.', array_slice($server, -$j)) . implode('.', array_slice($uri, 0, $i));
      if (isset($sites[$dir]) && file_exists(DRUPAL_ROOT . '/' . $confdir . '/' . $sites[$dir])) {
        $dir = $sites[$dir];
      }
      if (file_exists(DRUPAL_ROOT . '/' . $confdir . '/' . $dir . '/settings.php') || (!$require_settings && file_exists(DRUPAL_ROOT . '/' . $confdir . '/' . $dir))) {
        $conf = "$confdir/$dir";
        return $conf;
      }
    }
  }
  $conf = "$confdir/default";
  return $conf;
}

/**
 * Sets appropriate server variables needed for command line scripts to work.
 *
 * This function can be called by command line scripts before bootstrapping
 * Drupal, to ensure that the page loads with the desired server parameters.
 * This is because many parts of Drupal assume that they are running in a web
 * browser and therefore use information from the global PHP $_SERVER variable
 * that does not get set when Drupal is run from the command line.
 *
 * In many cases, the default way in which this function populates the $_SERVER
 * variable is sufficient, and it can therefore be called without passing in
 * any input. However, command line scripts running on a multisite installation
 * (or on any installation that has settings.php stored somewhere other than
 * the sites/default folder) need to pass in the URL of the site to allow
 * Drupal to detect the correct location of the settings.php file. Passing in
 * the 'url' parameter is also required for functions like request_uri() to
 * return the expected values.
 *
 * Most other parameters do not need to be passed in, but may be necessary in
 * some cases; for example, if Drupal's ip_address() function needs to return
 * anything but the standard localhost value ('127.0.0.1'), the command line
 * script should pass in the desired value via the 'REMOTE_ADDR' key.
 *
 * @param $variables
 *   (optional) An associative array of variables within $_SERVER that should
 *   be replaced. If the special element 'url' is provided in this array, it
 *   will be used to populate some of the server defaults; it should be set to
 *   the URL of the current page request, excluding any $_GET request but
 *   including the script name (e.g., http://www.example.com/mysite/index.php).
 *
 * @see conf_path()
 * @see request_uri()
 * @see ip_address()
 */
function drupal_override_server_variables($variables = array()) {
  // Allow the provided URL to override any existing values in $_SERVER.
  if (isset($variables['url'])) {
    $url = parse_url($variables['url']);
    if (isset($url['host'])) {
      $_SERVER['HTTP_HOST'] = $url['host'];
    }
    if (isset($url['path'])) {
      $_SERVER['SCRIPT_NAME'] = $url['path'];
    }
    unset($variables['url']);
  }
  // Define default values for $_SERVER keys. These will be used if $_SERVER
  // does not already define them and no other values are passed in to this
  // function.
  $defaults = array(
    'HTTP_HOST' => 'localhost',
    'SCRIPT_NAME' => NULL,
    'REMOTE_ADDR' => '127.0.0.1',
    'REQUEST_METHOD' => 'GET',
    'SERVER_NAME' => NULL,
    'SERVER_SOFTWARE' => NULL,
    'HTTP_USER_AGENT' => NULL,
  );
  // Replace elements of the $_SERVER array, as appropriate.
  $_SERVER = $variables + $_SERVER + $defaults;
}

/**
 * Initializes the PHP environment.
 */
function drupal_environment_initialize() {
  if (!isset($_SERVER['HTTP_REFERER'])) {
    $_SERVER['HTTP_REFERER'] = '';
  }
  if (!isset($_SERVER['SERVER_PROTOCOL']) || ($_SERVER['SERVER_PROTOCOL'] != 'HTTP/1.0' && $_SERVER['SERVER_PROTOCOL'] != 'HTTP/1.1')) {
    $_SERVER['SERVER_PROTOCOL'] = 'HTTP/1.0';
  }

  if (isset($_SERVER['HTTP_HOST'])) {
    // As HTTP_HOST is user input, ensure it only contains characters allowed
    // in hostnames. See RFC 952 (and RFC 2181).
    // $_SERVER['HTTP_HOST'] is lowercased here per specifications.
    $_SERVER['HTTP_HOST'] = strtolower($_SERVER['HTTP_HOST']);
    if (!drupal_valid_http_host($_SERVER['HTTP_HOST'])) {
      // HTTP_HOST is invalid, e.g. if containing slashes it may be an attack.
      header($_SERVER['SERVER_PROTOCOL'] . ' 400 Bad Request');
      exit;
    }
  }
  else {
    // Some pre-HTTP/1.1 clients will not send a Host header. Ensure the key is
    // defined for E_ALL compliance.
    $_SERVER['HTTP_HOST'] = '';
  }

  // When clean URLs are enabled, emulate ?q=foo/bar using REQUEST_URI. It is
  // not possible to append the query string using mod_rewrite without the B
  // flag (this was added in Apache 2.2.8), because mod_rewrite unescapes the
  // path before passing it on to PHP. This is a problem when the path contains
  // e.g. "&" or "%" that have special meanings in URLs and must be encoded.
  $_GET['q'] = request_path();

  // Enforce E_ALL, but allow users to set levels not part of E_ALL.
  error_reporting(E_ALL | error_reporting());

  // Override PHP settings required for Drupal to work properly.
  // sites/default/default.settings.php contains more runtime settings.
  // The .htaccess file contains settings that cannot be changed at runtime.

  // Don't escape quotes when reading files from the database, disk, etc.
  ini_set('magic_quotes_runtime', '0');
  // Use session cookies, not transparent sessions that puts the session id in
  // the query string.
  ini_set('session.use_cookies', '1');
  ini_set('session.use_only_cookies', '1');
  ini_set('session.use_trans_sid', '0');
  // Don't send HTTP headers using PHP's session handler.
  // An empty string is used here to disable the cache limiter.
  ini_set('session.cache_limiter', '');
  // Use httponly session cookies.
  ini_set('session.cookie_httponly', '1');

  // Set sane locale settings, to ensure consistent string, dates, times and
  // numbers handling.
  setlocale(LC_ALL, 'C');
}

/**
 * Validates that a hostname (for example $_SERVER['HTTP_HOST']) is safe.
 *
 * @return
 *  TRUE if only containing valid characters, or FALSE otherwise.
 */
function drupal_valid_http_host($host) {
  // Limit the length of the host name to 1000 bytes to prevent DoS attacks with
  // long host names.
  return strlen($host) <= 1000
    // Limit the number of subdomains and port separators to prevent DoS attacks
    // in conf_path().
    && substr_count($host, '.') <= 100
    && substr_count($host, ':') <= 100
    && preg_match('/^\[?(?:[a-zA-Z0-9-:\]_]+\.?)+$/', $host);
}

/**
 * Checks whether an HTTPS request is being served.
 *
 * @return bool
 *   TRUE if the request is HTTPS, FALSE otherwise.
 */
function drupal_is_https() {
  return isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on';
}

/**
 * Sets the base URL, cookie domain, and session name from configuration.
 */
function drupal_settings_initialize() {
  global $base_url, $base_path, $base_root;

  // Export these settings.php variables to the global namespace.
  global $databases, $cookie_domain, $conf, $installed_profile, $update_free_access, $db_url, $db_prefix, $drupal_hash_salt, $is_https, $base_secure_url, $base_insecure_url;
  $conf = array();

  if (file_exists(DRUPAL_ROOT . '/' . conf_path() . '/settings.php')) {
    include_once DRUPAL_ROOT . '/' . conf_path() . '/settings.php';
  }
  $is_https = drupal_is_https();

  if (isset($base_url)) {
    // Parse fixed base URL from settings.php.
    $parts = parse_url($base_url);
    if (!isset($parts['path'])) {
      $parts['path'] = '';
    }
    $base_path = $parts['path'] . '/';
    // Build $base_root (everything until first slash after "scheme://").
    $base_root = substr($base_url, 0, strlen($base_url) - strlen($parts['path']));
  }
  else {
    // Create base URL.
    $http_protocol = $is_https ? 'https' : 'http';
    $base_root = $http_protocol . '://' . $_SERVER['HTTP_HOST'];

    $base_url = $base_root;

    // $_SERVER['SCRIPT_NAME'] can, in contrast to $_SERVER['PHP_SELF'], not
    // be modified by a visitor.
    if ($dir = rtrim(dirname($_SERVER['SCRIPT_NAME']), '\/')) {
      $base_path = $dir;
      $base_url .= $base_path;
      $base_path .= '/';
    }
    else {
      $base_path = '/';
    }
  }
  $base_secure_url = str_replace('http://', 'https://', $base_url);
  $base_insecure_url = str_replace('https://', 'http://', $base_url);

  if ($cookie_domain) {
    // If the user specifies the cookie domain, also use it for session name.
    $session_name = $cookie_domain;
  }
  else {
    // Otherwise use $base_url as session name, without the protocol
    // to use the same session identifiers across HTTP and HTTPS.
    list( , $session_name) = explode('://', $base_url, 2);
    // HTTP_HOST can be modified by a visitor, but we already sanitized it
    // in drupal_settings_initialize().
    if (!empty($_SERVER['HTTP_HOST'])) {
      $cookie_domain = $_SERVER['HTTP_HOST'];
      // Strip leading periods, www., and port numbers from cookie domain.
      $cookie_domain = ltrim($cookie_domain, '.');
      if (strpos($cookie_domain, 'www.') === 0) {
        $cookie_domain = substr($cookie_domain, 4);
      }
      $cookie_domain = explode(':', $cookie_domain);
      $cookie_domain = '.' . $cookie_domain[0];
    }
  }
  // Per RFC 2109, cookie domains must contain at least one dot other than the
  // first. For hosts such as 'localhost' or IP Addresses we don't set a cookie domain.
  if (count(explode('.', $cookie_domain)) > 2 && !is_numeric(str_replace('.', '', $cookie_domain))) {
    ini_set('session.cookie_domain', $cookie_domain);
  }
  // To prevent session cookies from being hijacked, a user can configure the
  // SSL version of their website to only transfer session cookies via SSL by
  // using PHP's session.cookie_secure setting. The browser will then use two
  // separate session cookies for the HTTPS and HTTP versions of the site. So we
  // must use different session identifiers for HTTPS and HTTP to prevent a
  // cookie collision.
  if ($is_https) {
    ini_set('session.cookie_secure', TRUE);
  }
  $prefix = ini_get('session.cookie_secure') ? 'SSESS' : 'SESS';
  session_name($prefix . substr(hash('sha256', $session_name), 0, 32));
}

/**
 * Returns and optionally sets the filename for a system resource.
 *
 * The filename, whether provided, cached, or retrieved from the database, is
 * only returned if the file exists.
 *
 * This function plays a key role in allowing Drupal's resources (modules
 * and themes) to be located in different places depending on a site's
 * configuration. For example, a module 'foo' may legally be located
 * in any of these three places:
 *
 * modules/foo/foo.module
 * sites/all/modules/foo/foo.module
 * sites/example.com/modules/foo/foo.module
 *
 * Calling drupal_get_filename('module', 'foo') will give you one of
 * the above, depending on where the module is located.
 *
 * @param $type
 *   The type of the item (theme, theme_engine, module, profile).
 * @param $name
 *   The name of the item for which the filename is requested.
 * @param $filename
 *   The filename of the item if it is to be set explicitly rather
 *   than by consulting the database.
 * @param bool $trigger_error
 *   Whether to trigger an error when a file is missing or has unexpectedly
 *   moved. This defaults to TRUE, but can be set to FALSE by calling code that
 *   merely wants to check whether an item exists in the filesystem.
 *
 * @return
 *   The filename of the requested item or NULL if the item is not found.
 */
function drupal_get_filename($type, $name, $filename = NULL, $trigger_error = TRUE) {
  // The $files static variable will hold the locations of all requested files.
  // We can be sure that any file listed in this static variable actually
  // exists as all additions have gone through a file_exists() check.
  // The location of files will not change during the request, so do not use
  // drupal_static().
  static $files = array();

  // Profiles are a special case: they have a fixed location and naming.
  if ($type == 'profile') {
    $profile_filename = "profiles/$name/$name.profile";
    $files[$type][$name] = file_exists($profile_filename) ? $profile_filename : FALSE;
  }
  if (!isset($files[$type])) {
    $files[$type] = array();
  }

  if (!empty($filename) && file_exists($filename)) {
    // Prime the static cache with the provided filename.
    $files[$type][$name] = $filename;
  }
  elseif (isset($files[$type][$name])) {
    // This item had already been found earlier in the request, either through
    // priming of the static cache (for example, in system_list()), through a
    // lookup in the {system} table, or through a file scan (cached or not). Do
    // nothing.
  }
  else {
    // Look for the filename listed in the {system} table. Verify that we have
    // an active database connection before doing so, since this function is
    // called both before we have a database connection (i.e. during
    // installation) and when a database connection fails.
    $database_unavailable = TRUE;
    try {
      if (function_exists('db_query')) {
        $file = db_query("SELECT filename FROM {system} WHERE name = :name AND type = :type", array(':name' => $name, ':type' => $type))->fetchField();
        if ($file !== FALSE && file_exists(DRUPAL_ROOT . '/' . $file)) {
          $files[$type][$name] = $file;
        }
        $database_unavailable = FALSE;
      }
    }
    catch (Exception $e) {
      // The database table may not exist because Drupal is not yet installed,
      // the database might be down, or we may have done a non-database cache
      // flush while $conf['page_cache_without_database'] = TRUE and
      // $conf['page_cache_invoke_hooks'] = TRUE. We have a fallback for these
      // cases so we hide the error completely.
    }
    // Fall back to searching the filesystem if the database could not find the
    // file or the file does not exist at the path returned by the database.
    if (!isset($files[$type][$name])) {
      $files[$type][$name] = _drupal_get_filename_fallback($type, $name, $trigger_error, $database_unavailable);
    }
  }

  if (isset($files[$type][$name])) {
    return $files[$type][$name];
  }
}

/**
 * Performs a cached file system scan as a fallback when searching for a file.
 *
 * This function looks for the requested file by triggering a file scan,
 * caching the new location if the file has moved and caching the miss
 * if the file is missing. If a file had been marked as missing in a previous
 * file scan, or if it has been marked as moved and is still in the last known
 * location, no new file scan will be performed.
 *
 * @param string $type
 *   The type of the item (theme, theme_engine, module, profile).
 * @param string $name
 *   The name of the item for which the filename is requested.
 * @param bool $trigger_error
 *   Whether to trigger an error when a file is missing or has unexpectedly
 *   moved.
 * @param bool $database_unavailable
 *   Whether this function is being called because the Drupal database could
 *   not be queried for the file's location.
 *
 * @return
 *   The filename of the requested item or NULL if the item is not found.
 *
 * @see drupal_get_filename()
 */
function _drupal_get_filename_fallback($type, $name, $trigger_error, $database_unavailable) {
  $file_scans = &_drupal_file_scan_cache();
  $filename = NULL;

  // If the cache indicates that the item is missing, or we can verify that the
  // item exists in the location the cache says it exists in, use that.
  if (isset($file_scans[$type][$name]) && ($file_scans[$type][$name] === FALSE || file_exists($file_scans[$type][$name]))) {
    $filename = $file_scans[$type][$name];
  }
  // Otherwise, perform a new file scan to find the item.
  else {
    $filename = _drupal_get_filename_perform_file_scan($type, $name);
    // Update the static cache, and mark the persistent cache for updating at
    // the end of the page request. See drupal_file_scan_write_cache().
    $file_scans[$type][$name] = $filename;
    $file_scans['#write_cache'] = TRUE;
  }

  // If requested, trigger a user-level warning about the missing or
  // unexpectedly moved file. If the database was unavailable, do not trigger a
  // warning in the latter case, though, since if the {system} table could not
  // be queried there is no way to know if the location found here was
  // "unexpected" or not.
  if ($trigger_error) {
    $error_type = $filename === FALSE ? 'missing' : 'moved';
    if ($error_type == 'missing' || !$database_unavailable) {
      _drupal_get_filename_fallback_trigger_error($type, $name, $error_type);
    }
  }

  // The cache stores FALSE for files that aren't found (to be able to
  // distinguish them from files that have not yet been searched for), but
  // drupal_get_filename() expects NULL for these instead, so convert to NULL
  // before returning.
  if ($filename === FALSE) {
    $filename = NULL;
  }
  return $filename;
}

/**
 * Returns the current list of cached file system scan results.
 *
 * @return
 *   An associative array tracking the most recent file scan results for all
 *   files that have had scans performed. The keys are the type and name of the
 *   item that was searched for, and the values can be either:
 *   - Boolean FALSE if the item was not found in the file system.
 *   - A string pointing to the location where the item was found.
 */
function &_drupal_file_scan_cache() {
  $file_scans = &drupal_static(__FUNCTION__, array());

  // The file scan results are stored in a persistent cache (in addition to the
  // static cache) but because this function can be called before the
  // persistent cache is available, we must merge any items that were found
  // earlier in the page request into the results from the persistent cache.
  if (!isset($file_scans['#cache_merge_done'])) {
    try {
      if (function_exists('cache_get')) {
        $cache = cache_get('_drupal_file_scan_cache', 'cache_bootstrap');
        if (!empty($cache->data)) {
          // File scan results from the current request should take precedence
          // over the results from the persistent cache, since they are newer.
          $file_scans = drupal_array_merge_deep($cache->data, $file_scans);
        }
        // Set a flag to indicate that the persistent cache does not need to be
        // merged again.
        $file_scans['#cache_merge_done'] = TRUE;
      }
    }
    catch (Exception $e) {
      // Hide the error.
    }
  }

  return $file_scans;
}

/**
 * Performs a file system scan to search for a system resource.
 *
 * @param $type
 *   The type of the item (theme, theme_engine, module, profile).
 * @param $name
 *   The name of the item for which the filename is requested.
 *
 * @return
 *   The filename of the requested item or FALSE if the item is not found.
 *
 * @see drupal_get_filename()
 * @see _drupal_get_filename_fallback()
 */
function _drupal_get_filename_perform_file_scan($type, $name) {
  // The location of files will not change during the request, so do not use
  // drupal_static().
  static $dirs = array(), $files = array();

  // We have a consistent directory naming: modules, themes...
  $dir = $type . 's';
  if ($type == 'theme_engine') {
    $dir = 'themes/engines';
    $extension = 'engine';
  }
  elseif ($type == 'theme') {
    $extension = 'info';
  }
  else {
    $extension = $type;
  }

  // Check if we had already scanned this directory/extension combination.
  if (!isset($dirs[$dir][$extension])) {
    // Log that we have now scanned this directory/extension combination
    // into a static variable so as to prevent unnecessary file scans.
    $dirs[$dir][$extension] = TRUE;
    if (!function_exists('drupal_system_listing')) {
      require_once DRUPAL_ROOT . '/includes/common.inc';
    }
    // Scan the appropriate directories for all files with the requested
    // extension, not just the file we are currently looking for. This
    // prevents unnecessary scans from being repeated when this function is
    // called more than once in the same page request.
    $matches = drupal_system_listing("/^" . DRUPAL_PHP_FUNCTION_PATTERN . "\.$extension$/", $dir, 'name', 0);
    foreach ($matches as $matched_name => $file) {
      // Log the locations found in the file scan into a static variable.
      $files[$type][$matched_name] = $file->uri;
    }
  }

  // Return the results of the file system scan, or FALSE to indicate the file
  // was not found.
  return isset($files[$type][$name]) ? $files[$type][$name] : FALSE;
}

/**
 * Triggers a user-level warning for missing or unexpectedly moved files.
 *
 * @param $type
 *   The type of the item (theme, theme_engine, module, profile).
 * @param $name
 *   The name of the item for which the filename is requested.
 * @param $error_type
 *   The type of the error ('missing' or 'moved').
 *
 * @see drupal_get_filename()
 * @see _drupal_get_filename_fallback()
 */
function _drupal_get_filename_fallback_trigger_error($type, $name, $error_type) {
  // Hide messages due to known bugs that will appear on a lot of sites.
  // @todo Remove this in https://www.drupal.org/node/2383823
  if (empty($name)) {
    return;
  }

  // Make sure we only show any missing or moved file errors only once per
  // request.
  static $errors_triggered = array();
  if (empty($errors_triggered[$type][$name][$error_type])) {
    // Use _drupal_trigger_error_with_delayed_logging() here since these are
    // triggered during low-level operations that cannot necessarily be
    // interrupted by a watchdog() call.
    if ($error_type == 'missing') {
      _drupal_trigger_error_with_delayed_logging(format_string('The following @type is missing from the file system: %name. For information about how to fix this, see <a href="@documentation">the documentation page</a>.', array('@type' => $type, '%name' => $name, '@documentation' => 'https://www.drupal.org/node/2487215')), E_USER_WARNING);
    }
    elseif ($error_type == 'moved') {
      _drupal_trigger_error_with_delayed_logging(format_string('The following @type has moved within the file system: %name. In order to fix this, clear caches or put the @type back in its original location. For more information, see <a href="@documentation">the documentation page</a>.', array('@type' => $type, '%name' => $name, '@documentation' => 'https://www.drupal.org/node/2487215')), E_USER_WARNING);
    }
    $errors_triggered[$type][$name][$error_type] = TRUE;
  }
}

/**
 * Invokes trigger_error() with logging delayed until the end of the request.
 *
 * This is an alternative to PHP's trigger_error() function which can be used
 * during low-level Drupal core operations that need to avoid being interrupted
 * by a watchdog() call.
 *
 * Normally, Drupal's error handler calls watchdog() in response to a
 * trigger_error() call. However, this invokes hook_watchdog() which can run
 * arbitrary code. If the trigger_error() happens in the middle of an
 * operation such as a rebuild operation which should not be interrupted by
 * arbitrary code, that could potentially break or trigger the rebuild again.
 * This function protects against that by delaying the watchdog() call until
 * the end of the current page request.
 *
 * This is an internal function which should only be called by low-level Drupal
 * core functions. It may be removed in a future Drupal 7 release.
 *
 * @param string $error_msg
 *   The error message to trigger. As with trigger_error() itself, this is
 *   limited to 1024 bytes; additional characters beyond that will be removed.
 * @param int $error_type
 *   (optional) The type of error. This should be one of the E_USER family of
 *   constants. As with trigger_error() itself, this defaults to E_USER_NOTICE
 *   if not provided.
 *
 * @see _drupal_log_error()
 */
function _drupal_trigger_error_with_delayed_logging($error_msg, $error_type = E_USER_NOTICE) {
  $delay_logging = &drupal_static(__FUNCTION__, FALSE);
  $delay_logging = TRUE;
  trigger_error($error_msg, $error_type);
  $delay_logging = FALSE;
}

/**
 * Writes the file scan cache to the persistent cache.
 *
 * This cache stores all files marked as missing or moved after a file scan
 * to prevent unnecessary file scans in subsequent requests. This cache is
 * cleared in system_list_reset() (i.e. after a module/theme rebuild).
 */
function drupal_file_scan_write_cache() {
  // Only write to the persistent cache if requested, and if we know that any
  // data previously in the cache was successfully loaded and merged in by
  // _drupal_file_scan_cache().
  $file_scans = &_drupal_file_scan_cache();
  if (isset($file_scans['#write_cache']) && isset($file_scans['#cache_merge_done'])) {
    unset($file_scans['#write_cache']);
    cache_set('_drupal_file_scan_cache', $file_scans, 'cache_bootstrap');
  }
}

/**
 * Loads the persistent variable table.
 *
 * The variable table is composed of values that have been saved in the table
 * with variable_set() as well as those explicitly specified in the
 * configuration file.
 */
function variable_initialize($conf = array()) {
  // NOTE: caching the variables improves performance by 20% when serving
  // cached pages.
  if ($cached = cache_get('variables', 'cache_bootstrap')) {
    $variables = $cached->data;
  }
  else {
    // Cache miss. Avoid a stampede.
    $name = 'variable_init';
    if (!lock_acquire($name, 1)) {
      // Another request is building the variable cache.
      // Wait, then re-run this function.
      lock_wait($name);
      return variable_initialize($conf);
    }
    else {
      // Proceed with variable rebuild.
      $variables = array_map('unserialize', db_query('SELECT name, value FROM {variable}')->fetchAllKeyed());
      cache_set('variables', $variables, 'cache_bootstrap');
      lock_release($name);
    }
  }

  foreach ($conf as $name => $value) {
    $variables[$name] = $value;
  }

  return $variables;
}

/**
 * Returns a persistent variable.
 *
 * Case-sensitivity of the variable_* functions depends on the database
 * collation used. To avoid problems, always use lower case for persistent
 * variable names.
 *
 * @param $name
 *   The name of the variable to return.
 * @param $default
 *   The default value to use if this variable has never been set.
 *
 * @return
 *   The value of the variable. Unserialization is taken care of as necessary.
 *
 * @see variable_del()
 * @see variable_set()
 */
function variable_get($name, $default = NULL) {
  global $conf;

  return isset($conf[$name]) ? $conf[$name] : $default;
}

/**
 * Sets a persistent variable.
 *
 * Case-sensitivity of the variable_* functions depends on the database
 * collation used. To avoid problems, always use lower case for persistent
 * variable names.
 *
 * @param $name
 *   The name of the variable to set.
 * @param $value
 *   The value to set. This can be any PHP data type; these functions take care
 *   of serialization as necessary.
 *
 * @see variable_del()
 * @see variable_get()
 */
function variable_set($name, $value) {
  global $conf;

  db_merge('variable')->key(array('name' => $name))->fields(array('value' => serialize($value)))->execute();

  cache_clear_all('variables', 'cache_bootstrap');

  $conf[$name] = $value;
}

/**
 * Unsets a persistent variable.
 *
 * Case-sensitivity of the variable_* functions depends on the database
 * collation used. To avoid problems, always use lower case for persistent
 * variable names.
 *
 * @param $name
 *   The name of the variable to undefine.
 *
 * @see variable_get()
 * @see variable_set()
 */
function variable_del($name) {
  global $conf;

  db_delete('variable')
    ->condition('name', $name)
    ->execute();
  cache_clear_all('variables', 'cache_bootstrap');

  unset($conf[$name]);
}

/**
 * Retrieves the current page from the cache.
 *
 * Note: we do not serve cached pages to authenticated users, or to anonymous
 * users when $_SESSION is non-empty. $_SESSION may contain status messages
 * from a form submission, the contents of a shopping cart, or other user-
 * specific content that should not be cached and displayed to other users.
 *
 * @param $check_only
 *   (optional) Set to TRUE to only return whether a previous call found a
 *   cache entry.
 *
 * @return
 *   The cache object, if the page was found in the cache, NULL otherwise.
 */
function drupal_page_get_cache($check_only = FALSE) {
  global $base_root;
  static $cache_hit = FALSE;

  if ($check_only) {
    return $cache_hit;
  }

  if (drupal_page_is_cacheable()) {
    $cache = cache_get($base_root . request_uri(), 'cache_page');
    if ($cache !== FALSE) {
      $cache_hit = TRUE;
    }
    return $cache;
  }
}

/**
 * Determines the cacheability of the current page.
 *
 * @param $allow_caching
 *   Set to FALSE if you want to prevent this page from being cached.
 *
 * @return
 *   TRUE if the current page can be cached, FALSE otherwise.
 */
function drupal_page_is_cacheable($allow_caching = NULL) {
  $allow_caching_static = &drupal_static(__FUNCTION__, TRUE);
  if (isset($allow_caching)) {
    $allow_caching_static = $allow_caching;
  }

  return $allow_caching_static && ($_SERVER['REQUEST_METHOD'] == 'GET' || $_SERVER['REQUEST_METHOD'] == 'HEAD')
    && !drupal_is_cli();
}

/**
 * Invokes a bootstrap hook in all bootstrap modules that implement it.
 *
 * @param $hook
 *   The name of the bootstrap hook to invoke.
 *
 * @see bootstrap_hooks()
 */
function bootstrap_invoke_all($hook) {
  // Bootstrap modules should have been loaded when this function is called, so
  // we don't need to tell module_list() to reset its internal list (and we
  // therefore leave the first parameter at its default value of FALSE). We
  // still pass in TRUE for the second parameter, though; in case this is the
  // first time during the bootstrap that module_list() is called, we want to
  // make sure that its internal cache is primed with the bootstrap modules
  // only.
  foreach (module_list(FALSE, TRUE) as $module) {
    drupal_load('module', $module);
    module_invoke($module, $hook);
  }
}

/**
 * Includes a file with the provided type and name.
 *
 * This prevents including a theme, engine, module, etc., more than once.
 *
 * @param $type
 *   The type of item to load (i.e. theme, theme_engine, module).
 * @param $name
 *   The name of the item to load.
 *
 * @return
 *   TRUE if the item is loaded or has already been loaded.
 */
function drupal_load($type, $name) {
  // Once a file is included this can't be reversed during a request so do not
  // use drupal_static() here.
  static $files = array();

  if (isset($files[$type][$name])) {
    return TRUE;
  }

  $filename = drupal_get_filename($type, $name);

  if ($filename) {
    include_once DRUPAL_ROOT . '/' . $filename;
    $files[$type][$name] = TRUE;

    return TRUE;
  }

  return FALSE;
}

/**
 * Sets an HTTP response header for the current page.
 *
 * Note: When sending a Content-Type header, always include a 'charset' type,
 * too. This is necessary to avoid security bugs (e.g. UTF-7 XSS).
 *
 * @param $name
 *   The HTTP header name, or the special 'Status' header name.
 * @param $value
 *   The HTTP header value; if equal to FALSE, the specified header is unset.
 *   If $name is 'Status', this is expected to be a status code followed by a
 *   reason phrase, e.g. "404 Not Found".
 * @param $append
 *   Whether to append the value to an existing header or to replace it.
 */
function drupal_add_http_header($name, $value, $append = FALSE) {
  // The headers as name/value pairs.
  $headers = &drupal_static('drupal_http_headers', array());

  $name_lower = strtolower($name);
  _drupal_set_preferred_header_name($name);

  if ($value === FALSE) {
    $headers[$name_lower] = FALSE;
  }
  elseif (isset($headers[$name_lower]) && $append) {
    // Multiple headers with identical names may be combined using comma (RFC
    // 2616, section 4.2).
    $headers[$name_lower] .= ',' . $value;
  }
  else {
    $headers[$name_lower] = $value;
  }
  drupal_send_headers(array($name => $headers[$name_lower]), TRUE);
}

/**
 * Gets the HTTP response headers for the current page.
 *
 * @param $name
 *   An HTTP header name. If omitted, all headers are returned as name/value
 *   pairs. If an array value is FALSE, the header has been unset.
 *
 * @return
 *   A string containing the header value, or FALSE if the header has been set,
 *   or NULL if the header has not been set.
 */
function drupal_get_http_header($name = NULL) {
  $headers = &drupal_static('drupal_http_headers', array());
  if (isset($name)) {
    $name = strtolower($name);
    return isset($headers[$name]) ? $headers[$name] : NULL;
  }
  else {
    return $headers;
  }
}

/**
 * Sets the preferred name for the HTTP header.
 *
 * Header names are case-insensitive, but for maximum compatibility they should
 * follow "common form" (see RFC 2617, section 4.2).
 */
function _drupal_set_preferred_header_name($name = NULL) {
  static $header_names = array();

  if (!isset($name)) {
    return $header_names;
  }
  $header_names[strtolower($name)] = $name;
}

/**
 * Sends the HTTP response headers that were previously set, adding defaults.
 *
 * Headers are set in drupal_add_http_header(). Default headers are not set
 * if they have been replaced or unset using drupal_add_http_header().
 *
 * @param array $default_headers
 *   (optional) An array of headers as name/value pairs.
 * @param bool $only_default
 *   (optional) If TRUE and headers have already been sent, send only the
 *   specified headers.
 */
function drupal_send_headers($default_headers = array(), $only_default = FALSE) {
  $headers_sent = &drupal_static(__FUNCTION__, FALSE);
  $headers = drupal_get_http_header();
  if ($only_default && $headers_sent) {
    $headers = array();
  }
  $headers_sent = TRUE;

  $header_names = _drupal_set_preferred_header_name();
  foreach ($default_headers as $name => $value) {
    $name_lower = strtolower($name);
    if (!isset($headers[$name_lower])) {
      $headers[$name_lower] = $value;
      $header_names[$name_lower] = $name;
    }
  }
  foreach ($headers as $name_lower => $value) {
    if ($name_lower == 'status') {
      header($_SERVER['SERVER_PROTOCOL'] . ' ' . $value);
    }
    // Skip headers that have been unset.
    elseif ($value !== FALSE) {
      header($header_names[$name_lower] . ': ' . $value);
    }
  }
}

/**
 * Sets HTTP headers in preparation for a page response.
 *
 * Authenticated users are always given a 'no-cache' header, and will fetch a
 * fresh page on every request. This prevents authenticated users from seeing
 * locally cached pages.
 *
 * ETag and Last-Modified headers are not set per default for authenticated
 * users so that browsers do not send If-Modified-Since headers from
 * authenticated user pages. drupal_serve_page_from_cache() will set appropriate
 * ETag and Last-Modified headers for cached pages.
 *
 * @see drupal_page_set_cache()
 */
function drupal_page_header() {
  $headers_sent = &drupal_static(__FUNCTION__, FALSE);
  if ($headers_sent) {
    return TRUE;
  }
  $headers_sent = TRUE;

  $default_headers = array(
    'Expires' => 'Sun, 19 Nov 1978 05:00:00 GMT',
    'Cache-Control' => 'no-cache, must-revalidate',
    // Prevent browsers from sniffing a response and picking a MIME type
    // different from the declared content-type, since that can lead to
    // XSS and other vulnerabilities.
    'X-Content-Type-Options' => 'nosniff',
  );
  drupal_send_headers($default_headers);
}

/**
 * Sets HTTP headers in preparation for a cached page response.
 *
 * The headers allow as much as possible in proxies and browsers without any
 * particular knowledge about the pages. Modules can override these headers
 * using drupal_add_http_header().
 *
 * If the request is conditional (using If-Modified-Since and If-None-Match),
 * and the conditions match those currently in the cache, a 304 Not Modified
 * response is sent.
 */
function drupal_serve_page_from_cache(stdClass $cache) {
  // Negotiate whether to use compression.
  $page_compression = !empty($cache->data['page_compressed']);
  $return_compressed = $page_compression && isset($_SERVER['HTTP_ACCEPT_ENCODING']) && strpos($_SERVER['HTTP_ACCEPT_ENCODING'], 'gzip') !== FALSE;

  // Get headers set in hook_boot(). Keys are lower-case.
  $hook_boot_headers = drupal_get_http_header();

  // Headers generated in this function, that may be replaced or unset using
  // drupal_add_http_headers(). Keys are mixed-case.
  $default_headers = array();

  foreach ($cache->data['headers'] as $name => $value) {
    // In the case of a 304 response, certain headers must be sent, and the
    // remaining may not (see RFC 2616, section 10.3.5). Do not override
    // headers set in hook_boot().
    $name_lower = strtolower($name);
    if (in_array($name_lower, array('content-location', 'expires', 'cache-control', 'vary')) && !isset($hook_boot_headers[$name_lower])) {
      drupal_add_http_header($name, $value);
      unset($cache->data['headers'][$name]);
    }
  }

  // If the client sent a session cookie, a cached copy will only be served
  // to that one particular client due to Vary: Cookie. Thus, do not set
  // max-age > 0, allowing the page to be cached by external proxies, when a
  // session cookie is present unless the Vary header has been replaced or
  // unset in hook_boot().
  $max_age = !isset($_COOKIE[session_name()]) || isset($hook_boot_headers['vary']) ? variable_get('page_cache_maximum_age', 0) : 0;
  $default_headers['Cache-Control'] = 'public, max-age=' . $max_age;

  // Entity tag should change if the output changes.
  $etag = '"' . $cache->created . '-' . intval($return_compressed) . '"';
  header('Etag: ' . $etag);

  // See if the client has provided the required HTTP headers.
  $if_modified_since = isset($_SERVER['HTTP_IF_MODIFIED_SINCE']) ? strtotime($_SERVER['HTTP_IF_MODIFIED_SINCE']) : FALSE;
  $if_none_match = isset($_SERVER['HTTP_IF_NONE_MATCH']) ? stripslashes($_SERVER['HTTP_IF_NONE_MATCH']) : FALSE;

  if ($if_modified_since && $if_none_match
      && $if_none_match == $etag // etag must match
      && $if_modified_since == $cache->created) {  // if-modified-since must match
    header($_SERVER['SERVER_PROTOCOL'] . ' 304 Not Modified');
    drupal_send_headers($default_headers);
    return;
  }

  // Send the remaining headers.
  foreach ($cache->data['headers'] as $name => $value) {
    drupal_add_http_header($name, $value);
  }

  $default_headers['Last-Modified'] = gmdate(DATE_RFC7231, $cache->created);

  // HTTP/1.0 proxies does not support the Vary header, so prevent any caching
  // by sending an Expires date in the past. HTTP/1.1 clients ignores the
  // Expires header if a Cache-Control: max-age= directive is specified (see RFC
  // 2616, section 14.9.3).
  $default_headers['Expires'] = 'Sun, 19 Nov 1978 05:00:00 GMT';

  drupal_send_headers($default_headers);

  // Allow HTTP proxies to cache pages for anonymous users without a session
  // cookie. The Vary header is used to indicates the set of request-header
  // fields that fully determines whether a cache is permitted to use the
  // response to reply to a subsequent request for a given URL without
  // revalidation. If a Vary header has been set in hook_boot(), it is assumed
  // that the module knows how to cache the page.
  if (!isset($hook_boot_headers['vary']) && !variable_get('omit_vary_cookie')) {
    header('Vary: Cookie');
  }

  if ($page_compression) {
    header('Vary: Accept-Encoding', FALSE);
    // If page_compression is enabled, the cache contains gzipped data.
    if ($return_compressed) {
      // $cache->data['body'] is already gzip'ed, so make sure
      // zlib.output_compression does not compress it once more.
      ini_set('zlib.output_compression', '0');
      header('Content-Encoding: gzip');
    }
    else {
      // The client does not support compression, so unzip the data in the
      // cache. Strip the gzip header and run uncompress.
      $cache->data['body'] = gzinflate(substr(substr($cache->data['body'], 10), 0, -8));
    }
  }

  // Print the page.
  print $cache->data['body'];
}

/**
 * Defines the critical hooks that force modules to always be loaded.
 */
function bootstrap_hooks() {
  return array('boot', 'exit', 'watchdog', 'language_init');
}

/**
 * Unserializes and appends elements from a serialized string.
 *
 * @param $obj
 *   The object to which the elements are appended.
 * @param $field
 *   The attribute of $obj whose value should be unserialized.
 */
function drupal_unpack($obj, $field = 'data') {
  if ($obj->$field && $data = unserialize($obj->$field)) {
    foreach ($data as $key => $value) {
      if (!empty($key) && !isset($obj->$key)) {
        $obj->$key = $value;
      }
    }
  }
  return $obj;
}

/**
 * Translates a string to the current language or to a given language.
 *
 * The t() function serves two purposes. First, at run-time it translates
 * user-visible text into the appropriate language. Second, various mechanisms
 * that figure out what text needs to be translated work off t() -- the text
 * inside t() calls is added to the database of strings to be translated.
 * These strings are expected to be in English, so the first argument should
 * always 