<?php
dpm($variables);
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>

<!-- first column -->
<div class="span9">
  <?php foreach($items[1] as $item){
    print $item;
  }
  ?>  
</div>

<!-- second column -->
<div class="span5">
  <?php foreach($items[2] as $item){
    print $item;
  }
  ?>    
</div>

<!-- third column -->
<div class="span5">
<?php foreach($items[3] as $item){
    print $item;
  }
  ?>  
  </div>

<!-- fourth column -->
<div class="span5">
  <?php foreach($items[4] as $item){
    print $item;
  }
  ?>  
</div>