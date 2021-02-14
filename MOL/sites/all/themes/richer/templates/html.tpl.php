<!DOCTYPE html>
<html>
  	<head>
    	<link rel="stylesheet" type="text/css" href="/sites/all/themes/richer/assets/fonts/MyFontsWebfontsKit.css">
    	<meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1">
		<?php print $head; ?>
		<title><?php print $head_title; ?></title>
		<?php print $styles; ?>
		<?php print $scripts; ?>
		
	</head>
    
	<body class="<?php print $classes; ?>" <?php print $attributes;?>>
		<div id="skip-link">
		<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
		</div>
		<?php print $page_top; ?>
		<?php print $page; ?>
		<?php print $page_bottom; ?>
    <span id="go-to-top" class="fa fa-long-arrow-up" title="<?php print t('Go to Top');?>"></span>

<!--Start Cookie Script-->
	<script type="text/javascript" src="/64c53b8cbe1d7e02b0b4b349320ae56e.js"></script>
<!--End Cookie Script-->

	</body>
</html>
