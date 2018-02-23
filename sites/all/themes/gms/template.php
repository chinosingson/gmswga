<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


//drupal_add_js('https://maps.googleapis.com/maps/api/js?key=AIzaSyBuaph0cPlMa3BkMyDKZMyKDY-ynHMaC0A&amp;v=3.26', 'external');

function gms_js_alter(&$js) {
  //dpm($js);
  $key = "&key=AIzaSyBuaph0cPlMa3BkMyDKZMyKDY-ynHMaC0A";

  //for geofield input widget
  if(isset($js['//maps.google.com/maps/api/js?sensor=false']))
    $js['//maps.google.com/maps/api/js?sensor=false']['data'] .= $key;

  //for geofield map views style plugin ?! (I think)
  if(isset($js['//maps.googleapis.com/maps/api/js?sensor=false']))
    $js['//maps.googleapis.com/maps/api/js?sensor=false']['data'] .= $key;

}

function gms_preprocess_html(&$variables){
	//$node = menu_get_object();
  //$node = &$variables['node'];
	//if ($node->type == 'page' && $node->nid == 699){
		drupal_add_js(drupal_get_path('theme', 'gms') .'/script.js');
		//drupal_add_css(drupal_get_path('module','wamex').'/js/x-editable/css/bootstrap-editable.css',array('type'=>'file','group'=>CSS_THEME));
		//drupal_add_css(drupal_get_path('module','wamex').'/formvalidation/js/framework/bootstrap-select.min.css',array('type'=>'file','group'=>CSS_THEME));
    //drupal_add_css(libraries_get_path('leaflet') . '/leaflet.css', array('type'=>'file','group'=>CSS_DEFAULT));
    //drupal_add_js(libraries_get_path('leaflet') . '/leaflet.js');
	//} else {

	//	drupal_set_message(print_r($variables),'error');
	//}
}


function gms_preprocess_page(&$variables) {
	//dpm($variables);
  if (@is_object($variables['node'])
	&& count(get_object_vars($variables['node'])) > 0
	&& @$variables['node']->type == 'marketplace') {
    //$variables['show_title'] = FALSE;
		$variables['title'] = FALSE;
		// hide system messages for project nodes
		$variables['show_messages'] = FALSE;
  }

}