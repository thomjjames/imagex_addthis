<?php
/**
 * @file
 * imagex_addthis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_addthis_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
