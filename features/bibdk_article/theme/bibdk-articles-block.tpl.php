<?php foreach($articles as $article_row) : ?>
    <div class="<?php echo $article_row['width']; ?>">
      <?php foreach($article_row['articles'] as $article) : ?>
        <?php print $article; ?>
      <?php endforeach;?>
        </div>
  <?php endforeach;?>
