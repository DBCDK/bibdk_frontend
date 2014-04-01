<?php
if (!empty($btn_txt_empty)) {
  $button = ' data-button-txt="' . $btn_txt_empty . '"';
}
?>
<div class="worktabs-no-content"<?php print $button; ?>>
<?php print $no_content; ?>
</div>
