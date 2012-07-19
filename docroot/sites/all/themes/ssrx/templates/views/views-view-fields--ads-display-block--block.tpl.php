<?php
$title = l($fields['title']->content, $fields['field_ad_url']->content, array('attributes'=> array('title' => $fields['title']->content)));
print '<h3>' . $title . '</h3>';
?>
<div class="ad-lines">
<?php
$domain = parse_url($fields['field_ad_url']->content);
$items = array(
  $fields['field_ad_line_1']->content,
  $fields['field_ad_line_2']->content,
  $fields['field_ad_line_3']->content,
  $fields['field_ad_phone']->content,
  l($domain['host'], $fields['field_ad_url']->content, array('attributes'=> array('title' => 'Visit ' . $domain['host']))),
);
foreach ($items as $k => $v) {
  if (empty($v)) {
    unset($items[$k]);
  }
}
print theme('item_list', array('items' => $items));
?>
</div>
