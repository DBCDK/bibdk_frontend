<article <?php print $class; ?> >
  <div class="inner">
    <div class="field-title">
      <h3><?php print $title; ?></h3>
    </div>
    <?php if (!empty($image)) : ?>
      <div class="field-image">
        <?php print $image; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($body)): ?>
      <div class="field-body">
        <?php print $body; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($link)): ?>
      <footer class="footer">
        <div class="field-read-more">
          <?php print $link; ?>
          <span class="icon icon-left icon-blue-right">&nbsp;</span>
        </div>
      </footer>
    <?php endif; ?>
  </div>
  <!-- inner -->

  <!-- widget -->

</article>
<!-- widget-wrapper -->
