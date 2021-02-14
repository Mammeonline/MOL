<div id="dexp-countdown"></div>
<div class="dexp-countdown-url"><?php print $event_name; ?></div>

<script type="text/javascript">
<!--
  jQuery(document).ready(function($){
  var timestamp = '<?php print $timestamp; ?>';
  var str_format = '<?php print $str_format; ?>';
  var message = '<?php print $message; ?>';
	$('#dexp-countdown').countdown(timestamp, function(event) {
		$(this).html(event.strftime(str_format));
	}).on('finish.countdown', function(){
		alert(message);
	});;
  });
//-->
</script>

