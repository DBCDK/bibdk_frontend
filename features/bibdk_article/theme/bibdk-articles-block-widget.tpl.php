<article class="widget-wrapper">
	<div class="widget <?php print $class ?>">
	  <div class="inner">
				<div class="field-title">
					<h3><a href="<?php print $link; ?>"><?php print $title; ?></a></h3>
				</div>
			<?php if (!empty($body) && $rows > 1): ?>
				<div class="field-body">
				  <?php print $body; ?>
				</div>
			<?php endif; ?>
      <?php if (!empty($link)): ?>
			<footer class="footer">
					<div class="field-read-more">
						<a href="<?php print $link; ?>">
							<span class="icon icon-left icon-blue-right">&#9660;</span><?php print $link_text; ?>
						</a>
					</div>	
			</footer>
      <?php endif; ?>
		</div> 
		<!-- inner -->
  </div> 
  <!-- widget -->

</article>  
<!-- widget-wrapper -->
