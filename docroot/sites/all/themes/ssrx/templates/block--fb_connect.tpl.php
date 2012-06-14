<?php
// $Id: block.tpl.php,v 1.4.2.3 2011/02/06 22:47:17 andregriffin Exp $
?>
<section id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
  global $user;
  if ($user->uid == 0) {
    $anonymous = 'anonymous';
  }
  else {
    $anonymous = 'content';
  }
  ?>
  <div class="<?php print $anonymous; ?>">
<?php
if ($elements['#block']->subject == 'facebook') {
  global $user;
  if ($user->uid > 0) {
    $elements['#block']->subject == 'facebook';
  }
  else {
    $elements['#block']->subject == 'anonymous';
  }
}
switch ($elements['#block']->subject) {
  case 'registered':
	  $account = user_load($user->uid);

	  // Build the user submitted
	  if (!empty($account->picture)) {
	    $user_picture = $account->picture;
			// now theme the user picture:
			$p = array();
			$p['path'] = $account->picture->uri;
			$p['style_name'] = 'profile_pic';
			$formatted_user_picture = theme('image_style', $p);
	  }
	  else {
	    if ($path = variable_get('user_picture_default', '')) {
	      $vars = array();
	      $vars['style_name'] = 'profile_pic';
	      $vars['path'] = $path;
	      $user_picture = '<img src="' . $path . '" height="50" width="50" title="' . $account->name . '" alt="' . $account->name . '" />' ."\n";
				$formatted_user_picture = $user_picture;
	    }
	    else {
	      $user_picture = 'NAH!';
	    }
	  }

	  $url = 'user/' . $account->uid . '/edit';

	  if (!empty($account->field_fname['und'][0]['safe_value']) && !empty($account->field_lname['und'][0]['safe_value'])) {
	    $name = $account->field_fname['und'][0]['safe_value'] . ' ' . $account->field_lname['und'][0]['safe_value'];
	  }
	  else {
	    $name = $account->name . ' (Real Name Withheld)';
	  }
	  if (!empty($account->field_city['und'][0]['safe_value'])) {
	    $location = $account->field_city['und'][0]['safe_value'];
	  }
	  else {
	    $location = 'Undisclosed City';
	  }

	  if (!empty($account->field_state['und'][0]['safe_value'])) {
	    $location .= ', ' . $account->field_state['und'][0]['safe_value'];
	  }
	  else {
	    $location .= ' in an Unknown State';
	  }
	  if ($location == 'Undisplosed City in an Unknown State') {
	    $location = 'Undisclosed Location';
	  }
	  $words = l($name, $url, array('attributes' => array('class' => array('submitted-name'))));
	  $words .= '<div id="submitted-location">' . $location . '</div>';
		// Figure out the profile image, if there is one
	  $layout = '<div id="submitted"><div id="submitted-pic">' . $formatted_user_picture . '</div>';
	  if (empty($account->picture)) {
	      $layout .= '<div id="picture-empty" class="clearfix">' . l('', 'user/' . $account->uid . '/edit') . '</div>';
	  }

	  $layout .= '<div id="submitted-words">' . $words;
		$layout .= '<div class="fb-connect">' . $content . '<span class="logout">' . l('Log Out', 'user/logout') . '</span></div>';
		$layout .= '</div></div>' . "\n";
		$content = $layout;
  break;

  case 'facebook':
	  $account = user_load($user->uid);

	  // Build the user submitted
	  if (!empty($account->picture)) {
	    $user_picture_obj = $account->picture;
			// now theme the user picture:
			$p = array();
			$p['path'] = $account->picture->uri;
			$p['style_name'] = 'profile_pic';
			$user_picture = theme('image_style', $p);
	  }
	  else {
	    $user_picture = $content ."\n";
	  }

	  $url = 'user/' . $account->uid . '/edit';

	  if (!empty($account->field_fname['und'][0]['safe_value']) && !empty($account->field_lname['und'][0]['safe_value'])) {
	    $name = $account->field_fname['und'][0]['safe_value'] . ' ' . $account->field_lname['und'][0]['safe_value'];
	  }
	  else {
	    $name = $account->name . ' (Real Name Withheld)';
	  }
	  if (!empty($account->field_city['und'][0]['safe_value'])) {
	    $location = $account->field_city['und'][0]['safe_value'];
	  }
	  else {
	    $location = 'Undisclosed City';
	  }

	  if (!empty($account->field_state['und'][0]['safe_value'])) {
	    $location .= ', ' . $account->field_state['und'][0]['safe_value'];
	  }
	  else {
	    $location .= ' in an Unknown State';
	  }
	  if ($location == 'Undisclosed City in an Unknown State') {
	    $location = 'Undisclosed Location';
	  }
	  $words = l($name, $url, array('attributes' => array('class' => array('submitted-name'))));
	  $words .= '<div id="submitted-location">' . $location . '</div>';
	  $layout = '<div id="submitted"><div id="submitted-pic">' . $user_picture . '</div>';
	  $layout .= '<div id="submitted-words">' . $words;
		$layout .= '<div class="fb-connect">' . '<fb:login-button autologoutlink=true></fb:login-button>' . '</div>';
		$layout .= '</div></div>' . "\n";
		$content = $layout;
  break;
  default:
  // So, we need to rebuild 'em
		// substitute perms
    $perms = array();
    drupal_alter('fb_required_perms', $perms);
    $fblogin = str_replace('!perms', implode(',', $perms), '<fb:login-button scope="!perms">Connect</fb:login-button>');
    $layout = array(
			'type' => 'ul',
			'items' => array(
        l('Join Us', 'user/register', array('attributes' => array('id' => 'register', 'class' => array('ssrx', 'button')))),
        l('Log In', 'user/login', array('attributes' => array('id' => 'login', 'class' => array('ssrx', 'button')))),
        $fblogin,
			),
			'attributes' => array('class' => array('ssrx', 'button')),
			'title' => NULL,
    );
    $content = theme_item_list($layout);
  break;
}
?>
  <?php
	if ($_GET['q'] != 'user/login' || $_GET['q'] != 'user/register') {
    print $content;
  }
	elseif ($_GET['q'] == 'user/register') {
		print '<div class="register-thanks">Thanks for Joining Us!</div>';
	}
	else {
		print '';
	}
	?>
  </div>
</section> <!-- /.block -->
