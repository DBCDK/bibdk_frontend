<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<?php
foreach ($items as $key => $item) {
  if ($item){
    foreach ($item as $article) {
      print $article;
    }
  }
}
?>


