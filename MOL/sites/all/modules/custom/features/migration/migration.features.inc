<?php
/**
 * @file
 * migration.features.inc
 */

/**
 * Implements hook_views_api().
 */
function migration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function migration_image_default_styles() {
  $styles = array();

  // Exported image style: square.
  $styles['square'] = array(
    'label' => 'Square(180x180)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function migration_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'evento' => array(
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => t('Utilizzato per la pubblicazione degli eventi programmati.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'film' => array(
      'name' => t('Film'),
      'base' => 'node_content',
      'description' => t('film'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'libro' => array(
      'name' => t('Libro'),
      'base' => 'node_content',
      'description' => t('Utilizzato per la pubblicazione dei libri.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
