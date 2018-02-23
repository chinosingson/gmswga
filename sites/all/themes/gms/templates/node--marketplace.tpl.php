<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
	$show_title = $variables['title'];
  $address = $node->field_address;
  $email_address = $node->field_email_address;
  $phone = $node->field_phone;
  $website = $node->field_website;
  $commodity = $node->field_commodity;
  $brands = $node->field_brands;
  $certification = $node->field_certification;
  $standard = $node->field_standard;
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
  <header>
    <?php print render($title_prefix); ?>
    <?php if (!$page && !empty($title)): ?>
    <!--h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2-->
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if ($display_submitted): ?>
    <span class="submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </span>
    <?php endif; ?>
  </header>
  <?php endif; ?>
  <div class="container-fluid marketplace-content">
    <?php //echo "<div class=\"well\" style=\"height: 400px; overflow-y: scroll\"><pre>".print_r($node->body,1)."</pre></div>"; ?>
    <div class="row">
      <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
 			<?php if ($show_title && $title): ?>
      </div>
    </div>
    <div class="row">
			<h1 class="title" id="page-title"><?php print $title; ?></h1>
      <div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
      <blockquote><?php print (!empty($node->field_address) ? $node->field_address[LANGUAGE_NONE][0]['value'] : "-") ?><?php print "<br/>".(!empty($node->body) ? $node->body[LANGUAGE_NONE][0]['value'] : ""); ?></blockquote>
      <div class="marketplace-detail"><h4><i class="fa fa-globe"></i> Website</h4> <?php print (!empty($node->field_website) ? "<a target=\"_blank\" href=\"".$website[LANGUAGE_NONE][0]['url']."\">".$website[LANGUAGE_NONE][0]['url']."</a>" : "-"); ?></div>
      <div class="marketplace-detail"><h4><i class="fa fa-envelope-o"></i> E-mail</h4> <?php print (!empty($node->field_email_address) ? "<a href=\"mailto:".$email_address[LANGUAGE_NONE][0]['email']."\">".$email_address[LANGUAGE_NONE][0]['email']."</a>" : "-"); ?></div>
      <div class="marketplace-detail"><h4><i class="fa fa-phone"></i> Phone</h4> <?php print (!empty($node->field_phone) ? $node->field_phone[LANGUAGE_NONE][0]['value'] : "-"); ?></div>

			<?php endif; ?>
     </div>
      <div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
        <div class="marketplace-detail"><h4>Commodity</h4>
        <?php if(!isset($node->field_commodity)){
          print "-";
        } else {
          for($x = 0; $x < count($commodity[LANGUAGE_NONE]); $x++) {
            print $commodity[LANGUAGE_NONE][$x]['taxonomy_term']->name."<br/>";
          }
        } ?></div>
        <div class="marketplace-detail"><h4>Brands</h4>
        <?php print (!empty($node->field_brands) ? $brands[LANGUAGE_NONE][0]['value'] : "-"); ?></div>
        <div class="marketplace-detail"><h4>Certifications</h4>
        <?php print (!empty($node->field_certification) ? $certification[LANGUAGE_NONE][0]['value'] : "-"); ?></div>
        <div class="marketplace-detail"><h4>Standards</h4>
        <?php print (!empty($node->field_standard) ? $standard[LANGUAGE_NONE][0]['value'] : "-" ); ?></div>
      </div>
    </div>
  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    //print render($content);
  ?>
  </div>
  <?php
    // Only display the wrapper div if there are tags or links.
    $field_tags = render($content['field_tags']);
    $links = render($content['links']);
    if ($field_tags || $links):
  ?>
   <footer>
     <?php print $field_tags; ?>
     <?php print $links; ?>
  </footer>
  <?php endif; ?>
  <?php print render($content['comments']); ?>
</article>
