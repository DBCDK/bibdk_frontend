<article class="article-widget <?php print $class ?> <?php print !empty($span) ? $span : 'span5';?>" >
	
	  <div class="inner">
				<div class="field-title">
					<h3><a href="<?php print $link; ?>"><?php print $title; ?></a></h3>
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
						<a href="<?php print $link; ?>">
							<span class="icon icon-left icon-blue-right">&nbsp;</span><?php print $link_text; ?>
						</a>
					</div>
			</footer>
      <?php endif; ?>
		</div>
		<!-- inner -->
  
  <!-- widget -->

</article>
<!-- widget-wrapper -->
