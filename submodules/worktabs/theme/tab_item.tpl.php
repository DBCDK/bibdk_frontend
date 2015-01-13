<!-- item -->
<div class="tab-item clearfix">
  <span class="tab-title text-small<?php ($single) ? print ' active' : print ''; ?>">
    <?php print render($title); ?>
  </span>

  <?php if (!$single) : ?>
  <a href="#"  <?php !empty($more_id) ? print 'id="'.$more_id.'"' : '';?>" class="tab-link toggle-worktab-content text-small<?php ($single) ? print ' toggled' : print ''; ?>">
    <span class="icon icon-left icon-blue-down">&nbsp;</span>
    <span class="toggle-text"><?php print render($btn_txt_closed); ?></span>
    <span class="toggle-text hidden"><?php print render($btn_txt_open); ?></span>
  </a>
  <?php endif; ?>

  <div class="tab-content <?php (!$single) ? print 'visuallyhidden' : print ''; ?>">
    <?php print render($content); ?>
  </div>
</div>
<!-- item -->
